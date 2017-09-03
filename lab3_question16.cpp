#include <iostream>

using namespace std;

int main ()
{ float a, b, c;
  cout << "enter the three sides of a triangle " <<endl;
  cin >>a>>b>>c;
  if (a==b && a==c) {cout << "the triangle is equilateral.";}
  else if (a==b || b==c || a==c){cout << "the triangle is isosceles.";}
  else {cout << "the triangle is scalene.";}
  return 0;
}
