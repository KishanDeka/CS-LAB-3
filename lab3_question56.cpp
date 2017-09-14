#include<iostream>
using namespace std;
int main()
{	int n, a, b, r, i, c, d, e;
    cout << "enter any positive integer "<<endl;
    cin >> n;
    cout << "Strong numbers between 1 to "<<n<<" is "<<endl;
    for (a=1;a<=n;a++)
   { b=a;
     d=0;
     while (b>0)
     {   r=b%10;
         b=b/10;
         e=r;
         for (i=e-1;i>0;i--) {e=e*i;}
         d=d+e;
     }
     if (d==a) {cout <<a<<endl;}
   }
return 0;
}
