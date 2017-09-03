#include <iostream>

using namespace std;

int main ()
{ int a;
  cout << "enter the month number"<<endl;
  cin >> a;
  if (a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==12) {cout <<"Number of days in this month is 31.";}
  else if (a==4|| a==6 || a==9 ||a==11) {cout << "Number of days in this month is 30";}
  else if (a==2) {cout << "If the year is not leap year number of days in this month is 28. If the year is leap year number of days in this month is 29.";}
  else {cout << "The number uis not a month number.";}
  return 0;
}
