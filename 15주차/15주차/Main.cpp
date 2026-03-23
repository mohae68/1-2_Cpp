//15주차(10장)
#include <iostream>
#include "Common.h" //common에 다 넣어주고, 이것만 적으면 코딩하기 편함

template <class T> //이것을 제네릭 함수이다. (여기서 swap이 됨)
void myswap(T& a, T& b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main() 
{
	//예제 10-1
	/*int a = 4, b = 5;
	myswap(a, b);
	cout << "a=" << a << "," << "b=" << b << endl;*/

	/*double a = 4.5, b = 5.8;
	myswap(a, b);
	cout << "a=" << a << "," << "b=" << b << endl;

	string c = "C4.5", d = "C5.8";
	myswap(a, b);
	cout << "a=" << c << "," << "b=" << d << endl;*/

	//예제 10-1 응용
	/*Circle donut(5), pizza(10);
	cout << "도넛: " << donut.getRadius() << endl;
	cout << "피자: " << pizza.getRadius() << endl;

	myswap(donut, pizza);
	cout << "도넛: " << donut.getRadius() << endl;
	cout << "피자: " << pizza.getRadius() << endl;*/

	#pragma region 예제 10-9
	// 
	//vector<int> v;
	//v.push_back(1);
	//v.push_back(2);
	//v.push_back(3);

	//for (int i = 0; i < v.size(); i++) { 
	//	cout << v[i] << " "; //vector은 배열처럼 사용할 수 있음
	//}
	//cout << endl;

	//v[0] = 10;
	//int n = v[2]; //변수 n에 v[2] 방에 값을 대입.
	//v.at(2) = 5; //

	//for (int i = 0; i < v.size(); i++) {
	//	cout << v[i] << " "; //vector은 배열처럼 사용할 수 있음
	//}
	//cout << endl;
#pragma endregion

	#pragma region 예제 10/9 double 응용, string 응용
	//vector<double> v;
	//v.push_back(1.6);
	//v.push_back(2.8);
	//v.push_back(3.4);

	//for (int i = 0; i < v.size(); i++) {
	//	cout << v[i] << " "; //vector은 배열처럼 사용할 수 있음
	//}
	//cout << endl;

	//v[0] = 10.3;
	//int n = v[2]; //변수 n에 v[2] 방에 값을 대입.
	//v.at(2) = 5.8; //

	//for (int i = 0; i < v.size(); i++) {
	//	cout << v[i] << " "; //vector은 배열처럼 사용할 수 있음
	//}
	//cout << endl;

	//vector<string> v;
	//v.push_back("c1.6");
	//v.push_back("c2.8");
	//v.push_back("c3.4");

	//for (int i = 0; i < v.size(); i++) {
	//	cout << v[i] << " "; //vector은 배열처럼 사용할 수 있음
	//}
	//cout << endl;

	//v[0] = 10.3;
	//int n = v[2]; //변수 n에 v[2] 방에 값을 대입.
	//v.at(2) = 5.8; //

	//for (int i = 0; i < v.size(); i++) {
	//	cout << v[i] << " "; //vector은 배열처럼 사용할 수 있음
	//}
	//cout << endl;
#pragma endregion

	#pragma region 예제 10-9 포인터 응용 이건 폴리건 파일이 있어야 됨.
	//Polygon *p = new Circle()이것과 아래 식이 똑같음 맞나..?
	// 
	//vector<Polygon*> v; //주소를 받을 수 있게 포인터(*) 표시해주기, 여기 준내 중요함 //upcasting
	//v.push_back(new Circle());
	//v.push_back(new Rectangle());
	//v.push_back(new Triangle());

	//for (int i = 0; i < v.size(); i++)
	//{
	//	v[i]->Draw(); //downcasting / virtual function
	//}

	////이건 유닛 파일과 나머지 파일 필요함.
	//vector<Unit*> v2;
	//v2.push_back(new Zerg());
	//v2.push_back(new Protoss());
	//v2.push_back(new Teran());

	//for (int i = 0; i < v.size(); i++)
	//{
	//	v2[i]->Attack(); //downcasting / virtual function
	//}
#pragma endregion

	#pragma region 예제 10-11 살짝 바꿈
	//vector <int> v; //실
	//vector<int>::iterator it; //바늘 (포인터라고 새ㅑㅇ각하자)

	//v.push_back(1);
	//v.push_back(2);
	//v.push_back(3);

	//for (it = v.begin(); it != v.end(); it++) //10-9예제 for문과 똑같은 코드
	//{
	//	cout << *it << endl; //전 예제에선 v[i]값을 찍었음
	//}
	#pragma endregion
	
	#pragma region 예제 10-9를 iterator을 이용한 
	//vector<Polygon*> v; //주소를 받을 수 있게 포인터(*) 표시해주기, 여기 준내 중요함 //upcasting
	//vector<Polygon*>::iterator it; //Polygon이 아빠, 나머지(서클,렉,트라이)는 자식

	//v.push_back(new Circle());
	//v.push_back(new Rectangle());
	//v.push_back(new Triangle());

	//for (it = v.begin(); it != v.end();it++)
	//{
	//	(*it)->Draw();
	//}

	////이건 유닛 파일과 나머지 파일 필요함.
	//vector<Unit*> v2;
	//vector<Unit*>::iterator it2;

	//v2.push_back(new Zerg());
	//v2.push_back(new Protoss());
	//v2.push_back(new Teran());

	//for (it2=v2.begin();it2 != v2.end(); it2++) 
	//{
	//	(*it2)->Attack();
	//}
	#pragma endregion
	
	
	return 0;
}