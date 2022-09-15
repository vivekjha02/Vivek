//To check palindrome number
#include <iostream>
using namespace std;

int main() {

  int n, reversed_num = 0, remainder;

  cout << "Enter an integer: ";
  cin >> n;
  int temp=n;
  while(n != 0)
   {
    remainder = n % 10;
    reversed_num = reversed_num * 10 + remainder;
    n /= 10;
  }
  if ( reversed_num==temp)
  cout<<"Yes, the entered number is palindrome";
  else
  cout<<"not palindrome";

}
