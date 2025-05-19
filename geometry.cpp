#include <iostream>
#include "geometry.h"
#include <cmath>
using namespace std;

double distance(point A,point B)
{
 double wynik;
 wynik = sqrt(pow(B.x-A.x,2)+pow(B.y-A.y,2));
 return wynik;
}

bool is_triangle(point A,point B,point C)
{
 if(distance(A,B) + distance(A,C) > distance(B,C) && distance(A,C) + distance(B,C) > distance(A,B) && distance(A,B) + distance(B,C) > distance(A,C))
 {
    return true;
 }
 else
 {
    return false;   
 }
}

double area_triangle(point A,point B,point C)
{
 double area;
 if(is_triangle(A,B,C) == true)
     {
       area = (fabs((B.x-A.x)*(C.y-A.y) - (B.y-A.y)*(C.x-A.x)))/2;
     }
     else {
        cout << "To nie trojkat tloku" << endl;
     }
 return area;    
}

bool is_inside_triangle(point A,point B,point C,point D)
{
  if(area_triangle(A,B,D)+area_triangle(A,C,D)+area_triangle(B,C,D) == area_triangle(A,B,C))
  {
    return true;
  } 
  else 
  {
    return false;
  }
}

double area_pentagon(point A,point B,point C,point D,point E)
{
double area = 
B.x * A.y - A.x * B.y +
C.x * B.y - B.x * C.y +
D.x * C.y - C.x * D.y +
E.x * D.y - D.x * E.y +
A.x * E.y - E.x * A.y;
    area = fabs(area) / 2.0;
}