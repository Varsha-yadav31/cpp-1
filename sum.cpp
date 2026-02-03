#include<iostream>
using namespace std;

void sumAndProduct(int arr[], int n) {
    int sum = 0;
    int product = 1;

    for(int i = 0; i < n; i++) {
        sum += arr[i];
        product *= arr[i];
    }

    cout << "Sum = " << sum << endl;
    cout << "Product = " << product << endl;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sumAndProduct(arr, n);
    return 0;
}
