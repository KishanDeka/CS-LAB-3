#include<iostream>
using namespace std;
int main()
{	int b, i, r;
    cout << "enter any positive integer "<<endl;
    cin >> b;
    cout << "factors of "<<b<< " are : ";
	for(i=1; i<b; i++)
	{
	  r=b%i;
	  switch (r)
	     {
	         case 0: cout << b/i <<", ";
	         break;
	     }
	}   cout <<"1";
	return 0;
}
