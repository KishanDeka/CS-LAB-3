#include <iostream>
#include <cmath>

using namespace std;

int main ()
{ int a;
  cout << "enter the year you want to check"<<endl;
  cin >> a;
  if (a%100==0 && !(a%400==0)) {cout <<"It is not a leap year.";}
  else if (a%4==0) {cout << "YES, it is a leap year.";}
  else   {cout << "NO, this is not a leap year.";}
  return 0;
}
