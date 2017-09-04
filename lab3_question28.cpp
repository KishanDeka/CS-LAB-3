#include <iostream>

using namespace std;

int main ()
{ int a=2, n, c=0;
  cout << "enter the last number ";
  cin >> n;
  while (a<=n) { a=a+2;
             c = c+a;

  }
  cout<< "Sum of all even natural number upto "<<n<< " is = "<< c-n;


  return 0;
}
