#include<cmath>
#include "rectangle.h"
#include "moving_rectangle.h"
void moving_rectangle::moving(point number)
{
	new_A = new_A + number;
	new_B = new_B + number;
	new_C = new_C + number;
	new_D = new_D + number;
	std::cout << "координаты после сдвига:\n";
	std::cout << "A:" << new_A.x << " " << new_A.y << "\n";
	std::cout << "B:" << new_B.x << " " << new_B.y << "\n";
	std::cout << "C:" << new_C.x << " " << new_C.y << "\n";
	std::cout << "D:" << new_D.x << " " << new_D.y << "\n";
}
void moving_rectangle::return_coor()
{
	new_A = A;
	new_B = B;
	new_C = C;
	new_D = D;
	std::cout << "координаты после сброса:\n";
	std::cout << "A:" << new_A.x << " " << new_A.y << "\n";
	std::cout << "B:" << new_B.x << " " << new_B.y << "\n";
	std::cout << "C:" << new_C.x << " " << new_C.y << "\n";
	std::cout << "D:" << new_D.x << " " << new_D.y << "\n";
}


moving_rectangle::moving_rectangle(point a, point c) : rectangle(a, c)
{
	new_A = A;
	new_B = B;
	new_C = C;
	new_D = D;
	std::cout << "Сохраненные координаты:\n" << "(2,10),(8,2)\n";
}