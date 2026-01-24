class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
       int mn=prices[0];
       int p=0;
        for(int i=0; i<n; i++)
        {
            int d=prices[i]-mn;
            p=max(p,d);
            mn=min(mn, prices[i]);
        }
        return p;
    }
};