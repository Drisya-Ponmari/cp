#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long int compute(long int* m,long int* l,long int* r,long int m_s,long int ls,long int rs)
{
	//cout<<r[0]<<endl;
	long int s=0,j,k;
	for(long int i=0;i<m_s;i++)
	{
		if(m[i]!=0)
		{
			long int h_sq = m[i]*m[i];
			j=0;
			k=0;
			while(j<ls && k<rs)
			{
				//cout<<m[i]<<" "<<l[j]<<" "<<r[k]<<endl;
				//cout<<(float)h_sq/(float)(abs(l[j]*r[k]))<<endl;
				
				if((float)h_sq/(float)(abs(l[j]*r[k])) == 1)
				{
					//cout<<m[i]<<" "<< l[j] <<" "<<r[k]<<endl;
					s = s+1;
					j++;
					k++;
				}
				else
				{
					if((float)h_sq/(float)(abs(l[j]*r[k])) <1)
						j++;
					else
						k++;
				}
			}
		}	
	}
	
	return s;

}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n,m;
		cin>>n;
		cin>>m;
		int is_x = 0,is_y=0;
		long int x[n],y[m],i,j,sxn=0,sxp=0,syn=0,syp=0,x_n[n],x_p[n],y_p[m],y_n[m];
		for(i=0;i<n;i++)
		{
		cin>>x[i];
		if(x[i] ==0)
			is_x =1;
		if(x[i]<0)
			{
			x_n[sxn] = x[i];
			sxn++;
			}	
		else if(x[i]>0)
			{
			x_p[sxp] = x[i];
			sxp++;
			}
			
		}
		for(i=0;i<m;i++)
		{
			cin>>y[i];
			if(y[i] ==0)
				is_y =1;
			if(y[i] < 0)
			{
			y_n[syn] = y[i];
			syn++;
			}
			else if(y[i]>0)
			{
			y_p[syp] = y[i]; 
			syp++;
			}
		}
		long int k,total=0,temp=0;
		
		int flag = 0;
		for(i=0;i<n;i++)
		{
			if(x[i]==0)
			{
				flag =1;
				if(is_y == 1)
					temp = temp + ((n-1 )* (m-1));
				else
					temp = temp + ((n-1 )* (m));
			}
		}
		//cout<<flag<<endl;
		for(i=0;i<m;i++)
		{
			
				if(y[i] ==0)
				{
					if(flag == 0)
						temp = temp + ((m-1)*n);
					
				}
		}
		
		sort(x_n,x_n+sxn);
		sort(y_n,y_n+syn);
		sort(x_p,x_p+sxp);
		sort(y_p,y_p+syp);
		sort(x,x+n);
		sort(y,y+m);
		total = total + compute(x,y_n,y_p,n,syn,syp);
		//cout<<total<<endl;
		total = total + compute(y,x_n,x_p,m,sxn,sxp);
		//cout<<total<<endl;
		cout<<total+temp<<endl;
	
	}
	return 0;
}
