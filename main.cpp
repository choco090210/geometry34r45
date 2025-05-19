#include <iostream>
#include "geometry.h"

using namespace std;

int main()
{
    point A = {1, 2};
    point B = {3, 4};
	point C = {7, 6};
	point D = {2, 5};
	point P[5] = { {1, 2}, {3, 4}, {5, 4}, {7, -1}, {3, -2} };
	cout << "Distance: : " << distance(A, B) << endl;
	cout << "Is it a triangle? (yes - 1, no - 0): " << is_triangle(A, B, C) << endl;
	cout << "Area of triangle: " << area_triangle(A, B, C) << endl;
	cout << "Area of polygon: " << area_polygon(P, sizeof(P) / sizeof(P[0])) << endl;
	cout << "Is this point inside? (yes - 1, no - 0): " << is_inside(A, B, C, D) << endl;

    // pole wielokąta P5 = 23
    return 0;
}
