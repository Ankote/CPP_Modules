/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:35:20 by aankote           #+#    #+#             */
/*   Updated: 2023/10/23 21:03:52 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool isOperator(char c)
{
    if (c != '+' && c != '-' && c != '*' &&  c != '/')
        return (false);
    return (true);
}

std::string  splitArg(std::string &line)
{
    std::string str = "";
    for (size_t i = 0; i < line.length(); i ++)
    {
        if(!isdigit(line[i]) && !isOperator(line[i]) && line[i] != ' ')
             throw std::out_of_range("Bas input");
        else if (line[i] != ' ')
            str += line[i];
    }
    return (str);
}

void RPN(std::string &line)
{
    std::stack<double> stack;
    for (size_t i = 0; i < line.length(); i ++)
    {
        
        if (stack.size() < 2 && isOperator(line[i]))
            throw std::out_of_range("No result, maybe dCode do no know (yet) how to compute this calculation ?!");
        else if (isdigit(line[i]))
        {
            std::string charToString(1, line[i]);
            stack.push(atof(charToString.c_str()));
        }
        else if (isOperator(line[i]))
            generateStack(stack, line[i]);
    }
    if (stack.size() == 1)
        std::cout << stack.top() << std::endl;
    else
    {
        std ::cout << "Opearatins no complet the rest  of Stack : " << std::endl;
        while(stack.size())
        {
            std::cout << "|" << stack.top() << "|" << std::endl;
            stack.pop();
        }
    }
}

void generateStack(std::stack<double> &stack, char oprt)
{
    double a , b;
    a = stack.top();
    stack.pop();
    b = stack.top();
    stack.pop();
    stack.push(doOperation(a, oprt, b));
}

double doOperation(double &a, char &oprt, double &b)
{
    if (oprt == '*')
        return (b * a);
    if (oprt == '/')
    {
        if (a == 0)
            throw std::out_of_range("cannot be divided by 0");
        return (b / a)  ;
    }
    if (oprt == '+')
        return (b + a);
    return (b - a);
}