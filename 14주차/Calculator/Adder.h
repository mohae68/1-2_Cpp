#ifndef ADDER_H
#define ADDER_H
#include "Calculator.h"
class Adder : public Calculator
{
private:
public:
protected:
	int calc(int a, int b) { //순수 가상 함수 구현
		return a + b;
	}
};
#endif
