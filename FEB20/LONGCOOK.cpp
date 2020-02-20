#include<iostream>
#include <bits/stdc++.h>
#include <numeric>
using namespace std;
int day(int d, int m, int y)
{
    static int t[] = { 0, 3, 2, 5, 0, 3,
                    5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return ( y + y / 4 - y / 100 +
            y / 400 + t[m - 1] + d) % 7;
}
int month(int m,int y)
{
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
        return 31;
    else if(m==2)
    {
        if(y%400==0 || (y%4==0 && y%100!=0))
            return 29;
        else
            return 28;
    }
    else
        return 30;
}
int result(int r1)
{
	switch(r1) 
	{
		case 0 : return 28;
		case 1 : return 6;
		case 2 : 
		case 3 : return 11;
	}
}
int main()
{/*
	long long int T = 1000001;
    long long int a[T];
    a[1]=0;
    for(long long int i=2;i<=T;i++)
    	{
    	   int fst_fri = day(1,2,i);
    	   if(fst_fri == 6)
                  fst_fri = 7;
            else
                  fst_fri = 6-fst_fri;
    	int mi = month(2,i);
        int sec_lst_sun = mi - 7 - day(mi,2,i);
            if(fst_fri+10 >= sec_lst_sun)
                a[i] = 1;
          //cout<<a[i]<<endl;
    	}*/
    int t;
    cin>>t;
    while(t--)
    {
        int m1,m2;
        long y1,y2;
        cin>>m1>>y1>>m2>>y2;
        long cnt =0;
        
            
           if(m1>2)
           	y1++;
           if(m2<2)
           	y2--;
           	
           //first calender
           long yc1=0,yc2=0;
           int flag = 0;
           while(y1<=y2)
           {
           		int fst_fri = day(1,2,y1);
           		if(fst_fri == 6 )
           		{
           			flag++;
					yc1 = y1;
					
					
				}
    	   		
    	   		if(fst_fri == 0)
           		{
           			flag++;
					yc2 = y1;
				}
    	   		if(flag >= 2)
    	   			break;
           		y1++;
           }
           cout<<yc1<<" "<<yc2<<endl;
           int r1,r2;
           r1 = yc1%4;
           r2 = yc2%4;
           if(yc1!=0)
           	cnt = cnt+((y2 - yc1)/(result(r1))) + 1;
           if(yc2!=0)
           	cnt = cnt+((y2 - yc2)/(result(r2)) )+ 1;
         cout<<cnt<<endl;
    }
    
    return 0;
}
/*
if(y1 > y2)
                break;
            int fst_fri = day(1,m1,y1);
            if(fst_fri == 6)
                  fst_fri = 7;
            else
                  fst_fri = 6-fst_fri;
            int mi = month(m1,y1);
            int sec_lst_sun = mi - 7 - day(mi,m1,y1);
            if(fst_fri+10 >= sec_lst_sun)
                cnt++;
            
            y1 +=1;
*/
