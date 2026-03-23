//9장 추상 클래스 구현 연습 예제9-6(실습)
#ifndef CAL_H
#define CAL_H

//아버지 클래스 선언부
// 
//추상 클래스로 변환됏음(순수가상함수때문에)
class Cal
{
private:
public:
	Cal();
	virtual ~Cal(); //Cal*c=new Add(); 
	virtual int Add(int a, int b) = 0; //순수 가상함수임, 순수 가상함수는 구현을 해주면 안 됨
};

#endif
