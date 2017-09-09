#include<iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, n, m, r;
    int c0=0, c1=0, c2=0, c3=0, c4=0, c5=0, c6=0, c7=0, c8=0, c9=0;
    cout << "Enter any integer number : ";
    cin >> a;
    n =abs(a);
    m=n;
    while (n!=0){ r=n%10;
                  n=n/10;
     switch (r)
   {   case 0: c0++;
       break;
       case 1: c1++;
       break;
       case 2: c2++;
       break;
       case 3: c3++;
       break;
       case 4: c4++;
       break;
       case 5: c5++;
       break;
       case 6: c6++;
       break;
       case 7: c7++;
       break;
       case 8: c8++;
       break;
       case 9: c9++;
       break;
   }}
       cout<< "number of zeros = "<<c0<<endl;
       cout<< "number of ones = "<<c1<<endl;
       cout<< "number of twos = "<<c2<<endl;
       cout<< "number of threes = "<<c3<<endl;
       cout<< "number of fours = "<<c4<<endl;
       cout<< "number of fives = "<<c5<<endl;
       cout<< "number of sixes = "<<c6<<endl;
       cout<< "number of sevens = "<<c7<<endl;
       cout<< "number of eights = "<<c8<<endl;
       cout<< "number of nines = "<<c9<<endl;


return 0;
}
