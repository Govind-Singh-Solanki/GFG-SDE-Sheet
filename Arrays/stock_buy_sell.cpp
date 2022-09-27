#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lsf = INT_MAX;
        int totalProfit = 0;
        int currProfit = 0;
        
        for(int i = 0; i < prices.size(); i++)
        {
            if(prices[i] < lsf)
                lsf = prices[i];
            
            currProfit = prices[i] - lsf;
            if(totalProfit < currProfit)
                totalProfit = currProfit;
        }
        return totalProfit;
    }
};

int main()
{
    Solution sol;
    vector<int> prices;
    int n;
    cout<<"Enter size of Vector : "<<endl;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        prices.push_back(x);
    }

    int maxProf = sol.maxProfit(prices);

    cout<<"Maximum Profit that can be achieved is : "<<maxProf<<endl;

    return 0;
}