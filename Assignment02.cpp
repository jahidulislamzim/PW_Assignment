// Answer to the Question number 01

#include <iostream>

using namespace std;
int main() {
  int x, y;
  cout << "Enter the first number ";
  cin >> x;
  cout << "Enter the second number ";
  cin >> y;
  cout << (x == y) ? 1 : 0;
  return 0;
}

// Answer to the Question number 02
#include <iostream>

using namespace std;
int main() {
  int a, b;
  cout << "Enter the first number : ";
  cin >> a;
  cout << "Enter the second number : ";
  cin >> b;
  cout << ((a < 50) && (a < b)) ? 1 : 0;
  return 0;
}

// Answer to the Question number 03
#include <iostream>

using namespace std;
int main() {
  int total, boys, girls;
  boys = 17;
  total = (80 * 45) / 100;
  girls = total - boys;
  cout << "Number of girls getting grade A = " << girls << endl;
  return 0;
}

// Answer to the Question number 04

#include <iostream>

using namespace std;
int main() {
  int n, first, second, third, fourth, fifth, sum;
  n = 12345;
  first = n / 10000;
  n = n % 10000;
  second = n / 1000;
  n = n % 1000;
  third = n / 100;
  n = n % 100;
  fourth = n / 10;
  fifth = n % 10;
  sum = first + fourth;
  cout << "sum of first and fourth digit is: " << sum << endl;
  return 0;
}

// Answer to the Question number 05
using namespace std;
int main() {
  int n, first, second, third, sum;
  n = 123;
  first = n / 100;
  n = n % 100;
  second = n / 10;
  third = n % 10;
  sum = first + second + third;
  cout << "sum of 3 digits is: " << sum << endl;
  return 0;
}

// Answer to the Question number 06
#include <iostream>
  using namespace std;
int main() {
  float num1, num2;
  cout << "Enter the first number ";
  cin >> num1;
  cout << "Enter the second number ";
  cin >> num2;
  cout << "Sum = " << num1 + num2 << endl;
  cout << "Difference = " << num1 - num2 << endl;
  cout << "Product = " << num1 * num2 << endl;
  cout << "Division = " << num1 / num2 << endl;
  return 0;
}