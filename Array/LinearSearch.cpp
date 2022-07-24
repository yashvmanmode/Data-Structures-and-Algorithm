/* Code for Linear Search */
/* Time Complexity: O(n) */
/* Space Complexity: O(1) */

#include <iostream>
using namespace std;

int LinearSearch(int &arr, int n, int key) {

    for (int i=0; i<n; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main() {

    int n;
    cin >> n;

    int arr[100];
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    LinearSearch(arr, n, key);

    return 0;
}