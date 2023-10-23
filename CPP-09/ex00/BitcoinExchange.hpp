/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:02:17 by aankote           #+#    #+#             */
/*   Updated: 2023/10/19 10:08:50 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <fstream>
#include <map>
#include <string.h>

std::string& ft_trim(std::string& s);
bool checkValue(std::string &value);
int isValidDate(int year, int month, int day);
size_t countWords(std::string &line, char separator);
bool checkCharacters(std::string &date);
int generateDataBase(std::map<std::string, double> &data);
void exchange(std::map<std::string, double> &data, std::string &date, std::string value);
bool generateErrors(std::string &year, std::string &month, std::string &day, std::string &value);
int generate(std::string &date, std::string &value);
bool checkLine(std::string &line);
void parceFile(char *fileName);