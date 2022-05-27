#include<iostream>
#include<cstdlib>
using namespace std;
int main()
 {
  float a=1.2345678901234567890f;
  double b;
  cout.precision(20);
  cout.setf(ios::fixed);
  cout<<"a="<<a<<'\n';
  a=12.345678901234567890f;
  cout<<"a="<<a<<'\n';
  b=1.2345678901234567890;
  cout<<"b="<<b<<'\n';
  b=123.45678901234567890;
  cout<<"b="<<b<<'\n';
  system("pause");
  return 0;
  }

