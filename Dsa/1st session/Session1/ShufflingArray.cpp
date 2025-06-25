class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>Y;
        vector<int>X;
        for(int i=0;i<2*n;i++){
            if(i<n)
            X.push_back(nums[i]);
            else
            Y.push_back(nums[i]);
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            ans.push_back(X[i]);
            ans.push_back(Y[i]);
        }
        return ans;
    }
};
