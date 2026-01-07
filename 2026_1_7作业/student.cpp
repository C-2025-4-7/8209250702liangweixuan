//student.cpp                     在此文件中进行函数的定义
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include"student.h"            //不要漏写此行，否则编译通不过
void Student::display()         //在类外定义display类函数
{
    std::cout << "num:" << num <<std::endl;
    std::cout << "name:" << name <<std::endl;
    std::cout << "sex:" << sex <<std::endl;
}
void Student::set_value(int n, const char* na, char s)
{
	num = n;  
	std::strncpy(name, na, sizeof(name) - 1);
	name[sizeof(name) - 1] = '\0'; 
	sex = s;
}