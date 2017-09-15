#include <iostream>
using namespace std;

int main() {
       long int n, r, q, o, b, s, R;
	char h[100];
	int i=1, j, t;
	cout<<"Enter any Octal number : ";
	cin>> o;
    b=o;
    n=0;
    s=1;
    while (b>0) { R=b%10;
                  n=n+R*s;
                  s=s*8;
                  b=b/10;
                }
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
	cout<<"Equivalent hexadecimal value of "<<o<<" is : ";
	for(j=i-1; j>0; j--)
	{
		cout<<h[j];
	}
	return 0;
}
