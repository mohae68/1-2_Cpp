#ifndef ADD_H //헤더파일은 변수나 함수를 선언하는 곳!
#define ADD_H

class Add 
{
private:
	int num1;
	int num2;
public:
	Add();
	~Add();
	void SetValue(int a, int b); //입력받은 값을 변수에 저장, 초록색으로 밑줄이 생기면 구현이 덜 된거
	int Calculator();			 // 계산된 값을 리턴
};
#endif
