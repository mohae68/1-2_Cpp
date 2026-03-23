#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>
#include "Add.h"
#include "Sub.h"
#include "Mul.h"
#include "Div.h"
using namespace std;

class Calculator
{
private:
	int op;
	int num1, num2;
	string stop;

	Add add; //Add클래스의 add라는 이름의 객체 생성
	Sub sub; //Sub클래스의 sub라는 이름의 객체 생성
	Mul mul; //Mul클래스이 mul이라는 이름의 객체 생성
	Div div;

public:
	Calculator();
	~Calculator();
	void Run();
};


#endif