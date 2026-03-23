#ifndef CADD_H
#define CADD_H
//자식 클래스 선언부
#include "Cal.h"

class CAdd : public Cal //아버지클래스를 상속 받음
{
private:
public:
	CAdd();
	~CAdd();
	int Add(int a, int b); //얘도 꼭 써줘야 구현부에서 에러 안 남

};
#endif
