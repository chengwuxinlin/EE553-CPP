#include <iostream>
using namespace std;
/*
  Understanding the sizeof operator
*/

void f(const char s[]) {
  cout << sizeof(s) << '\n';
}

class A {}; // what is the size of an empty class?

class B { // what is the size of an object that contains an int?
private:
  int x;
};

class C { // what is the size of an object that contains 2 ints?
private:
  int x,y;    //  0 1 2 3 4 5 6 7
};

class D { // what is the size of an object containing mixed-sizes?
private:
  char a; // 0  size  = 1
  int b;  // 4
  char c; // 8
  double d; // 16
  char e;   // 24    sizeof(D) = 25 round up to 32
};

class E { // what is the size of an object containing mixed-sizes?
private:
  char a; // 0
  char c; // 1
  char e; // 2
  int b;  // 4
  double d; // 8   sizeof(E)=16
};

int main() {
  cout << sizeof(char) << '\n';
  cout << sizeof(short) << '\n';
  cout << sizeof(int) << '\n';
  cout << sizeof(long) << '\n';
  cout << sizeof(long long) << '\n';
  cout << sizeof(float) << '\n';
  cout << sizeof(double) << '\n';
  cout << sizeof(long double) << '\n';
  char s[20] = "abc"; // '\0' NUL  ^@ (control-@)
  cout << sizeof(s) << '\n';
	char s2[] = "abc"; // '\0' NUL  ^@ (control-@)
  cout << sizeof(s2) << '\n';
	
  char* p = s;
  cout << sizeof(p) << '\n';
  cout << sizeof(*p) << '\n';
  f(s);
}
  
