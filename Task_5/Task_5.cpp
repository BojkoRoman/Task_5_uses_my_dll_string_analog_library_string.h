/**
*@file Task_5
*@brief Solution (C++ code) of Task_5 GL 
* (Розробити власний повний аналог бібілотеки string.h (функції strcpy, strcat, ...) мови С. 
* Бібліотека повинна бути розроблена виключно на мові С. 
* Можна і бажано використовувати функції memcpy, memmove, memchr, memcmp, memset. А для вводу і виводу - stdio.)
* Copyright 2014 by Roman Bojko
*/
#include <iostream>
#include "header_string.h"
#include "header_function.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Ukr");
	Welcome();
	Enter();
	
	system("pause");
	return 0;
}