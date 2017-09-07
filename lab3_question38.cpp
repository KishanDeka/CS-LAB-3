#include<iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, n, m=0, c=0, k=0, j;

    cout << "Enter any integer number : ";
    cin >> a;
    n =abs(a);
    j=n;
    while (j>=1) { j=j/10;
                   k++; }
    while (n!=0)
    {   m=n%10;
        n=n/10;
        c=c+m*(pow(10,k-1));
        k--;
    }
   if (n=c) {cout<<"The number is palindrome.";}
   else {cout<<"The number is not palindrome.";}

return 0;
}
