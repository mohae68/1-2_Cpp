//3주차
//3.클래스 만들기 (circle, ractangle)

//#include <iostream>
//using namespace std;
//
////Circle 클래스가 만들어 졌다.
//class Circle
//{
//private:
//	//멤버 변수 (멤버 변수가 없더라도 가독성을 위해 써놓자)
//public:
//	//멤버 함수
//	int radius;
//	double getArea(); //선언
//};
//
////Circle 멤버 함수 구현
//double Circle::getArea()
//{
//	return 3.14 * radius * radius;
//}
//
//
////Rectangle 클래스가 만들어 졌다.
//class Rectangle
//{
//private: //클래스 만들때 private, public은 기본적으로 적어두기
//public:
//	int width;
//	int height;
//	double getArea();
//};
//
////Rectangle 멤버 함수 구현
//double Rectangle::getArea() //Rectangle 안에 있는 getArea를 만든거임!
//{
//	return width * height;
//}
//
//
//int main()
//{
//#pragma region 예제1 (Circle 클래스 만들기)
//	//int i; //변수 선언
//	//Circle donut; //객체 변수, 객체 생성
//	//donut.radius = 2; //반지름을 2로 초기화
//
//	//double area = donut.getArea(); //객체.함수 호출
//
//	//cout << "도넛 면적은" << area << endl;
//
//	//Circle pizza;
//	//pizza.radius = 5;
//	//area = pizza.getArea();
//	//cout << "피자 면적은" << area << endl;
//
//	////실습 1. 동그란 것을 생각한 후, 하나의 객체를 만들어 보세요.
//	//Circle candy;
//	//candy.radius = 3;
//	//area = candy.getArea();
//	//cout << "사탕 면적은" << area << endl;
//#pragma endregion 
//
//#pragma region 예제2 (Ractangle 클래스)
//	/*Rectangle rect;
//	rect.width = 3;
//	rect.height = 5;
//	cout << "사각형의 면적은 " << rect.getArea() << endl;*/
//#pragma endregion 
//
//	return 0;
//}

//3-1 생성자가 포함된 클래스
//#include <iostream>
//using namespace std;
//
//class Circle
//{
//private:
//	
//public:
//	Circle(); //기본 생성자
//	Circle(int r); //오버로딩 생성자
//	int radius;
//	double getArea(); 
//};
//
////생성자 구현
//Circle::Circle() 
//{
//	/*radius = 1;*/
//	cout << "도넛 객체를 생성하였습니다." << endl;
//}
//
//Circle::Circle(int r)
//{
//	radius = r;
//}
//
//double Circle::getArea()
//{
//	return 3.14 * radius * radius;
//}
//
//int main()
//{
//	
//	Circle donut1;//객체가 생성할 때 -> 생성자 호출하게 됨 //같은 이름으로 생성이 안 되니까 도넛1,2로 만들기
//	Circle donut2(30);
//
//	double area = donut2.getArea();
//	cout << "도넛 면적은" << area << endl;
//
//	return 0;
//}

#pragma region 실습2(기본 생성자, 오버로딩 생성자 포함한 클래스 만들기)
//실습 2
//Triangle 클래스 만들기 (생성자 포함/오버로딩 생성자 포함)
//면적 계산
//객체 생성 출력
//#include <iostream>
//using namespace std;
//
//class Triangle
//{
//private:
//	
//public:
//	Triangle(); //기본 생성자
//	Triangle(int w, int h); //오버로딩 생성자
//	int width, height;
//	double getArea(); 
//};
//
////생성자 구현
//Triangle::Triangle()
//{
//	width = 1;
//	height = 1;
//}
//
//Triangle::Triangle(int w, int h)
//{
//	width = w;
//	height = h;
//}
//
//double Triangle::getArea()
//{
//	return width * height;
//}
//
//int main()
//{
//	
//	Triangle rect;
//	rect.width = 3;
//	rect.width = 5;
//	cout << "삼각형의 면적은 " << rect.getArea() << endl;
//
//	return 0;
//}
#pragma endregion

//예제 3-4 Rectangle 클래스 만들기 (생성자 포함)
#include <iostream>
using namespace std;

//클래스 선언부
class Rectangle {
private:
public: 
	int width, height;//멤버 변수
	  Rectangle(); //기본 생성자1
	  Rectangle(int w, int h);//오버로딩 생성자2
	  Rectangle(int length);//오버로딩 생성자3
	  bool isSquare();//멤버 함수
};
//구현부
Rectangle::Rectangle()
{
	width = height = 1;
}
Rectangle::Rectangle(int w, int h)
{
	width = w; 
	height = h;
}
Rectangle::Rectangle(int length)
{
	width = height = length;
}
//정사각형이면 true(1)를 리턴하는 멤버 함수
bool Rectangle::isSquare()
{
	if (width == height) return true;
	else return false;
}
//메인 함수

int main()
{
	Rectangle rect1;//객체1 생성
	Rectangle rect2(3, 5);//객체2 생성
	Rectangle rect3(3);//객체3 생성

	if (rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
	if (rect2.isSquare()) cout << "rect2은 정사각형이다." << endl;
	if (rect3.isSquare()) cout << "rect3은 정사각형이다." << endl;
}