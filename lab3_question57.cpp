#include<iostream>
using namespace std;
int main()
{	int n, i, a, b, c;
  cout << "Enter the number of term upto which you want to print the Fibonacci Series :";
  cin >> n;
  a=0;
  b=1;
  cout << "The Fibonacci Series upto "<<n<<" term is printed below : ";
  for (i=1 ; i<=n ; i++)
  { if (i==1) {cout<<a<<", ";
              continue;}
    if (i==2) {cout<<b<<", ";
               continue;}
    c=a+b;
    a=b;
    b=c;
    cout<<c<<", ";
  }


return 0;
}
