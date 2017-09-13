#include <iostream>
using namespace std;

int main ()
{
    int a, b, c, d=0, r, k, x=0;
    cout << "enter any positive number :"<<endl;
    cin >>a;
    for (b=2;b<=a;b++)
    {   k=0;
        for (c=2;c<=b/2;c++)
        {
          r=b%c;
          if (r==0) {k=1;}
        }
        if ( k==0 ) {x=x+b;}
    }
      cout <<"Sum of the prime numbers between 1 and "<<a<< " = "<<x;
    return 0;
}
