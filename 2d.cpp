#include <iostream>
#include <vector>
#include <string>
using namespace std;

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

        bool found =
            f(i + 1, j, k + 1, board, word) ||
            f(i - 1, j, k + 1, board, word) ||
            f(i, j + 1, k + 1, board, word) ||
            f(i, j - 1, k + 1, board, word);

        board[i][j] = temp;
        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {

        if (board.empty() || board[0].empty())
            return false;

        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (f(i, j, 0, board, word))
                    return true;
            }
        }
        return false;
    }
};

int main() {
    vector<vector<char>> board = {
        {'A','B','C','E'},
        {'S','F','C','S'},
        {'A','D','E','E'}
    };

    string word = "ABCCED";

    Solution obj;
    cout << (obj.exist(board, word) ? "true" : "false") << endl;

    return 0;
}
