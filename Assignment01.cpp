// Answer to the Question number 01 

#include <iostream>

using namespace std;

int main() {

  int x = 2;
  int y = 4;
  cout << x * y << endl;
  return 0;

  return 0;
}

// Answer to the Question number 02

#include <iostream>

using namespace std;

int main() {
  cout << "ASCII value of u is " << (int)
  'U' << endl;
  return 0;
}

// Answer to the Question number 03

#include <iostream>

using namespace std;

int main() {
  int length = 7;
  int breadth = 4;
  cout << "Length " << length << endl;
  cout << "Breadth" << breadth << endl;
  int area = length * breadth;
  cout << "Area is " << area << endl;
  return 0;
}

// Answer to the Question number 04

#include <iostream>

using namespace std;

int main() {
  int x = 4;
  int cube;
  cout << "number is " << x << endl;
  cout << "cube of the number is " << x * x * x << endl;
  return 0;
}

// Answer to the Question number 05

#include <iostream>

using namespace std;

int main() {
  cout << "\nSize of fundamental data types :\n";
  cout << " The sizeof(char) : " << sizeof(char) << " bytes \n";
  cout << " The sizeof(short) : " << sizeof(short) << " bytes \n";
  cout << " The sizeof(int) : " << sizeof(int) << " bytes \n";
  cout << " The sizeof(long): " << sizeof(long) << " bytes \n";
  cout << " The sizeof(long long) :" << sizeof(long long) << " bytes \n";
  cout << " The sizeof(float) :" << sizeof(float) << " bytes \n";
  cout << " The sizeof(double) :" << sizeof(double) << " bytes \n";
  cout << " The sizeof(long double) :" << sizeof(long double) << " bytes \n";
  cout << " The sizeof(bool) : " << sizeof(bool) << " bytes \n\n";
  return 0;
}

// Answer to the Question number 06

#include <iostream>

using namespace std;

int main() {
  cout << "\n Swap two numbers :\n";
  int n1 = 2, n2 = 3, temp;
  cout << " Before swapping the 1st number is : " << n1 << "\n";
  cout << " Before swapping the 2nd number is : " << n2 << "\n";
  temp = n2;
  n2 = n1;
  n1 = temp;
  cout << " After swapping the 1st number is : " << n1 << "\n";
  cout << " After swapping the 2nd number is : " << n2 << "\n";
}