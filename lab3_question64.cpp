#include<iostream>
using namespace std;
int main()
{	int n, b, t, s, r, m, e, g, p;
    cout<< "Enter the Octal Number : ";
    cin >> n;
    b=n;
    t=0;
    s=1;
    while (b>0) { r=b%10;
                  t=t+r*s;
                  s=s*8;
                  b=b/10;
                }
  cout << "The number in Decimal : "<<t;
return 0;
}
