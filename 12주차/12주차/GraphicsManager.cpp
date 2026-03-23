#include "GraphicsManager.h"

GraphicsManager::GraphicsManager() {

}
GraphicsManager::~GraphicsManager() {

}
void GraphicsManager:: Pain(Polygon* p) //*폴리곤 타입으로만 받을 수 있음 여기서 업캐스팅
{ 
	p->Draw();
}