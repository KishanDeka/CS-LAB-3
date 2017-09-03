#include <iostream>

using namespace std;

int main ()
{ double a;
  cout << "enter the electricity unit charges " <<endl;
  cin >> a;
if (0<=a && a<=50) {cout << "total bill is Rs. " << a*.5*1.2;}
else if (a<=150) {cout << "total bill is Rs. "<< (((a-50)*.75)+(50*.5))*(1.2);}
else if (a<=250) {cout << "total bill is Rs. "<< (((a-150)*1.2)+(50*.5)+(100*.75))*(1.2);}
else if (a>250) {cout << "total bill is Rs. "<< (((a-250)*1.5)+(50*.5)+(100*.75)+(100*1.2))*(1.2);}
else {cout << "Error.Check the values.";}


  return 0;
}
