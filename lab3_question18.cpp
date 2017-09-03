#include <iostream>
#include <cmath>

using namespace std;

int main ()
{ float a, b;
  cout << "enter the amount you earn and the amount you spent" <<endl;
  cin >>a>>b;
 if (a-b>0) {cout <<"you are in profit of "<< (a-b)*100/a<<"%";}
 else if (a-b<0) {cout << "you are in loss of "<< (b-a)*100/a <<"%";}
 else {cout << "you have no loss or profit.";}
  return 0;
}
