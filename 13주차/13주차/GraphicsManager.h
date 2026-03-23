#ifndef GRAPHICSMANAGER_H
#define GRAPHICSMANAGER_H

#include "Polygon.h"

class GraphicsManager {
private: //멤버 변수
	Polygon* pStart; //주소를 담는 포인터 변수
	Polygon* pLast;
public:
	GraphicsManager();
	~GraphicsManager();

	void Run();
	void Add();
	void Paint();
	void Pain(Polygon* p); //되게 중요한 코드임
};
#endif
