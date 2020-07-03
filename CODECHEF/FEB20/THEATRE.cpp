#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int get_row(char c)
{
	switch(c)
	{
		case 'A' : return 0;
		case 'B' : return 1;
		case 'C' : return 2;
		case 'D' : return 3;						
	}
}
long long int S(int x,int y,int z,int w)
{

	int e[4] ={x,y,z,w};
	sort(e,e+4);
	long long int sum1 =0;
	int money =25;
	for(int k=0;k<4;k++)
	{
		if(e[k] == 0)
			sum1 = sum1-100;
		else
			sum1 = sum1+(e[k]*money);
		money = money +25;
	}
	
	return sum1;
}
int get_col(int c)
{
switch(c)
	{
		case 12 : return 0;
		case 3  : return 1;
		case 6  : return 2;
		case 9  : return 3;						
	}

}
void get_0(int* a,int* t)
{
	t[0] =0;
	int x = a[0];
	//for 5
	t[1] =5;
	if(S(a[t[0]],a[t[1]],a[10],a[15]) > S(a[t[0]],a[t[1]],a[14],a[11]))
	{
		t[2] = 10;
		t[3] = 15;
	}
	else
	{
		t[2] = 14;
		t[3] = 11;	
	}
	//for 9
	if(S(a[t[0]],a[9],a[6],a[15]) > S(a[t[0]],a[9],a[14],a[7]))
	{
		if(S(a[t[0]],a[9],a[6],a[15]) > S(a[t[0]],a[t[1]],a[t[2]],a[t[3]]))
		{
			t[1] = 9;
			t[2] = 6;
			t[3] =15;
		}
	
	}
	else
	{
		if(S(a[t[0]],a[9],a[14],a[7]) > S(a[t[0]],a[t[1]],a[t[2]],a[t[3]]))
		{
			t[1] = 9;
			t[2] = 14;
			t[3] =7;
		}
	}
	
	//for 13
	if(S(a[t[0]],a[13],a[6],a[11]) > S(a[t[0]],a[13],a[10],a[7]))
	{
		if(S(a[t[0]],a[13],a[6],a[11]) > S(a[t[0]],a[t[1]],a[t[2]],a[t[3]]))
		{
			t[1] = 13;
			t[2] = 6;
			t[3] =11;
		}
	}
	else
	{
	
		if(S(a[t[0]],a[13],a[10],a[7]) > S(a[t[0]],a[t[1]],a[t[2]],a[t[3]]))
		{
			t[1] = 13;
			t[2] = 10;
			t[3] = 7;
		}
	}
	
}
void get_1(int* a,int* s)
{
	s[0] =1;
	int x = a[1]; 
	//for 4
	s[1] =4;
	if(S(a[s[0]],a[s[1]],a[10],a[15]) > S(a[s[0]],a[s[1]],a[14],a[11]))
	{
		s[2] = 10;
		s[3] = 15;
	}
	else
	{
		s[2] = 14;
		s[3] = 11;	
	}
	//for 8
	if(S(a[s[0]],a[8],a[6],a[15]) > S(a[s[0]],a[8],a[14],a[7]))
	{
		if(S(a[s[0]],a[8],a[6],a[15]) > S(a[s[0]],a[s[1]],a[s[2]],a[s[3]]))
		{
			s[1] = 8;
			s[2] = 6;
			s[3] =15;
		}
	
	}
	else
	{
		if(S(a[s[0]],a[8],a[14],a[7]) > S(a[s[0]],a[s[1]],a[s[2]],a[s[3]]))
		{
			s[1] = 8;
			s[2] = 14;
			s[3] =7;
		}
	}
	
	//for 12
	if(S(a[s[0]],a[12],a[6],a[11]) > S(a[s[0]],a[12],a[10],a[7]))
	{
		if(S(a[s[0]],a[12],a[6],a[11]) > S(a[s[0]],a[s[1]],a[s[2]],a[s[3]]))
		{
			s[1] = 12;
			s[2] = 6;
			s[3] =11;
		}
	}
	else
	{
	
		if(S(a[s[0]],a[12],a[10],a[7]) > S(a[s[0]],a[s[1]],a[s[2]],a[s[3]]))
		{
			s[1] = 12;
			s[2] = 10;
			s[3] = 7;
		}
	}
	
}
void get_2(int* a,int* r)
{
	r[0] =2;
	//for 4
	r[1] =4;
	if(S(a[r[0]],a[r[1]],a[9],a[15]) > S(a[r[0]],a[r[1]],a[13],a[11]))
	{
		r[2] = 9;
		r[3] = 15;
	}
	else
	{
		r[2] = 13;
		r[3] = 11;	
	}
	//for 8
	if(S(a[r[0]],a[8],a[5],a[15]) > S(a[r[0]],a[8],a[13],a[7]))
	{
		if(S(a[r[0]],a[8],a[5],a[15]) > S(a[r[0]],a[r[1]],a[r[2]],a[r[3]]))
		{
			r[1] = 8;
			r[2] = 5;
			r[3] =15;
		}
	
	}
	else
	{
		if(S(a[r[0]],a[8],a[13],a[7]) > S(a[r[0]],a[r[1]],a[r[2]],a[r[3]]))
		{
			r[1] = 8;
			r[2] = 13;
			r[3] =7;
		}
	}
	
	//for 12
	if(S(a[r[0]],a[12],a[5],a[11]) > S(a[r[0]],a[12],a[9],a[7]))
	{
		if(S(a[r[0]],a[12],a[5],a[11]) > S(a[r[0]],a[r[1]],a[r[2]],a[r[3]]))
		{
			r[1] = 12;
			r[2] = 5;
			r[3] =11;
		}
	}
	else
	{
	
		if(S(a[r[0]],a[12],a[9],a[7]) > S(a[r[0]],a[r[1]],a[r[2]],a[r[3]]))
		{
			r[1] = 12;
			r[2] = 9;
			r[3] = 7;
		}
	}
	
}
void get_3(int* a,int* v)
{
	v[0] =3;
	int x = a[3];
	//for 4
	v[1] =4;
	if(S(a[v[0]],a[v[1]],a[9],a[14]) > S(a[v[0]],a[v[1]],a[13],a[10]))
	{
		v[2] = 9;
		v[3] = 14;
	}
	else
	{
		v[2] = 13;
		v[3] = 10;	
	}
	//for 8
	if(S(a[v[0]],a[8],a[5],a[14]) > S(a[v[0]],a[8],a[13],a[6]))
	{
		if(S(a[v[0]],a[8],a[5],a[14]) > S(a[v[0]],a[v[1]],a[v[2]],a[v[3]]))
		{
			v[1] = 8;
			v[2] = 5;
			v[3] =14;
		}
	
	}
	else
	{
		if(S(a[v[0]],a[8],a[13],a[6]) > S(a[v[0]],a[v[1]],a[v[2]],a[v[3]]))
		{
			v[1] = 8;
			v[2] = 13;
			v[3] =6;
		}
	}
	
	//for 12
	if(S(a[v[0]],a[12],a[5],a[10]) > S(a[v[0]],a[12],a[9],a[6]))
	{
		if(S(a[v[0]],a[12],a[5],a[10])  > S(a[v[0]],a[v[1]],a[v[2]],a[v[3]]))
		{
			v[1] = 12;
			v[2] = 5;
			v[3] =10;
		}
	}
	else
	{
	
		if(S(a[v[0]],a[12],a[9],a[6]) > S(a[v[0]],a[v[1]],a[v[2]],a[v[3]]))
		{
			v[1] = 12;
			v[2] = 9;
			v[3] = 6;
		}
	}
	
}

