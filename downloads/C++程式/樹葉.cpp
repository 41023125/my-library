#include<iostream>
#include<cstdlib>
using namespace std;
int main()
 {
  int ad;
  while(1)
  {
  	cout<<"»Ý­n´X¦C?";
    cin>>ad;
   if (!(ad==0))
   {
    
    for(int i=1;i<=ad;i++)
    {
     for(int j=1;j<=i;j++)
       {
      	cout<<"*";
	   } 
	 cout<<"\n";
	 }
    }
   else
     {
     	break;
	 }
   }
  system("pause");
  return 0;
  }

