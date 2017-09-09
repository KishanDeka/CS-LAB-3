#include<iostream>
using namespace std;
int main()
{	int b, e, i, h=1;
    cout << "enter the base and exponential respectively "<<endl;
    cin >> b>>e;
	for(i=0; i<e; i++)
	{
	  h=h*b;
	}
	cout <<b<<" to the power "<<e<<" = "<<h;
	return 0;
}
