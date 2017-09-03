#include <iostream>

using namespace std;

int main ()
{ double a;
  cout << "enter the basic salary " <<endl;
  cin >> a;
  if (a>=0 && a<=10000) {cout << "HRA = 20%, DA = 80%"<<endl << "gross salary is = "<< a+(a*(80+20)/100);}
  else if (a>=10000 && a<=20000) {cout <<"HRA = 25%, DA = 90%" <<endl<<"gross salary is = "<<a+(a*(90+25)/100);}
  else if (a>20000) {cout <<"HRA = 30%, DA = 95%" <<endl<<"gross salary is = "<<a+(a*(95+30)/100);}
  else {cout << "Error.Check the values";}



  return 0;
}
