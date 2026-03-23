#include "CAdd.h"

CAdd::CAdd() {

}
CAdd::~CAdd() {

}
int CAdd::Add(int a, int b) //얜 추상 매소드이기 때문에 자식클래스에서 구현해줘야 됨
{
	return a + b;
}

