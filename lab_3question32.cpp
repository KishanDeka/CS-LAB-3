#include <iostream>

using namespace std;

int main ()
{ int a, n, m, h;
  cout << "enter the number "<<endl;
  cin >> a;

  if (a/10==0){if (a>=0) {cout << "first digit of the number is "<<a<<endl;}
  else {cout << "first digit of the number is "<<-a<<endl;} }
  else if (a<0){h=a/10;
  while (h<=-10) { h=h/10;}
  cout <<"first digit of the number is "<<-h<<endl;}
  else {h=a/10;
  while (h>=10) { h=h/10 ;}
  cout << "first digit of the number is "<<h<<endl;}
  n=a/10;
  m=n*10;
  if (a>=0) {cout << "last digit of the number is "<<a-m;}
  else {cout <<"last digit of the number is "<<-a+m;}
  return 0;
 }
