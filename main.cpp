#include <iostream>
#include "rectangle.h"
#include "moving_rectangle.h"
int main()
{
	setlocale(LC_ALL, "RU");
	moving_rectangle first(point{2,10}, point{8, 2});//начальные координаты 
	first.moving(point{ 1, 1 });//сдвиг
	first.return_coor();//возращаем координаты 
}

