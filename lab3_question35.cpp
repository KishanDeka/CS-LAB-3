#include<iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, n, m = 0;

    cout << "Enter the number : ";
    cin >> a;
    n =abs(a);
    while (n!=0)
    {
        m=m+(n%10);
        n=n/10;
    }
    cout << "The sum of the digits of "
         << a << " is " << m;

return 0;
}
