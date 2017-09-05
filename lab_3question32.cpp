#include <iostream>

using namespace std;

int main ()
{ int a, n, m, h;
  cout << "enter the number ";
  cin >> a;
  n=a/10;
  m=n*10;
  while (h>=10) { h=a/10;
                 h=h/10;

}
cout << "first digit of the number is "<<h<<endl;
  cout << "last digit of the number is "<<a-m;


  return 0;
 }
