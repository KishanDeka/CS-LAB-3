#include <iostream>

using namespace std;

int main ()
{ char a;
  cout << "enter the character"<<endl;
  cin >> a;
  if ((a>='a'&&a<='z') || (a>='A'&&a<='Z')) {cout <<"The character is an alphabet.";}
  else if (a>='0' && a<='9') {cout << "It is a digit.";}
  else {cout << "It is a special character.";}
  return 0;
}
