class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()==goal.length()){
            string combined = s+s;
            return combined.find(goal)!=string::npos;
        }
        else
        return false;
    }
};
