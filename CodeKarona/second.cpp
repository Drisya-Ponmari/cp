#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int Find(string& s,long int st,long int e)
{
    long int i=st;
    long int j=e;
    while(j>=i)
    {
      //  cout<<s[i]<<" "<<s[j]<<endl;
        if(tolower(s[i])!= tolower(s[j]))
            return 0;
        i++;
        j--;
        
    }
    return 1;
}

int main()
{
    // Write your code here

    long int n;
    string s;
    cin>>n;
    cin>>s;
    if(n<10)
        cout<<0<<endl;
    else
    {
        long int count =0;
        for(long int i=0;i<n;i++)
        {
            if(i+9 < n)
                count = count + Find(s,i,i+9);
            else
                break;
            
        }
        cout<<count<<endl;
    }
    
    return 0;
}

