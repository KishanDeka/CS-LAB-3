#include<iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, n, m, c=1;

    cout << "Enter the number : ";
    cin >> a;
    n =abs(a);
    while (n!=0)
    {   m=n%10;
        c=c*m;
        n=n/10;
    }
    cout << "The sum of the digits of "
         << a << " is " << c;

return 0;
}
