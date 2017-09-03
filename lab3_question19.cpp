#include <iostream>

using namespace std;

int main ()
{ float a, b, c, d, e, t, p;
  cout << "enter the marks of Physics,Chemistry,Biology,Mathematics and Computer science respectively" <<endl;
  cin >>a>>b>>c>>d>>e;
  cout << "enter the total mark of one paper ";
  cin >> t;
  p=((a+b+c+d+e)*100)/(5*t);
  cout << "your percentage mark is " << p <<"%"<<endl;
  if (p<=100 && p>=90) {cout << "your grade is A";}
 else if (p<=90 && p>=80) {cout << "your grade is B";}
 else if (p<=80 && p>=70) {cout << "your grade is C";}
 else if (p<=70 && p>=60) {cout << "your grade is D";}
 else if (p<=60 && p>=40) {cout << "your grade is E";}
 else if (p<=40 && p>=0)  {cout << "your grade is F";}
 else {cout << "Error.Check the values";}



  return 0;
}
