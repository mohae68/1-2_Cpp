#include "Sub.h"

Sub::Sub()
{

}

Sub::~Sub()
{

}

void Sub::SetValue(int a, int b)
{
	num1 = a;
	num2 = b;
}

int Sub::Calculator()
{
	return num1 - num2;
}