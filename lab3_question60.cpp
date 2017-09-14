#include<iostream>
using namespace std;
int main()
{	int n, b, t, s, r, m, e, g, p;
    cout<< "Enter the Binary Number : ";
    cin >> n;
    b=n;
    t=0;
    s=1;
    while (b>0) { r=b%10;
                  t=t+r*s;
                  s=s*2;
                  b=b/10;
                }
    m=t;
    e=0;
    g=1;
    while (m>0) { p=m%8;
                  e=e+p*g;
                  g=g*10;
                  m=m/8;
                }
    cout<<"The number in octal system : "<<e;

return 0;
}
