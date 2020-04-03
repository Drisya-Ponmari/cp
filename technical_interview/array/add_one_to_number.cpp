//Asked bu google and microsoft

vector<int> Solution::plusOne(vector<int> &A) {
    int n = A.size();
    
    int i;
    int add = 1;
    vector<int> v;
    for(i=n-1;i>=0;i--)
    {
        if(A[i] == 9 and add == 1)
        {
            v.push_back(0);
        }
        else if (add == 1)
            {
                v.push_back(A[i]+1);
                add = 0;
            }
        else 
        {
             v.push_back(A[i]);
        }   
        
    }
    
    if(add == 1)
        v.push_back(1);
    
    n = v.size();
    int f=-1;
    for(i=n-1;i>=0;i--)
    {
        //cout<<v[i]<<endl;
        if(v[i]!=0)
        {
            f = 1;
            break;
        }
        if(v[i] == 0 and f == -1)
            v[i] = -1;
    }
    vector<int>result;
    
    for(i=n-1;i>=0;i--)
    {
        if(v[i] !=  -1)
            result.push_back(v[i]);
    }
    return result;
}

