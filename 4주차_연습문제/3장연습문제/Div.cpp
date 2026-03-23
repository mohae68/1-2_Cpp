#include "Div.h"

Div::Div()
{

}

Div::~Div()
{

}

void Div::SetValue(int a, int b)
{
	num1 = a;
	num2 = b;
}

int Div::Calculator()
{
	return num1 / num2;
}