#include<iostream>
using namespace std;
int main()
{	int a, b, r, i, c, d, e;
    cout << "enter any positive integer "<<endl;
    cin >> a;
    b=a;
    d=0;
    while (b>0)
    {   r=b%10;
        b=b/10;
        e=r;
        for (i=e-1;i>0;i--) {e=e*i;}
        d=d+e;
    }
    if (d==a) {cout <<"The number is a Strong Number.";}
    else {cout<<"The number is not a Strong Number.";}
return 0;
}
