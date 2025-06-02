// Last updated: 01/06/2025, 22:26:53
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int acc_n = accounts[0].size();
        int cust_n = accounts.size();
        int max=0;
        for (auto i = 0; i < cust_n; i++) {
            int sum = 0;
            for (auto j = 0; j < acc_n; j++) {
                sum += accounts[i][j];
            }
            if(sum>max) max = sum;
        }
        return max;
    }
};