//5주차
//객체 포인터 
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int i = 5;
//	int* ip;
//	ip = &i;
//	cout << i << "::" << (*ip) << endl;
//
//	float f = 10.5;
//	float* fp = &f;
//	cout << f << "::" << (*fp) << endl;
//
//	char c = 'a';
//	char* cp = &c;
//	cout << c << "::" << (*cp) << endl;
//
//	/*Zerg* zp = &z1; ////zerg.h .cpp가 있을 때 사용 ㄱㄴ
//	zp = &z2;
//	cout << z2.hp << "::" << (*zp).hp << zp->hp << endl;*/
//
//	return 0;
//}

//예제 4-1
//#include <iostream>
//using namespace std;
//
//class Circle {
//	int radius;
//public:
//	Circle() { radius = 1; }
//	Circle(int r) { radius = r; }
//	double getArea();
//};
//
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main() {
//	Circle donut;
//	Circle pizza(30);
//
//	//객체 이름으로 멤버 접근
//	cout << donut.getArea() << endl;
//
//	//객체 포인터로 멤버 접근
//	Circle* p;
//	p = &donut;
//	cout << p->getArea() << endl;
//	cout << (*p).getArea() << endl;
//
//	p = &pizza;
//	cout << p->getArea() << endl; //pizza의 getArea() 호출
//	cout << (*p).getArea() << endl;
//}

#pragma region 예제 4-2
#include <iostream>
using namespace std;

//클래스 선언부
class Circle {
private:
	int radius; //멤버 변수
public:
	Circle();//기본 생성자
	Circle(int r);//오버로딩 생성자
	void setRadius(int r);//멤버 함수
	double getArea();
};
//구현부
Circle::Circle() {
	radius = 1;
}
Circle::Circle(int r) {
	radius = r;
}
void Circle::setRadius(int r) {
	radius = r;
}
double Circle::getArea() {
	return 3.14 * radius * radius;
}
//main
int main() {
	Circle circleArray[3];

	circleArray[0].setRadius(10); //배열 객체의 멤버 함수 접근
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);

	for (int i = 0; i < 3; i++) { //배열 객체의 멤버 함수 접근
		cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;
	}

	Circle* p = &circleArray[0];
	for (int i = 0; i < 3; i++) {
		cout << "Circle " << i << "의 면적은 " << (*p).getArea() << endl;
		p++;
	}

	return 0;

}
#pragma endregion