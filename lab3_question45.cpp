#include<iostream>
using namespace std;
int main()
{	int a, b, c, d, e;
    cout << "enter two positive integer "<<endl;
    cin >> a>>b;
    c=a;
    d=b;
    while (d!=0)
    {  d=e;
       d=c%d;
       e=c;
    }
    cout << "HCF of "<<a<<" and "<<b<< " is "<<c;
    return 0;
}
