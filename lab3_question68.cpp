#include <iostream>
using namespace std;

int main() {
       long int n, r, q;
	char h[100];
	int i=1, j, t;
	cout<<"Enter any decimal number : ";
	cin>> n;
	q=n;
	while(q!=0)
	{
		t=q%16;
		if(t<10)
		{
			t=t+48;
		}
		else
		{
			t=t+55;
		}
		h[i++]=t;
		q=q/16;
	}
	cout<<"Equivalent hexadecimal value of "<<n<<" is : "<<endl;
	for(j=i-1; j>0; j--)
	{
		cout<<h[j];
	}
	return 0;
}
