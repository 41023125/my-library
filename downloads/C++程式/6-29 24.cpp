#include<iostream> 
#include<cstdlib> 
#include<ctime>
using namespace std;
int main()
{
	time_t *t,tt;
	t=&tt;
	
	//1970/1/1 00:00:00到目前經過秒數
	//也是目前PC系統時間
	tt=time(NULL);
	
	 cout<<"目前PC系統時間:"<<ctime(t);
	 //ctime(t)，將PC系統時間轉為26個字元之字串
	 
	 system("pause") ;
	 return 0;
}
