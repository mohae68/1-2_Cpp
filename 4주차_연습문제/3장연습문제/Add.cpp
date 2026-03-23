#include "Add.h" //cpp파일은 함수를 구현하는 파일이기에 {}가 꼭 있어야함!

Add::Add() //Add라는 클래스에 Add라는 생성자
{		   // {}의 의미는 구현을 했다는 뜻

}

Add::~Add()
{

}

void Add::SetValue(int a, int b)
{
	num1 = a;
	num2 = b;
}

int Add::Calculator() //Add라는 클래스 안에 Cal()이라는 함수가 있다는 뜻
{
	return num1 + num2;
}
