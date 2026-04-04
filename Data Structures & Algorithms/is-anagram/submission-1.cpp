class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int>mp;
        for(auto c: s){
            mp[c]++;
        }

        bool valid = true;
        for(auto c: t){
            if(!mp[c]) valid = false;
            mp[c]--;
        }
        for(auto v: mp){
            if(v.second > 0){
                valid = false;
            }
        }
        return valid;
    }
};
