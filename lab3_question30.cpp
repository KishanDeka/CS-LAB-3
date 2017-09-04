#include <iostream>

using namespace std;

int main ()
{ int a=1, n, c;
  cout << "enter the number for multiplication table ";
  cin >> n;
 while (a<=10) { cout << n <<" x "<<a <<" = " << n*a<<endl;
                 a++;
  }

  return 0;
 }
