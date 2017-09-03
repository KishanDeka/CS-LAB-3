#include <iostream>
#include <cmath>

using namespace std;

int main ()
{ float a, b, c;
  cout << "enter the value of a,b,c for quadratic equation of the form a(x)^2+bx+c=0 " <<endl;
  cin >>a>>b>>c;
  if (pow(b,2)>=4*a*c) {cout << "root 1= "<<(-b+sqrt(pow(b,2)-(4*a*c)))/(2*a) <<endl<<"root 2= " <<(-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);}
  else {cout << "root 1= " <<((-b)/(2*a))<<"+"<<"i("<<sqrt(-(pow(b,2)-(4*a*c)))/(2*a)<<")"<<endl<<"root 2= "<<((-b)/(2*a))<<"-"<<"i("<<sqrt(-(pow(b,2)-(4*a*c)))/(2*a)<<")" ;}
  return 0;
}
