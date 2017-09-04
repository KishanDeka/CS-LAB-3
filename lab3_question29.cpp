#include <iostream>

using namespace std;

int main ()
{ int a=1, n, c=0;
  cout << "enter the last number ";
  cin >> n;
 if (n != 0) {while (a<=n) { a=a+2;
             c = c+a;

  }
  cout<< "Sum of all odd natural number upto "<<n<< " is = "<< c-(n+1);}
  else {cout << "error. n is not a natural number.";}


  return 0;
 }
