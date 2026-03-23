//1-2주차
// 
//1주차: Hello 프로젝트 실행하기
//#include <iostream>
//
//int main()
//{
//	std::cout << "Hello";
//	return 0;
//}

//줄바꿈 문자 (c --> \n)문자
//#include <iostream>
//
//int main()
//{
//	std::cout << "Hello" << std::endl;
//	return 0;
//}

//using namespace std 응용하기 예제
//#include <iostream>
//using namespace std; //이거 쓰면 main함수 안에 있는 모든 std 지워도 됨! 더 간단히 보이겠지 cout, cin 응용
//
//int main()
//{
//	cout << "* * *" << endl; 
//	cout << endl;
//	cout << "* * *" << endl;
//	cout << endl;
//
//	return 0;
//}
//
//#include <iostream>
//
//int main()
//{
//	std::cout << "* * *" << std::endl; ////"std::endl"이 줄바꿈 문자임
//	std::cout << std::endl;
//	std::cout << "* * *" << std::endl;
//	std::cout << std::endl;
//
//	return 0;
//}

//예제 2-2
//#include <iostream>
//
//double area(int r);
//
//double area(int r) {
//	return 3.14 * r * r;
//}
//
//int main()
//{
//	int n = 3;
//	char c = '#';
//	using namespace std; ////얠 아예 #include 다음줄에 써도 됨(교수가 그렇게 함)
//
//	cout << c << 5.5 << '-' << n << "hello" << true << endl;
//	cout << "n + 5 = " << n + 5 << '\n';
//	cout << "면적은 " << area(n);
//}

//예제 2-3 키보드로 입력받기
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	cout << "너비를 입력하세요>> ";
//
//	int width;
//
//	cin >> width;
//
//	cout << "높이를 입력하세요>> ";
//
//	int height;
//	cin >> height;
//
//	int area = width * height;
//	cout << "면적은 " << area << "\n";
//
//}

//예제 2-5 암호 입력
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main()
//{
//	char password[11];
//	cout << "프로그램을 종료하려면 암호를 입력하세요." << endl;
//
//	while (true) {
//		cout << "암호>> ";
//		cin >> password;
//		if (strcmp(password, "C++") == 0) {
//			cout << "프로그램을 정상 종료합니다." << endl;
//			break;
//		}
//	else
//		cout << "암호가 틀립니다." << endl;
//
//	}
//
//}

//가위바위보 게임
#include <iostream>
using namespace std;

int main()
{
	cout << "가위 바위 보 게임을 합니다. 가위, 바위, 보 중에서 입력하세요." << endl;
	// 입력 받기
	char s[10];
	cout << "사또>>";
	cin >> s;

	char t[10];
	cout << "아랑>>";
	cin >> t;

	// 틀린 입력 골라내기
	if (strcmp(s, "가위") != 0 &&
		strcmp(s, "바위") != 0 &&
		strcmp(s, "보") != 0) {
		cout << "사또의 입력이 틀렸습니다." << endl;
		return 0;
	}
	if (strcmp(t, "가위") != 0 &&
		strcmp(t, "바위") != 0 &&
		strcmp(t, "보") != 0) {
		cout << "아랑의 입력이 틀렸습니다." << endl;
		return 0;
	}

	// 승자 결정
	if (strcmp(s, "가위") == 0 && strcmp(t, "보") == 0)
		cout << "사또가 이겼습니다." << endl;
	else if (strcmp(s, "가위") == 0 && strcmp(t, "바위") == 0)
		cout << "아랑이 이겼습니다." << endl;
	else if (strcmp(s, "바위") == 0 && strcmp(t, "가위") == 0)
		cout << "사또가 이겼습니다." << endl;
	else if (strcmp(s, "바위") == 0 && strcmp(t, "보") == 0)
		cout << "아랑이 이겼습니다." << endl;
	else if (strcmp(s, "보") == 0 && strcmp(t, "바위") == 0)
		cout << "사또가 이겼습니다." << endl;
	else if (strcmp(s, "보") == 0 && strcmp(t, "가위") == 0)
		cout << "아랑이 이겼습니다." << endl;
	else
		cout << "비겼습니다." << endl;

	return 0;
}