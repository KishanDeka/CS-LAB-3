#include <iostream>

using namespace std;

int main ()
{ float a, b, c;
  cout << "enter the three sides of a triangle " <<endl;
  cin >>a>>b>>c;
  if (a+b>c && a+c>b && b+c>a) {cout << "the triangle is valid.";}
  else {cout << "the triangle is not valid.";}
  return 0;
}
