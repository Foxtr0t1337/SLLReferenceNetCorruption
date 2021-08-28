/*
* main.cpp
*
* Copyright (C) by Foxtr0t(My Gaming Name) aka KennysMcCormick(My Github Account) or AWPÊÇ°ÑºÃÇ¹(My Nickname on Tieba) - https://github.com/KennysMcCormick
*
* This code is licensed under the MIT license (MIT) (http://opensource.org/licenses/MIT)
*/

#include "../SomeDLL/SomeDLL.hpp"
#include "../TheSLL/TheSLL.hpp"
#include <iostream>

#include <Windows.h>
#include <psapi.h>

int main()
{
	void* dll = SomeDllAPI(); // Same .lib file was linked but two totally different instances.
	void* sll = TheSllAPI();

	std::string name;
	name.resize(MAX_PATH);

	K32GetMappedFileNameA(GetCurrentProcess(), dll, (char*)name.data(), name.size());
	printf_s("(SomeType*)0x%p belongs to %s.\n", dll, name.c_str());

	K32GetMappedFileNameA(GetCurrentProcess(), sll, (char*)name.data(), name.size());
	printf_s("(SomeType*)0x%p belongs to %s.\n", sll, name.c_str());

	return dll == sll;
}
