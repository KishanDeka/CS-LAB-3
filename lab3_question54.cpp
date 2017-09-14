#include<iostream>
using namespace std;
int main()
{	int a, i, r, n, m, b;
    cout << "enter any positive integer "<<endl;
    cin >> a;
    cout << "The perfect numbers between 1 to "<<a<<" is : "<<endl;
    for (b=1;b<=a;b++)
    {   m=0;
        for(i=2; i<=b; i++)
          { r=b%i;
	        n=b/i;
	        switch (r) {case 0: m=m+n;}
          }
	    if (m==b) {cout <<b<<endl;}
    }
return 0;
}
