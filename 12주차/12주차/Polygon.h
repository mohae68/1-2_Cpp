#ifndef  POLYGON_H
#define POLYGON_H

#include <iostream>
using namespace std;

class Polygon
{
private:

public:
	Polygon();
	~Polygon();

	virtual void Draw(); //이름을 자식과 똑같이 하는 것이 중요
};

#endif
