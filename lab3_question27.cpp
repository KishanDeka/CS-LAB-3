#include <iostream>

using namespace std;

int main ()
{ int a=1, n, c=0;
  cout << "enter the natural upto which you want the sum ";
  cin >> n;
  while (a<=n) { a++ ;
             c = c+a;

  }
  cout<<"Sum of all natural number upto " << n<<" is = "<< c-n;


  return 0;
}
