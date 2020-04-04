int Solution::maxSubArray(const vector<int> &A) {
    
    int  n = A.size();
    int i;
    int max_at_i = A[0];
    int best_max = A[0];
    for(i=1;i<n;i++)
    {
        max_at_i = max(max_at_i+A[i],A[i]);
        if(max_at_i > best_max)
            best_max = max_at_i;
    }
    return best_max;
}
