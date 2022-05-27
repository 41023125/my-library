#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
int main()
 {
  int a,d;
  while(1)
  {
  cout<<"基數多少";
  cin>>a;
  if(!(a==0)){
  cout<<"次方數多少"; 
  cin>>d;
  cout<<pow(a,d);
  cout<<"\n";	
  }
  else 
  {
  	exit(0);
  }
}
  system("pause");
  return 0;
  }

