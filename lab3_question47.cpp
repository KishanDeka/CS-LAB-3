#include<iostream>
using namespace std;
int main()
{	int n, r, a=0, i;
    cout << "enter a positive integer "<<endl;
    cin >> n;
    for (i=2;i<n;i++)
    {
        r=n%i;
     switch (r)
     {
         case 0: a++;
         break;
     }
    }
    if (a!=0) {cout << n<< " is a not prime number.";}
    else {cout<<n<< " is a prime number.";}
    return 0;
}
