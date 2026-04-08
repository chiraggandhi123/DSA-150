class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.size()-1;
        bool valid = true;
        while(l < r){
            while( l < r && !isalnum(s[l])){
                l++;
            }

            while( l < r && !isalnum(s[r])){
                r--;
            }
            cout<<l<<" "<<r<<endl;
            if((char)tolower(s[l]) == (char)tolower(s[r])){
                l++;
                r--;
            }
            else{
                valid = false;
                break;
            }
        }
        return valid;
    }
};
