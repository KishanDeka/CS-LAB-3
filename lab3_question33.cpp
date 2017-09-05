#include <iostream>

using namespace std;

int main ()
{ int a, n, m, h;
  cout << "enter the number "<<endl;
  cin >> a;
  n=a/10;
  m=n*10;
  if (a/10==0){if (a>=0) {cout << "sum of first and last digit = "<<a+a<<endl;}
  else {cout <<"sum of first and last digit = "<<-(a+a)<<endl;} }
  else if (a<0){h=a/10;
  while (h<=-10) { h=h/10;}
  cout <<"sum of first and last digit = "<<-h+m-a<<endl;}
  else {h=a/10;
  while (h>=10) { h=h/10 ;}
  cout << "sum of first and last digit = "<<h+a-m<<endl;}
  return 0;
 }
