class Solution {
    public:
        
        void fun(int i, int t, int sum,
                 vector<int>& temp,
                 vector<vector<int>>& ans,
                 vector<int>& can) {
    
            if (sum == t) {
                ans.push_back(temp);
                return;
            }
            if (sum > t || i == can.size())
                return;
    
        
            fun(i + 1, t, sum, temp, ans, can);
    
            temp.push_back(can[i]);
            fun(i, t, sum + can[i], temp, ans, can);
            temp.pop_back();
        }
    
        vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
            vector<vector<int>> ans;
            vector<int> temp;
    
            fun(0, target, 0, temp, ans, candidates);
            return ans;
        }
    };
    