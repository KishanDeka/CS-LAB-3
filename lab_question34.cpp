#include <iostream>
#include <cmath>

using namespace std;

int main ()
{ int a, n, m, h, c=0, k, i, j, l, p, q;
  cout << "enter a positive integer number "<<endl;
  cin >> a;
  m=abs(a);
  i=m;
  n=a%10;
 while (i>=10) {i=i/10 ;}
 j=m;
 while (j>=1) { j=j/10;
                c++; }
 k=(i*pow(10,c-1))+1;
 l=m-n-k;
 p=(n*pow(10,c-1))+1;
 q=(p+l)+i;
 cout << "After swapping the first and last digit = "<< q;
  return 0;
 }
