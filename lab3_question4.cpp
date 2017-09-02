#include <iostream>
#include <cmath>

using namespace std;

int main ()
{ int a;
  cout << "enter a integer number."<<endl;
  cin >> a;
  if (a%5==0 && a%11==0) {cout <<"your number is divisible by 5 and 11.";}
  else if (a%5==0 && !(a%11==0)) {cout << "your number is divisible by 5 but not divisible by 11.";}
  else if (a%11==0 && !(a%5==0)) {cout << "your number is divisible by 5 but not divisible by 11.";}
  else {cout << "your number is not divisible by 5 or 11.";}
  return 0;
}
