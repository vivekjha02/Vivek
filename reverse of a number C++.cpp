//Reverse of a number
#include <iostream>
using namespace std;

int main() {

  int n, reversed_num = 0, remainder;

  cout << "Enter an integer: ";
  cin >> n;

  while(n != 0)
   {
    remainder = n % 10;
    reversed_num = reversed_num * 10 + remainder;
    n /= 10;
  }

  cout << "Reversed Number = " << reversed_num;

}
