#include <iostream>
#include <cmath>
#include "geometry.h"

using namespace std;

int main()
{
int n = 0;
cout << "Podaj wartosc n w zaleznosci od tego ktorego programu chcesz uzyc 1 - dystans, 2 - czy to trojkat, 3- pole trojkata, 4- pole pieciakata, 5 - czy punkt jest w trojkacie" << endl;
cin >> n;
if (n==1)
{
 point A;
 point B;
 cout << "Wczytaj punkt A" << endl;
 cin >> A.x >> A.y;
 cout << "Wczytaj punkt B" << endl;
 cin >> B.x >> B.y;
 cout << "Odleglosc to: " << distance(A,B) << endl;
}
if (n==2)
{
 point A;
 point B;
 point C;
 cout << "Wczytaj punkt A" << endl;
 cin >> A.x >> A.y;
 cout << "Wczytaj punkt B" << endl;
 cin >> B.x >> B.y;
 cout << "Wczytaj punkt C" << endl;
 cin >> C.x >> C.y;
 if(is_triangle(A,B,C) == true)
 cout << "To jest trojkat" << endl;
 else 
 cout << "To nie jest trojkat" << endl;
}
if (n==3)
{
 point A;
 point B;
 point C;
 cout << "Wczytaj punkt A" << endl;
 cin >> A.x >> A.y;
 cout << "Wczytaj punkt B" << endl;
 cin >> B.x >> B.y;
 cout << "Wczytaj punkt C" << endl;
 cin >> C.x >> C.y;
 cout << area_triangle(A,B,C) << endl;
}
if (n==4)
{
 point A;
 point B;
 point C;
 point D;
 point E;
 cout << "Wczytaj punkt A" << endl;
 cin >> A.x >> A.y;
 cout << "Wczytaj punkt B" << endl;
 cin >> B.x >> B.y;
 cout << "Wczytaj punkt C" << endl;
 cin >> C.x >> C.y;
 cout << "Wczytaj punkt D" << endl;
 cin >> D.x >> D.y;
 cout << "Wczytaj punkt E" << endl;
 cin >> E.x >> E.y; 
 cout << "Pole to :" << area_pentagon(A,B,C,D,E) << endl;
}
if (n==5)
{
 point A;
 point B;
 point C;
 point D;
 cout << "Wczytaj punkt A" << endl;
 cin >> A.x >> A.y;
 cout << "Wczytaj punkt B" << endl;
 cin >> B.x >> B.y;
 cout << "Wczytaj punkt C" << endl;
 cin >> C.x >> C.y;
 cout << "Wczytaj punkt D" << endl;
 cin >> D.x >> D.y;
 if(is_inside_triangle(A,B,C,D) == true)
 cout << "Punkt jest w trojkacie" << endl;
 else
 cout << "Punkt nie jest w trojkacie" << endl;
}
if (n != 1 && n != 2 && n != 3 && n != 4 && n!= 5)
{
    cout << "Bruh" << endl;
    exit(0);
}
return 0;
}