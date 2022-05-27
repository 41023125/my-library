#include<iostream>
#include<cstdlib>
using namespace std;
int main()
 {
   int i,x;
   cout<<"請問全班共有幾人：" ;
   cin>>x;
   int score[x];
   char*cname[31][x]; 
   for(i=0;i<=x-1;i++)
   {
   	cout<<"第"<<i+1<<"人姓名：\n";
 	cin>>cname[31][i+1];
 	cout<<"第"<<i+1<<"人分數：" ;
 	cin>>score[x];
   }
   
   

  system("pause");
  return 0;
  }
