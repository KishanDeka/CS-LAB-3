#include <iostream>

using namespace std;

int main ()
{ char a;
  cout << "enter the alphabet"<<endl;
  cin >> a;
  if (a>='a'&&a<='z') {cout <<"It is a lowercase alphabet.";}
  else if ((a>='A'&&a<='Z')) {cout << "It is an uppercase alphabet.";}
  else {cout << "The character you type is not an alphabet.";}
  return 0;
}
