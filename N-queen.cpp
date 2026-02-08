#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<vector<string>> ans;
vector<string> board;

bool isSafe(int row, int col, int n) {

    // check column
    for (int i = 0; i < row; i++) {
        if (board[i][col] == 'Q')
            return false;
    }

    // check left diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 'Q')
            return false;
    }

    // check right diagonal
    for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
        if (board[i][j] == 'Q')
            return false;
    }

    return true;
}

void solve(int row, int n) {

    if (row == n) {
        ans.push_back(board);
        return;
    }

    for (int col = 0; col < n; col++) {

        if (isSafe(row, col, n)) {

            board[row][col] = 'Q';
            solve(row + 1, n);
            board[row][col] = '.';
        }
    }
}

int main() {

    int n;   
    vector<string> boardTemp(n);
    string s = "";

    for (int i = 0; i < n; i++) {
        s.push_back('.');
    }

    for (int i = 0; i < n; i++) {
        boardTemp[i] = s;
    }

    board = boardTemp;

    solve(0, n);

    // print all solutions
    for (int i = 0; i < ans.size(); i++) {
        cout << "Solution " << i + 1 << endl;
        for (int j = 0; j < n; j++) {
            cout << ans[i][j] << endl;
        }
        cout << endl;
    }

    return 0;
}



for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
    if (board[i][j] == 'Q')
        return false;
}
//right

for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
    if (board[i][j] == 'Q')
        return false;
}
