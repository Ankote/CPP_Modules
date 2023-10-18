/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:02:09 by aankote           #+#    #+#             */
/*   Updated: 2023/10/18 23:41:36 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::string& ft_trim(std::string& s)
{ 
    s.erase(0, s.find_first_not_of(" \t\n\r"));
    s.erase(s.find_last_not_of(" \t\n\r") + 1);
    return s;
}

bool checkValue(std::string &value)
{
    for (size_t i = 0; i < value.length(); i ++)
    {
        if (value[i]  && value[i] != '-' && value[i] != '+'  && value[i] != '.' && value[i] != ' ' && !std::isdigit(value[i]))
            return (false);
        else if (value[i] && value[i] == '+'&& (value.find('+', i + 1) != std::string::npos  ||  value.find('-', i + 1) != std::string::npos ))
            return (false);
        else if ( value[i] && (value[i] == '-' || value[i] == '+')  && (!value[i + 1] || (value[i + 1] && (!isdigit(value[i + 1])))))
            return (false);
        else if (value[i] && value[i] == '-' &&  (value.find('+', i + 1) != std::string::npos  ||  value.find('-', i + 1) != std::string::npos ))
            return (false);
        else if (value[i] && value[i] == '.'  && (value.find('.', i + 1) != std::string::npos || !value[i + 1]))
            return (false);
    }
    return (true);
}

int isValidDate(int year, int month, int day)
{
    if (year < 2009 || month < 1 || month > 12 || day < 1)
        return 0;
    if (year == 2009 &&  month == 1 &&  day < 2)
        return -1;
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (year % 4 == 0)
        daysInMonth[2] = 29;
    return (day <= daysInMonth[month]);
}

size_t countWords(std::string &line, char separator)
{
    size_t cpt = 0;
    int checker = -1;
    for (size_t i = 0; i < line.length(); i ++)
    {
        if(line[i] != separator && checker == - 1)
        {
            cpt ++;
            checker = 0;
        }
        else if (line[i] == separator && checker == 0)
            checker = -1;
        if (separator == '|' && line[i] == separator && !line[i + 1])
            cpt ++;
    }
    return (cpt);
}

bool checkCharacters(std::string &date)
{
    for (size_t i = 0; i < date.length(); i ++)
    {
        if (date[i]  && date[i] != '|' && date[i] != '-' && date[i] != ' ' && !std::isdigit(date[i]))
            return (false);
        else if (date[i] && date[i] == '|' && i == date.length() - 1)
            return (false);
    }
    return (true);
}


int generateDataBase(std::map<std::string, double> &data)
{
    std::ifstream infileObj;
    infileObj.open("./data.csv");
    if(!infileObj.is_open())
        throw std::ios_base::failure("File not found");
    std::string line;
    getline(infileObj, line, '\n');
    while (getline(infileObj, line, '\n'))
    {
        size_t commatPos = line.find(',');
        if (commatPos != std::string::npos)
        {
            std::string key = line.substr(0, commatPos);
            std::string value = line.substr(commatPos + 1, line.length() - commatPos + 1);
            char *end;
            data[key] = strtod(value.c_str(), &end);
        }
    }
    infileObj.close();
    return (0);
}

void exchange(std::map<std::string, double> &data, std::string &date, std::string value)
{
    char *end;
    for ( std::map<std::string, double>::iterator it = data.begin(); it != data.end(); it++)
    {
    std::map<std::string, double>::iterator next = std::next(it);
    if ((*it).first == ft_trim(date) || next == data.end() || (next != data.end() && (*next).first > ft_trim(date)))
    {
        std::cout << date << "=> " << ft_trim(value) << " = " << (*it).second * strtod(value.c_str(), &end) << std::endl;
        break;
    }
    }
}

bool generateErrors(std::string &year, std::string &month, std::string &day, std::string &value)
{
    char *end;
    if (!isValidDate(atoi(year.c_str()), atoi(month.c_str()), atoi(day.c_str())))
    {
        std::cout << "Invalid date  "<< year << "-" << month << "-" << day <<  std::endl;
        return (false);
    }
    else if (strtod(value.c_str(), &end) < 0)
    {
        std::cout << "Error: not a positive number." << std::endl;
        return (false);
    }
    else if (strtod(value.c_str(), &end) > 1000)
    {
        std::cout << "Error: too large a number." << std::endl;
        return (false);
    }
    return (true);
}

int generate(std::string &date, std::string &value)
{
    std::map<std::string, double> data;
    size_t dash1 = date.find('-');
    size_t dash2 = date.find('-', dash1 + 1);
    std::string year = date.substr(0, dash1);
    std::string month = date.substr(dash1 + 1, dash2 - dash1 - 1 );
    std::string day = date.substr(dash2 + 1);
    generateDataBase(data);
    if (!generateErrors(year, month, day, value))
        return( false);
    else
        exchange(data, date, value);
    return (0);
}

bool checkLine(std::string &line)
{
    size_t dash1 = line.find('-');
    size_t dash2 = line.find('-', dash1 + 1);
    size_t barPos = line.find('|', dash2 + 1);
    std::string date = line.substr(0, barPos);
    std::string value = line.substr(barPos + 1, line.length() - 1);
    
    if (dash1 == std::string::npos)
        return (false);
    if (dash2 == std::string::npos)
        return (false);
    if (barPos == std::string::npos)
        return (false);
    if (!checkCharacters(date) || !checkValue(value))
        return (false);
    if (date.find('-', dash2 + 1) !=  std::string::npos || date.find('|', barPos + 1) !=  std::string::npos)  // for check is there is more than 2 dashes
        return (false);
    if (countWords(date, ' ') != 1 || countWords(value, ' ') != 1)   ///  for check spaces 2020 - 02 -1 invalid
        return (false);
    generate(date, value);
    return (true);
}

void parceFile(char *fileName)
{
    std::ifstream infileObj;
    infileObj.open(fileName);
    
    if(!infileObj.is_open())
            throw std::ios_base::failure("File not found");
    std::string line;
    getline(infileObj, line, '\n');
    if(countWords(line, '|') != 2)
        throw ("Invalid heared !!");
    while (getline(infileObj, line, '\n'))
    {
        if (!checkLine(line))
            std::cout << "Error: bad input => " << line <<  std::endl;
    }
    infileObj.close();
}

int main(int argc, char **argv)
{
    try
    {
        if (argc == 2)
            parceFile(argv[1]);
        else
            std::cout << "Can't open file" << std::endl;
    }
    catch(const char *s)
    {
        std::cerr << s << '\n';
    }
}

