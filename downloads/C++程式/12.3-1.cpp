#include <iostream>
#include <cstdlib>
#include <string>
using namespace std; 
int main(){
	int x,i,a=0,j,q;
	cout<<"�аݥ��Z�@���X�H�G";
	cin>>x;
	int z[x];
	string Name[x]; 
	string p;


	for(i=0;i<x;i++)
	{
	    cout<<"��"<<i+1<<"�ӤH�W�r:\n"; 
	 	cin>>Name[i];
	 	cout<<"��"<<i+1<<"�ӤH����:\n"; 
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
	 cout<<"��"<<i+1<<"�W�m�W�G"<<Name[i]<<','<<z[i]<<"��";
	 cout<<"\n";
	}
	
	
    
    cout<<"���Z�@"<<x<<"�H,�`����:"<<a/x<<"��\n";
    cout<<"��team02��\n�{�����g�̡G���ǲW41023125\n�y�{��ø�s�̡G���{�g41023105\n�����G���ۧ�41023122\n�}�C�P��ƫ��O�W���G���ۨ�41023123\n�j���While�j��W���G�����E41023102(team06)\n��L�G���̵q41023114(team06)"; 
    
     
    
	 	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
