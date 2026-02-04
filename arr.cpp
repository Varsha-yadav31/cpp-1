// #include <iostream>
// using namespace std;

// int main() {
//     int nums[] = {5, 15, 22, 1, -15, -24};
//     int size = 6;

//     int smallest = INT_MAX;
//     int largest = INT_MIN;

//     for(int i = 0; i < size; i++) {
//         smallest = min(nums[i], smallest);
//         largest = max(nums[i], largest);
//     }

//     cout << "smallest = " << smallest << endl;
//     cout << "largest = " << largest << endl;

//     return 0;
// }
// if we have to print the index of an min arr
#include <iostream>
using namespace std;

int main() {
    int nums[] = {5, 15, 22, 1, -15, -24};
    int size = 6;

    int minIndex = 0;   // assume first element is smallest

    for (int i = 1; i < size; i++) {
        if (nums[i] < nums[minIndex]) {
            minIndex = i;
        }
    }

    cout << "Index of smallest element = " << minIndex << endl;
    cout << "Smallest element = " << nums[minIndex] << endl;

    return 0;
}
