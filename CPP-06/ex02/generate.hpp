/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 20:22:14 by aankote           #+#    #+#             */
/*   Updated: 2023/10/06 20:24:10 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Base.hpp"
#include <iostream>
#include <ctime>
#include <stdlib.h>
#include "DerivedA.hpp"
#include "DerivedB.hpp"
#include "DerivedC.hpp"

Base * generate(void);
void identify(Base* p);
void identify(Base& p);
