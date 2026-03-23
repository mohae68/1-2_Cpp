//7주차
//포인터 사용
//#include <iostream>
//#include "Circle.h"
//using namespace std;
//
//int main()
//{
//	int i = 10;
//	int* pi = &i;
//	cout <<"i의 값은 " << i << endl;
//	cout <<"i의 주소는 " << pi << endl; //값이 아니라 주소가 나옴
//	cout << "i의 값은(포인터) " << *pi << endl; //*을 추가하면 값이 나옴
//
//	float f = 10.5;
//	float* pf = &f;
//	cout <<"f의 값은(포인터) " << *pf << endl; //10.5 출력(값 출력)
//
//	Circle donut; //객체 생성 (정적으로)
//	Circle* pC = &donut; //포인터가 도넛의 주소와 연결됐음
//	(*pC).SetRadius(5); //아래식처럼 화살표연산자로 사용 ㄱㄴ
//	/*pC->SetRadius(5);*/
//
//	/*cout << *pC << endl;*/ //이렇게 하면 도넛에 함수도 들어가 있어서 오류가 난다~
//	cout << "도넛의 면적(포인터 접근1)" << (*pC).GetArea() << endl;
//	pC->SetRadius(5);
//	cout << "도넛의 면적(포인터 접근2)" << pC->GetArea() << endl;
//
//	donut.SetRadius(5);
//	cout <<"도넛의 면적(객체 접근)" << donut.GetArea() << endl;
//
//	Circle pizza;
//	pC = &pizza; //도넛 식에 pC라는 걸 만들어줬으니까 사용 ㄱㄴ
//	pC->SetRadius(10);
//	cout <<"피자(10)의 면적(포인터 접근)" << pC->GetArea() << endl;
//
//	pC = &donut;
//	pC->SetRadius(7);
//	cout << "도넛(7)의 면적(객체 접근)" << donut.GetArea() << endl;
//
//	return 0;
//
//}

//배열 부분
//#include <iostream>
//#include "Circle.h"
//using namespace std;
//
//int main() {
//	Circle cArray[3]; //이렇게 하나하나 정해주기 힘드니까 반복문을 사용(for문)
//	cArray[0].SetRadius(2); 
//	cArray[1].SetRadius(3);
//	cArray[2].SetRadius(3);
//
//	/*Circle* pC = &cArray[0];*/ //이거랑 아래 식이랑 똑같은 식임
//	Circle* pC = cArray;
//
//	for (int i = 0; i < 3; i++) 
//	{
//		/*cArray[i].SetRadius(i * 10);*/
//		pC->SetRadius(i * 10); //여기 시험 문제래 뭐가 문제로 나온다는 지 모르겟는데 암튼 수식 말하는거겟지?
//		pC++;
//	}
//
//	pC = &cArray[0];
//	/*pC = cArray;*/ //얠 적어줘야 제대로 된 값이 나옴 (중요)
//
//	for (int i = 0; i < 3; i++)
//	{
//		/*cout << cArray[i].GetArea() << endl;*/
//		cout << "Circle "<<i<<"의 면적은"<<"(" << i * 10 <<")" << "(포인터 접근) " << pC->GetArea() << endl;
//		pC++;
//	}
//
//	return 0;
//}

//2차원 배열
//#include <iostream>
//#include "Circle.h"
//using namespace std;
//
//int main()
//{
//	Circle c[3][3]; //2차원 배열
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			c[i][j].SetRadius(j * 10);
//		}
//	}
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << c[i][j].GetArea() << endl;
//		}
//	}
//
//	//<생각해 볼 문제>
//	//Circle -> Tile Class
//	//	x, y 값 출력
//	//포인터를 활용해서 세팅과 출력을 어떻게 하면 될까? (위에 코드를 활용해서)
//
//	return 0;
//}

//동적 생성
//#include <iostream>
//#include "Circle.h"
//using namespace std;
//
//int main()
//{
//	int i = 5; //정적 생성
//	int* pI = new int; //동적 생성 하려면 포인터로 해줘야 됨 (포인터가 필요하다!)
//	(*pI) = 10;
//	cout << *pI << endl;
//
//	Circle* donut = new Circle(); //동적으로 생성된 객체
//	donut->SetRadius(10);
//	cout << donut->GetArea() << endl;
//
//	//저그를 활용한 (ppt에 없음)
//	int ZergCount;
//	cout << "저그를 몇 마리 생성하시겠습니까?: ";
//	cin >> ZergCount;
//	Circle* Zerg = new Circle[ZergCount]; //동적생성 객체를 배열로 만듦
//	Circle* z = Zerg;
//
//	for (int i = 0; i < ZergCount; i++)
//	{
//		Zerg->SetRadius(i * 10);
//		Zerg++;
//	}
//
//	Zerg = z; //z를 저그에 넣은 이유, 동영상으로,,, 보기 모르겟ㄷㅏ
//	for (int i = 0; i < ZergCount; i++)
//	{
//		cout << Zerg->GetArea() << endl;
//		Zerg++;
//	}
//
//	delete[]Zerg;
//	return 0;
//}

#pragma region 예제 4-9 변형
#include <iostream>
using namespace std;

//클래스 생성부
class Circle1 {
	int radius;
private:
public:
	Circle1(); //생성자 생성
	Circle1(int r); //중복 생성자 생성
	~Circle1(); //소멸자 만듦
	void setRadius(int r); //멤버 함수 생성
	double getArea(); //멤버 함수 생성
};

//구현부
Circle1::Circle1() {
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle1::Circle1(int r) {
	radius = r;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle1::~Circle1() {
	cout << "소멸자 실행 radius = " << radius << endl;
}

void Circle1::setRadius(int r)
{
	radius = r;
}

double Circle1::getArea()
{
	return 3.14 * radius * radius;
}

//메인 함수
int main() {
	Circle1* pArray = new Circle1[3]; //객체 배열 생성, 각 원소 객체 기본 생성자 실행

	pArray->setRadius(10); //배열 첫 번째 객체의 setRadius()(멤버함수) 실행
	(pArray + 1)->setRadius(20); //배열 두 번째 set 멤버함수 실행
	(pArray + 2)->setRadius(30); //배열 세 번째

	for (int i = 0; i < 3; i++) {
		cout << (pArray + i)->getArea() << endl; //
	}
	Circle1* p = pArray; //포인터 p에 배열의 주소를 담으라고 지정
	for (int i = 0; i < 3; i++) {
		cout << p->getArea() << endl;
		p++; 
	}

	delete[] pArray; //객체 배열 소멸
}

#pragma endregion

#pragma region 예제 4-10
//#include <iostream>
//using namespace std;
//
//class Circle
#pragma endregion