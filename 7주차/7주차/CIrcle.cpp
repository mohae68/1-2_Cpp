#include "Circle.h"

Circle::Circle()
{
	radius = 1;
}

Circle::~Circle()
{

}

void Circle::SetRadius(int r)
{
	radius = r;
}

double Circle::GetArea()
{
	return radius * radius * 3.14;
}