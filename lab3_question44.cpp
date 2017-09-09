#include<iostream>
using namespace std;
int main()
{	int b, i, r;
    cout << "enter any positive integer "<<endl;
    cin >> r;
    b=r;
	for(i=b-1; i>0; i--)
	{
	  b=b*i;

	}   cout << "fatorial of "<< r<<", "<<r<<"! ="<<b;
	return 0;
}
