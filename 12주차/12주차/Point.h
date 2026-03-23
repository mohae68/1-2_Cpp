#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <string>
using namespace std;

class Point {
protected:
	
public:
	int x, y;
	void set(int x, int y);
	void showPoint();
};

#endif

