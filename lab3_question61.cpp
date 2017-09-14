#include<iostream>
#include<cmath>
using namespace std;
int main()
{	int n, b, t, s, k, r;
    cout<< "Enter the Binary Number : ";
    cin >> n;
    b=n;
    t=0;
    s=0;
    while (b>0) { r=b%10;
                  b=b/10;
                  k=r*pow(2,t);
                  t++;
                  s=s+k;
                }
    cout<<s;

return 0;
}
