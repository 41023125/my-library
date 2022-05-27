#include <iostream>
#include <cstdlib>
#include <string>
using namespace std; 
int main(){
	int x,i,a=0,j,q;
	cout<<"請問全班共有幾人：";
	cin>>x;
	int z[x];
	string Name[x]; 
	string p;


	for(i=0;i<x;i++)
	{
	    cout<<"第"<<i+1<<"個人名字:\n"; 
	 	cin>>Name[i];
	 	cout<<"第"<<i+1<<"個人分數:\n"; 
	 	cin>>z[i];
	 	a=a+z[i];
	}
	for(i=1;i<=x-1;i++)
	{
	  for(j=0;j<x-i;j++)
	  {
	  	if(z[j]<z[j+1])
	  	 {
	  	 	q=z[j],
	  	 	z[j]=z[j+1];
	  	 	z[j+1]=q;
	  	 	p=Name[j];
	  	 	Name[j]=Name[j+1];
	  	 	Name[j+1]=p;
		   }
	  }
	}
	for(i=0;i<x;i++)
	{
	 cout<<"第"<<i+1<<"名姓名："<<Name[i]<<','<<z[i]<<"分";
	 cout<<"\n";
	}
	
	
    
    cout<<"全班共"<<x<<"人,總平均:"<<a/x<<"分\n";
    cout<<"第team02組\n程式撰寫者：李學淵41023125\n流程圖繪製者：李宛妮41023105\n除錯：李彥廷41023122\n陣列與資料型別規劃：李彥協41023123\n迴圈及While迴圈規劃：王郁淳41023102(team06)\n其他：王樟皓41023114(team06)"; 
    
     
    
	 	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
