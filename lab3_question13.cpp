#include <iostream>

using namespace std;

int main ()
{ int a, b;
  cout << "enter the total amount of money ";
  cin >> a;
  cout << "enter the value of the individual note ";
  cin >> b;
  if (a%b==0) {cout << "total number of notes in that given amount is = "<<a/b;}
  else {cout << "you cannot have total amount " << a <<" using the notes of value " <<b <<".";}
  return 0;
}
