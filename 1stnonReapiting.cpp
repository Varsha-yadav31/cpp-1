#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;

string firstNonRepeating(string s) {
    vector<int> freq(26, 0);
    queue<char> q;
    string ans = "";

    for (int i = 0; i < s.size(); i++) {
        char ch = s[i];
        freq[ch - 'a']++;
        q.push(ch);

        while (!q.empty() && freq[q.front() - 'a'] > 1) {
            q.pop();
        }

        if (q.empty())
            ans += '#';
        else
            ans += q.front();
    }

    return ans;
}

int main() {
    string s = "aabc";
    cout << firstNonRepeating(s) << endl;
    return 0;
}
