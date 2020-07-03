#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void ConvertBinary(vector<int> &a,long int n)
{
	while(n!=0)
	{
		a.push_back(n%2);
		//cout<<n%2<<" ";
		n = n/2;
	}
//	cout<<endl;
}

long binaryToDecimal(string n) 
{
	string num = n; 
    long dec_value = 0; 
    long base = 1; 
    long len = num.length(); 
    for (int i = 0; i <len; i++) { 
        if (num[i] == '1') 
            dec_value += base; 
        base = base * 2; 
    }
    return dec_value; 
 }
int main()

{
	long int t;
	long long int x,Y,l,r,i,j,maxi_val,u;
	cin>>t;
	while(t--)
	{
		scanf("%lld %lld %lld %lld",&x,&Y,&l,&r);

		if(x == 0 || Y == 0)
			maxi_val = l;
		else if((x|Y) >= l && (x|Y) <=r)
			maxi_val = x|Y;
		else
		{
			long int t = x|Y|l;
			vector <int> R;
			ConvertBinary(R,r);
			long int m = R.size()-1;
			string one="";
			string d="";			
			for(long int i=0;i<=m;i++)
			{
				one=one+"1";
				if(R[i] == 1)
					d = d + '1';
				else
					d = d + '0';
			}
			string T ="";
			maxi_val = r;
			long long int val = (x&r) * (Y&r);
			long int k=0;
			while(k<=m)
			{
				if(R[k] == 1)
				{
					string t1="";
					if(k>0)
						t1 = one.substr(0,k);
					string t3 ="";
			//		cout<<d<<endl;
					if(k<m)
						t3 = d.substr(k+1,m+1-k);
				//	cout<<t3<<endl;
					T = t1+'0'+t3;
				
				//cout<<k<<endl;
				//cout<<T<<endl;
				long int num = binaryToDecimal(T);
				long int temp = num & t;
				long long int temp_val= (x&temp) * (Y&temp);
				if(temp_val > val && temp >=l)
				{
					val = temp_val;
					maxi_val = temp;
				}
				if(temp >= l&&temp_val == val && maxi_val > temp)
				{
					maxi_val = temp;
				}
				}
				k++;
			}
					if(val == 0)
						maxi_val = l;
			}
			
			printf("%lld\n",maxi_val);		
		}	
		
	return 0;
}
