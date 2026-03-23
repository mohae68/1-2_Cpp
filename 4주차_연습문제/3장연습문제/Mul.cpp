#include "Mul.h"

Mul::Mul()
{

}

Mul::~Mul()
{

}

void Mul::SetValue(int a, int b)
{
	num1 = a;
	num2 = b;
}

int Mul::Calculator()
{
	return num1 * num2;
}