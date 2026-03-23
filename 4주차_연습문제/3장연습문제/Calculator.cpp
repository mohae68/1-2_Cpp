#include "Calculator.h"
#include <iostream>
using namespace std;

Calculator::Calculator()
{

}

Calculator::~Calculator()
{

}

void Calculator::Run() //Run() 함수 생성
{
	while (1)
	{
		cout << "계산할 연산자를 선택하시오. { 1:+, 2:-, 3:*, 4:/ } " << endl;
		cin >> op; //1, 2, 3, 4 중에 값을 입력받겠지
		cout << "두 값을 입력 해 주세요 >> ";
		cin >> num1 >> num2; //연산할 수를 입력받겠지

		switch (op)
		{
		case 1: //덧셈
			add.SetValue(num1, num2);
			cout << add.Calculator() << endl;
				break;

		case 2: //뺄셈
			sub.SetValue(num1, num2);
			cout << sub.Calculator() << endl;
			break;

		case 3: //곱셈
			mul.SetValue(num1, num2);
			cout << mul.Calculator() << endl;
			break;

		case 4: //나눗셈
			div.SetValue(num1, num2);
			cout << div.Calculator() << endl;
			break;
		}

		cout << "계산기를 종료하시겠습니까? {y} " << endl;
		cin >>stop;
		if (stop == "y") break;
	}
}