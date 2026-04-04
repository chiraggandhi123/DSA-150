class Solution {
public:

    vector<int> getCnt(string &a){
        vector<int>cnt(26, 0);
        for(auto it: a){
            cnt[it - 'a']++;
        }
        return cnt;
    }
    bool isAnagram(string s, string t) {
        auto cntS = getCnt(s);
        auto cntT = getCnt(t);

        for(int i = 0; i < 26; i++){
            if(cntS != cntT){
                return false;
            }
        }
        return true;
    }
};
