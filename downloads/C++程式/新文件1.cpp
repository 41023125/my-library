#include<iostream>
#include<cstdlib>
using namespace std;
int main()
 {
   int i,x;
   cout<<"�аݥ��Z�@���X�H�G" ;
   cin>>x;
   int score[x];
   char*cname[31][x]; 
   for(i=0;i<=x-1;i++)
   {
   	cout<<"��"<<i+1<<"�H�m�W�G\n";
 	cin>>cname[31][i+1];
 	cout<<"��"<<i+1<<"�H���ơG" ;
 	cin>>score[x];
   }
   
   

  system("pause");
  return 0;
  }
