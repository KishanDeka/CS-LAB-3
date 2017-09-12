#include <iostream>
using namespace std;

int main ()
{
    int a, b, c, d=0, r, k;
    cout << "enter any positive number :"<<endl;
    cin >>a;
    for (b=2;b<=a;b++)
    {   k=0;
        for (c=2;c<b;c++)
        {
          r=b%c;
          if (r==0) {k=1;}
        }
        if ( k==0 )
        {cout << b <<", ";}
    }

    return 0;
}
