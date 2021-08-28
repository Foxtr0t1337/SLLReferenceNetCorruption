/*
* SomeDLL.hpp
*
* Copyright (C) by Foxtr0t(My Gaming Name) aka KennysMcCormick(My Github Account) or AWP是把好枪(My Nickname on Tieba) - https://github.com/KennysMcCormick
*
* This code is licensed under the MIT license (MIT) (http://opensource.org/licenses/MIT)
*/

#pragma once

#ifdef SOMEDLL_EXPORTS
#define SOMEDLL_API __declspec(dllexport)
#else
#define SOMEDLL_API __declspec(dllimport)
#endif

SOMEDLL_API void* SomeDllAPI();
