#include <iostream>
#include <cmath>
using namespace std;
int main () {
int a, c=0;
cout << "enter any integer number "<< endl;
cin >> a;
if (a>=0) {while (a>=1) { a=a/10;
                c++;}
 cout << "number of digit in the number is " << c;}
else {while (a<=-1) { a=a/10;
                c++;}
 cout << "number of digit in the number is " << c;}
return 0;
}
