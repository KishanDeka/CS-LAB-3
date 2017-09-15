#include<iostream>
using namespace std;
int main()
{	int n, b, t, s, r, m, e, g, p;
    cout<< "Enter the Decimal Number : ";
    cin >> n;
    b=n;
    t=0;
    s=1;
    while (b>0) { r=b%2;
                  t=t+r*s;
                  s=s*10;
                  b=b/2;
                }
  cout << "The number in Binary system : "<<t;
return 0;
}
