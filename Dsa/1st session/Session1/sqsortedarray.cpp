class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++) {
            ans.push_back(nums[i] * nums[i]);
        }
        for(int i = 0; i < ans.size(); i++) {
            for(int j = i + 1; j < ans.size(); j++) {
                if(ans[i] > ans[j]) {
                    int temp = ans[i];
                    ans[i] = ans[j];
                    ans[j] = temp;
                }
            }
        }

        return ans;
    }
};
