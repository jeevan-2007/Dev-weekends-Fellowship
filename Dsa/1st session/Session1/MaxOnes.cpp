class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int m_count=-1;
        vector<int>count;
        int co=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) co++;
            else if(nums[i]==0){
                count.push_back(co);
                co=0;
            }
        }
        count.push_back(co);
        for(int i=0;i<count.size();i++){
            if(m_count<count[i]){
                int temp=m_count;
                m_count=count[i];
            }
        }
        return m_count;
    }
};
