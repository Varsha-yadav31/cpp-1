class Solution {
    public:
    
        bool f(int i, int j, int k,
               vector<vector<char>>& board,
               string& word) {
    
            if (k == word.size())
                return true;
    
            if (i < 0 || j < 0 ||
                i >= board.size() || j >= board[0].size() ||
                board[i][j] != word[k])
                return false;
    
            char temp = board[i][j];
            board[i][j] = '*';
            
            if(f(i+1,j, k+1, board,word))
                return true;
            if(f(i-1, j, k+1, board, word))
                return true;
            if(f(j+1 , i , k+1, board , word))
                return true;
            if(f(j-1 , i , k+1 , borad , word))
                return true;
    
            board[i][j] = temp
            return false;
    
        }
    
        bool exist(vector<vector<char>>& board, string word) {
    
            int m = board.size();
            int n = board[0].size();
            
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
    
                    if (f(i, j, 0, board, word)) {
                     return true;
                    }
                }
            }
            return false;
        }
    };
    