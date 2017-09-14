#include<iostream>
using namespace std;
int main ()
{	int a, n, t, g, f, q, c, d;
    cout << "enter any positive integer "<<endl;
    cin >> a ;
    d=a;
    q=0;
    t=0;
    n=a;
    while (n>0) { n=n/10;
                  t++;
                }
    while (d>0) { c=d%10;
                  d=d/10;
                  g=1;
                  for (f=1;f<=t;f++)
                      { g=c*g;}
                  q=g+q;
                }
    if (q==a) {cout << "The number is an armstrong number."<<endl;}
    else {cout << "The number is not an armstrong number";}
return 0;
}
