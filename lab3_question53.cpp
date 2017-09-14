#include<iostream>
using namespace std;
int main()
{	int b, i, r, n, m;
    cout << "enter any positive integer "<<endl;
    cin >> b;
    m=0;
	for(i=2; i<=b; i++)
	{ r=b%i;
	  n=b/i;
	  switch (r)
	     {
	         case 0: m=m+n;
	     }

	}
	if (m==b) {cout << "The number is a perfect number.";}
	else {cout<<"The number is not a perfect number.";}
	return 0;
}
