 #include <iostream>
 #include <cstdlib>
 #include <string>
 #include <iomanip>
 #include <ctime>
 using namespace std;
 int main() 
  {
   char *poker_context[13]={"A","2","3","4","5","6","7",
        "8","9","10","J","Q","K"}; 
														  
 int poker[4][13];
 //poker[row][col],表示位置(row,col)被設定為撲克牌代號
  
 int all_four[13]={0};
 //int all_four[i]=0,表示撲克牌號碼i的張數為0
   
 int match[4][13]={0};
 //int natch[4][13]=0,表示(row,col)還沒被配對成功
  
 int row[2],col[2];//輸入兩個位座標位置(row,col)
   
 int number; //記錄亂數產生的撲克牌號碼0~12 
  //撲克牌號碼0~12,分別?代表12345678910JQKA
   
 char *temp; //顯示位置(row,col)的內容
 int num=1; //輸入次數 
 int bingo=0;
  //撲克牌翻牌配對成功一次,bingo值+1;bingo=26,則遊戲結束
  
 int i,j,k;
 srand((unsigned) time(NULL));
 for (i=0;i<4;i++) 
   for(j=0;j<13;j++)
     {
	  number=rand () %13;
	  //all_four[number]<4,表示撲克牌號碼number的張數最多四張
	  if (all_four[number]<4)
	    {
	     all_four[number]++;
		 poker[i][j]=number; 
		} 
      else
        j--;
     }
 cout << "\t撲克牌翻牌配對遊戲\n" ;
     
 //畫出4*13的撲克牌配對圖形
 cout << ' ';
 for (i=0;i<13;i++) 
	cout << setw(2) << i;
  cout << '\n';
	  
 k=0;
 for(i=0;i<4;i++)
  {
	 	 cout << setw(2) << k++ ;
	 	for (j=0;j<13;j++)
	 	   cout<< "◆" ;
	 	 cout<<'\n' ;
  }
	//畫出4*13的撲克牌配對圖案
	
  cout << "撲克牌翻牌配對需要兩個位置:\n" ;
  while(1)
   {
  	//每次選取兩個位置前,
	//先將兩個位置設成位選取狀態歸零(以-1表示)
	row[0]=-1; 
	col[0]=-1; 
	row[1]=-1; 
	col[1]=-1;
	//每次選取兩個位置前,
	//先將兩個位置設成位選取狀態歸零(以-1表示)
	
    for (num=0;num<2;num++) 
    {
      cout << "輸入第" << num+1
	      << "次選擇的位置(以空白隔開)" ;
	  cout<< "row,col(row=0-3 , col=0-12):" ;
	  
	  //輸入列與行位置,(以空白隔開)
	  cin >> row[num] >> col[num] ;
	  
	if ( ! (row[num]>=0 && row[num]<=3
	     && col[num]>=0 && col[num]<=12) )
	 {
	  cout << "無(" << row[num] << ','  
	       << col[num] << ")位置,重新輸入!\a\n";
	  num--;
	  continue;
	 }
	 
	if ( match[row[num]][col[num]]!=0 ||
	     (row[0]==row[1] && col[0]==col[1]) ) 
	  {
	   cout << "位置(" << row[num] << ',' << col[num]
	        << ")已經輸入了或配對完成,重新輸入!\a\n" ;
       num--;
       continue;
	  } 
	 
     system("cls");
     //畫出4*13的撲克牌翻牌配對圖形 
     cout << "\t撲克牌翻牌配對遊戲\n" ;
     cout << ' ' ;
     for (i=0;i<13;i++) 
	    cout << setw(2) << i ; 
      cout << '\n' ;
	  
	 k=0;
	 for (i=0;i<4;i++)
	  {
	 	cout << setw(2) << k++;
        for (j=0;j<13;j++)
          if (match[i][j]==0)
	 	   if ( i==row[num] && j==col[num]
			   || i==row[0] && j==col[0] ) 
            {
             temp=poker_context[poker[i][j]];
             cout << temp;
			}
		   else
		     cout << "◆" ; 
		 else
		  {
		 	temp=poker_context[poker[i][j]];
		 	cout << temp;
		  }
		 cout << '\n' ;
	  }    
	} 
   _sleep(1000); //暫停1秒
   
   //位置(row[0],col[0])與位置(row[1],col[1])內容相同時
    if (poker[row[0]][col[0]]==poker[row[1]][col[1]])
     {
      match[row[0]][col[0]]=1;
      //設定位置(row[0],col[0])已配對成功 
      match[row[1]][col[1]]=1;
      //設定位置(row[1],col[1])已配對成功
      bimgo++;
     }
    
    system("cls");
    //畫出4*13的撲克牌翻牌配對圖形 
    cout << "\t撲克牌翻牌配對遊戲\n";
    cout << ' ';
	for (i=0;i<13;i++) 
	  cout << setw(2) << i ; 
	cout << '\n';
	  
	k=0;
	for(i=0;i<4;i++)
	 {
	  cout << setw(2) << k++ ;
	  for (j=0;j<13;j++)
	 	if (match[i][j]==0) 
		   cout << "◆" ; 
		else
		 {
		  temp=poker_context[poker[i][j]];
		  cout << temp;
	     }
		cout << '\n' ;
	}  
	 
   cout << "撲克牌配對需要選擇兩個位置:\n" ;
   //畫出4*13的撲克牌配對圖形
   if (bingo==26)
      break;
  }
  cout << "撲克牌翻牌配對遊戲結束.\n" ;
	  
 system("PAUSE");
 return 0;
}


