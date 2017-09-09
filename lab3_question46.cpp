#include<iostream>
using namespace std;
int main()
{	int a, b, c, d, e, f;
    cout << "enter two positive integer "<<endl;
    cin >> a>>b;
    c=a;
    d=b;
    while (d!=0)
    {  e=d;
       d=c%d;
       c=e;
    }
    f=(a*b)/c;
    cout << "LCM of "<<a << " and "<<b<< " is "<<f;
    return 0;
}
