#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long k = 0, sum = 0;
        while (sum < n) {
            k++;
            sum = k * (9LL * k - 7) / 2;
        }
        cout << k << endl;
    }
    return 0;
}
