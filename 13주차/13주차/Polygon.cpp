#include "Polygon.h"

Polygon::Polygon()
{
	next = NULL; //맨 마지막 값에는 null이 들어감, 생성자는 초기화해주는 역할이다
}
Polygon::~Polygon()
{
	cout << "Polygon Delete...." << endl;
}
void Polygon::Draw() 
{
	/*cout << "지붕을 그립니다." << endl;*/
}

//plast->Add(new Circle())
Polygon* Polygon::Add(Polygon* p) //여기 코드 내용? 잘 알고 있으래, 여기서 Polygon *p = new Circle();을 받음 업캐스팅을 말함
{
	this->next = p; //다음번 노드(객체)를 가리키는 포인터 변수
	return p; //p는 주소니까 ㄱㄴ, 다음번 노드를 리턴

}

Polygon* Polygon::GetNext()
{
	return next;
}