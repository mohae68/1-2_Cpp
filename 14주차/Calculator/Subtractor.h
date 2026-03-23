#ifndef	SUBTRACTOR_H
#define SUBTRACTOR_H
#include "Calculator.h"
class Subtractor : public Calculator {
protected:
	int calc(int a, int b) {
		return a - b;
	}
};

#endif
