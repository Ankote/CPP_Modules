/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:44:32 by aankote           #+#    #+#             */
/*   Updated: 2023/10/19 15:21:15 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stack>
#include <string>

bool isOperator(char c);
std::string splitArg(std::string line);
bool isOperator(char c);
std::string  splitArg(std::string &line);
void RPN(std::string &line);
void generateStack(std::stack<double> &stack, char oprt);
double doOperation(double &a, char &oprt, double &b);