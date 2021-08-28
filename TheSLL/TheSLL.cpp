/*
* TheSLL.cpp
*
* Copyright (C) by Foxtr0t(My Gaming Name) aka KennysMcCormick(My Github Account) or AWPÊÇ°ÑºÃÇ¹(My Nickname on Tieba) - https://github.com/KennysMcCormick
*
* This code is licensed under the MIT license (MIT) (http://opensource.org/licenses/MIT)
*/

#include "TheSLL.hpp"
#include <iostream>

SomeType::SomeType()
{
	std::cout << "Construction." << std::endl;
}

SomeType someObj;

void* TheSllAPI()
{
	return &someObj;
}
