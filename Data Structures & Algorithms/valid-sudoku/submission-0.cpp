class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, vector<int>>mpr;
        unordered_map<int, vector<int>>mpc;


     
        bool valid = true;
        for(int i = 0; i < board.size(); i++){
            unordered_set<char>setR;
            unordered_set<char>setC;

            for(int j = 0; j < board[0].size();j++){
                if(board[i][j]!='.'){
                    if(setR.find(board[i][j]) != setR.end()) return false;
                    else setR.insert(board[i][j]);
                }
                if(board[j][i]!='.'){
                    if(setC.find(board[j][i]) != setC.end()) return false;
                    else setC.insert(board[j][i]);;
                }
            }
            for(int box = 0; box < 9; box++) {
                unordered_set<char> s;

                int startRow = (box / 3) * 3;//0,1,2 => 0; 3,4,5 =>2 ...
                int startCol = (box % 3) * 3;

                for(int i = 0; i < 3; i++) {
                    for(int j = 0; j < 3; j++) {
                        char val = board[startRow + i][startCol + j];

                        if(val == '.') continue;

                        if(s.count(val)) return false;

                        s.insert(val);
                    }
                }
            }
        }
        return valid;
    }
};
