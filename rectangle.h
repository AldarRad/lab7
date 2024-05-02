#pragma once
#include<iostream>
class point
{
public:
	int x;
	int y;
	point operator+(const point& x1) const;

};
class rectangle
{
public:
	point A,//левая-верхняя
		B,//правая-верхня
		C,//правая-нижня
		D;//левая-нижняя
public:
	rectangle(point a, point c); // конструктор  
};
