#include "CAdd.h"
#include "Cal.h"
#include "Calculator.h"
#include "Subtractor.h"
#include "Adder.h"
#include <iostream>
using namespace std;

int main() 
{
	#pragma region 추상 매소드 구현 연습 (9장.9-6예제)
	/*Cal* c = new Cal();*/ //이렇게 만들면 에러난다. 밑에 식으로 만들어줘야 된다!

	/*Cal* c = new CAdd();
	cout << c->Add(10, 20) << endl;
	delete c;*/
	#pragma endregion

	#pragma region 예제 9-7
	/*Adder adder;
	Subtractor subtractor;
	adder.run();
	subtractor.run();*/
	#pragma endregion


	return 0;
}