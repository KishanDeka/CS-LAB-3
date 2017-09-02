#include <iostream>
#include <cmath>

using namespace std;
int main () {
float a, b;
cout << "enter two number"<< endl;
cin >> a>>b;
if (a<b) {cout << "maximum number is " << b <<endl;}
else if (a>b) {cout << "maximum number is " << a << endl;}
else {cout << "both number are equal";}
return 0;
}
