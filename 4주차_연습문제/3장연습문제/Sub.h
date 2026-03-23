#ifndef SUB_H //만약 sub_h라는 헤더파일이 있으면 실행하라는 뜻
#define SUB_H //헤더파일의 중복을 없애기 위해 쓰는 거임

class Sub
{
private:
	int num1;
	int num2;

public:
	Sub();
	~Sub();
	void SetValue(int a, int b);
	int Calculator();
};


#endif