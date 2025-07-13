class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged;
        int l1=word1.length();
        int l2=word2.length();
        int i=0,j=0;
        while(i<l1||j<l2){
            if(i<l1)merged+=word1[i++];
            if(j<l2)merged+=word2[j++];
        }
        return merged;
    }
};
