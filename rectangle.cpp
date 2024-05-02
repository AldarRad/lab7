#include<cmath>
#include "rectangle.h"

point point::operator+(const point & x1) const
{
	return  point{ this->x + x1.x, this->y + x1.y };
}

rectangle::rectangle(point a, point c)
{
	A = a;
	C = c;
	B.x = c.x;
	B.y = a.y;
	D.x = a.x;
	D.y = c.y;
}

