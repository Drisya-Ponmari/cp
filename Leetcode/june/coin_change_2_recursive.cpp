class Solution {
public:
    int Coinchange(int amount,int n,vector<int>& coins)
    {
        if(n==0)
            return 0;
        else if(amount ==0)
            return 1;
        else if(amount < 0)
            return 0;
        return Coinchange(amount-coins[n-1],n,coins)+Coinchange(amount,n-1,coins); 
    }
    int change(int amount, vector<int>& coins) {
        
        int n = coins.size();
       if(amount ==0)
            return 1;
        return Coinchange(amount,n,coins);
    }
};