int main()
{
	long long int tol_sum = 0;
	int t;
	cin>>t;
	while(t--)
	{
		int a[16]={0};
		int n;
		cin>>n;
		while(n--)
		{
			char f;
			int ti;
			cin>>f;
			cin>>ti;
			int i = get_row(f);
			int j = get_col(ti);
			a[4*i+j]++;
		
		}
		/*for(int k=0;k<16;k++)
			cout<<a[k];
		cout<<endl;*/
		int r[4],s[4],t[4],v[4];
		get_0(a,t);
		get_1(a,s);
		get_2(a,r);
		get_3(a,v);
/*		for(int k =0;k<4;k++)
			cout<<t[k]<<" "<<s[k]<<" "<<r[k]<<" "<<v[k]<<endl;*/
		if(S(a[s[0]],a[s[1]],a[s[2]],a[s[3]])>S(a[t[0]],a[t[1]],a[t[2]],a[t[3]]))
		{
			t[0] = s[0];
			t[1] = s[1];
			t[2] = s[2];
			t[3] = s[3];
		}
		
		if(S(a[r[0]],a[r[1]],a[r[2]],a[r[3]])>S(a[t[0]],a[t[1]],a[t[2]],a[t[3]]))
		{
			t[0] = r[0];
			t[1] = r[1];
			t[2] = r[2];
			t[3] = r[3];
		}
		if(S(a[v[0]],a[v[1]],a[v[2]],a[v[3]])>S(a[t[0]],a[t[1]],a[t[2]],a[t[3]]))
		{
			t[0] = v[0];
			t[1] = v[1];
			t[2] = v[2];
			t[3] = v[3];
		}
/*		for(int k =0;k<4;k++)
			cout<<t[k]<<" ";
		cout<<endl;*/
		int val[4];
			
		for(int k =0;k<4;k++)
			val[k] = a[t[k]];
		sort(val,val+4);
		long long int sum =0;
		int money =25;
		for(int k=0;k<4;k++)
		{
			//cout<<val[k]<<endl;
			if(val[k] == 0)
				sum = sum-100;
			else
				{
				sum = sum+(val[k]*money);
				}
				money = money +25;
		}
		cout<<sum<<endl;
		tol_sum = tol_sum + sum;
	}
	cout<<tol_sum<<endl;
	return 0;
}


