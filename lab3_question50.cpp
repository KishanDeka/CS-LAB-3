#include<iostream>
using namespace std;
int main ()
{	int b, i, r, a, n, j, p;
    cout << "enter any positive integer "<<endl;
    cin >> b ;
    cout << "Prime factors of "<< b<< " are : ";
	for(i=1; i<b; i++)
	{
	  r=b%i;
	  n=b/i;
	  switch (r)
	     {    case 0:  for (j=2;j<=n/2;j++)
                      {   a=0;
                          p=n%j;
                          if (p==0) {a++;}
                      }
                if (a==0) {cout << n << ",  ";}
	     }
	}
return 0;
