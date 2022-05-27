#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
 {
 	int a,s,d,f;
 	clock_t t1,t2;
 	while(1){
	cout<<"要多少";
	cin>>a;
	t1=clock();
	if(!(a==0))
	{
	 for(s=1;s<=a;s++)
	 {
	  for(d=1;d<=a-s;d++)
	  {
	  	cout<<" ";
	  }
	  cout<<"/";
	  for(d=1;d<=2*s-1;d++)
	  {
	   cout<<"*"; 
	  } 
	  cout<<"\\";
	  cout<<"\n";
	 }
	 ///*
	 for(s=1;s<=a;s++)
	 {
	  for(s=1;s<=a;s++)
	  {
	  	cout<<" ";
	  }
	   for(d=1;d<=2;d++)
	  {
	   cout<<"|";
	   }
	   cout<<"\n";
	   for(s=1;s<=a;s++)
	 {
	  for(s=1;s<=a;s++)
	  {
	  	cout<<" ";
	  }
	   for(d=1;d<=2;d++)
	  {
	   cout<<"|";
	   }
      }
	 }//*/
	 t2=clock();
	 cout<<"所花時間:"<<(double(t2-t1)/CLK_TCK) ;
	 cout<<"\n"; 
    }
    else 
	 {
	 	break;
	 }
}

	
	 

  system("pause");
  return 0;
  }

