#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<conio.h>
using namespace std;

int gobang[25][25]={0};  

void check_bingo(int,int);

int who=1;
int main()
 {
  int i,j,k;
  int row,col;
  while (1)
   {
    system("cls");
    cout <<"\t\t\t兩人五子棋 遊戲:\n";
    cout <<" | ";
    for (i=0;i<=24;i++)
       cout << setw(2)<< i;
    cout << '\n' ;
    cout << "--|-" ;
    for (i=0;i<=24;i++)
       cout << "--" ;
    cout << '\n' ;
    k=0;
    for (i=0;i<=24;i++)//35
     {
	   cout << setw(2) << k++ <<"| " ;
	   for (j=0;j<=24;j++)
	      if (gobang[i][j]==0)
	        cout << "▇" ;
	      else if (gobang[i][j]==1)
	         cout << "●" ;
	      else  
	         cout << "○" ;
	   cout<<'\n';
	
     }
     if (who%2==1)
       cout << "甲:" ;
     else
       cout << "乙:" ;
     cout << "輸入棋子的位置row,col(以空白隔開) "
         <<" (0<=row<=24,0<=col<=24):";
     cin >> row >> col;
     if (!(row>=0 && row<=24 && col>=0 && col<=24))
      {
 	   cout <<"位置錯誤,重新輸入!\a\n";
 	   continue;
      }
     if (gobang[row][col]!=0)
      {
	   cout<< "位置(" << row<< ',' <<col
	       << "已經有棋子了,重新輸入!\a\n";
	   continue; 
      } 
      
     check_bingo(row,col);
     who++;
    }
   system("pause");
   return 0;
  }
  
void check_bingo(int row,int col)
 {
  int i,j,k;
  int score=0;
  
  int count=0;
  int case_message=-1;//84
  
  if (gobang[row][col]==0)
   {
 	if (who%2==1)
 	  gobang[row][col]=1;
 	else 
 	  gobang[row][col]=2;
 	count=0;
 	score=0;
 	for (i=0;i<=4 && col-i>=0;i++)
 	  if (gobang[row][col-i]!=0 &&
	      gobang[row][col-i]==gobang[row][col])
	    score=score+gobang[row][col-i];
	  else 
	    break;
	    
	if (count<5)
	 for (i=1;i<=4 && col+i<=24 && count<5;i++)
	   if (gobang[row][col+i]!=0 &&
	       gobang[row][col+i]==gobang[row][col])//110
	    {
	     score=score+gobang[row][col+i];
	     count++;
		}
	   else 
	     break;
	   
    if (score%10==0)//119
      case_message=1;
    else if (score%5==0)
      case_message=2;
	else if (score%8==0)
      case_message=3;
    else if (score%4==0 && who%2==1)
      case_message=4;
    else if (score%6==0)
      case_message=5;
    else if (score%3==0 && who%2==1)
      case_message=6;
      
    if (!(case_message==1 || case_message==2))
     {
      count=0;
      score=0;
      for (i=0;i<=4 && row-i>=0;i++)
        if (gobang[row-i][col]!=0 &&
	        gobang[row-i][col]==gobang[row][col])//140
	     {
	   	  score=score+gobang[row-i][col];
	      count++;
	     }
	    else
	      break;//146
	  if (count<5)
	    for (i=1;i<=4 && row+i<=24  &&  count<5;i++)
	      if (gobang[row+i][col]!=0 &&
	         gobang[row+i][col]==gobang[row][col])
	       {
	    	score=score+gobang[row+i][col];
	    	count++;
		   } 
		  else 
	        break;
	        
	  if (score%10==0)
        case_message=1;
      else if (score%5==0)
        case_message=2;
	  else if (score%8==0)
        case_message=3;
      else if (score%4==0 && who%2==1)
        case_message=4;
      else if (score%6==0)
        case_message=5;
      else if (score%3==0 && who%2==1)
        case_message=6;
        
      if (!(case_message==1 || case_message==2))//174
       {
	    count=0;
        score=0;
        for (i=0;i<=4 && row-i>=0 &&col-i>=0;i++)//180
	      if(gobang[row-i][col-i]!=0 &&
	         gobang[row-i][col-i]==gobang[row][col])
            score=score+gobang[row-i][col-i];
          else 
	        break;//185
	        
	    if (count<5)
	      for (i=1;i<=4 && row+i<=24
	        &&  col+i<=24 && count<5;i++)
	        if (gobang[row+i][col+i]!=0 &&
	            gobang[row+i][col+i]==gobang[row][col])
	         {
	    	  score=score+gobang[row+i][col+i];
	    	  count++;
		     }
		   else 
	          break;//198
	          
	    if (score%10==0)
           case_message=1;
        else if (score%5==0)
           case_message=2;
	    else if (score%8==0)
           case_message=3;
        else if (score%4==0 && who%2==1)
           case_message=4;
        else if (score%6==0)
           case_message=5;
        else if (score%3==0 && who%2==1)
           case_message=6;
           
        if (!(case_message==1 || case_message==2))
         {
          count=0;
 	      score=0;
          for (i=0;i<=4 && row-i<=0 && col+i<=24;i++)//220 
             if(gobang[row-i][col+i]!=0 &&
	            gobang[row-i][col+i]==gobang[row][col])
	           score=score+gobang[row-i][col+i];
             else 
	           break;
	           
	      if (count<5)
	        for (i=1;i<=4 && row+i<=24
	        && col-i>=0 && count<5;i++)
	      if(gobang[row+i][col-i]!=0 &&
	         gobang[row+i][col-i]==gobang[row][col])
	        {
	    	 score=score+gobang[row+i][col-i];
	    	 count++;
	    	}
		   else 
	         break;//238
	         
	      if (score%10==0)
             case_message=1;
          else if (score%5==0)
             case_message=2;
	      else if (score%8==0)
             case_message=3;
          else if (score%4==0 && who%2==1)
             case_message=4;
          else if (score%6==0)
             case_message=5;
          else if (score%3==0 && who%2==1)
             case_message=6; //252
         }
       }  
     }
   }
  switch(case_message)
   {
    case 1:
      cout<<"乙:五子連線,遊戲結束.\a\n";
      getch();
      exit(0);
      break;
    case 2:
      cout<<"甲:五子連線,遊戲結束.\a\n";
      system("puase");
      exit(0);
      break;
    case 3:
      cout<<"乙:四子連線\a\n";
      break;
    case 4:
      cout<<"甲:四子連線\a\n";
      break;
    case 5: 
      cout<<"乙:三子連線\a\n";
      break;
    case 6:
      cout<<"甲:三子連線\a\n";
     
   }
 }


