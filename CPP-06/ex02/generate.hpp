/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 20:22:14 by aankote           #+#    #+#             */
/*   Updated: 2023/10/11 16:47:13 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Base.hpp"
#include <iostream>
#include <ctime>
#include <stdlib.h>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void);
void identify(Base* p);
void identify(Base& p);
