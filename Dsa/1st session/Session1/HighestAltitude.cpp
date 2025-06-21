class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int current=0;
        int mx=0;
        for(int i=0;i<gain.size();i++){
            current+=gain[i];
            mx=max(mx,current);
        }
        return mx;
    }
};
