#include <iostream>

using namespace std;

int main ()
{ float a, b, c;
  cout << "enter the three angle of a triangle in degrees " <<endl;
  cin >> a >>b>>c;
  if (a+b+c==180) {cout << "the triangle is valid.";}
  else {cout << "the triangle is not valid.";}
  return 0;
}
