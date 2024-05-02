#pragma once
#include<cmath>
#include<iostream>
class moving_rectangle : public rectangle
{
public:

	point new_A,
		new_B,
		new_C,
		new_D;
public:
	moving_rectangle(point a, point c);
	void moving(point number);
	void return_coor();
};