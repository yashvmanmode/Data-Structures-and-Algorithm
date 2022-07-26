//Tine Complexity: O(logn)

#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key) {

    int start = 0;
    int end = size-1;

    int mid = (start + (end - start)/2);

    while (start <= end) {

        if (arr[mid] == key)
            return mid;

        else if (key > arr[mid])
            start = mid+1;

        else
            end = mid-1;

        mid = (start + (end - start)/2);
    }

    return -1;
}

int main() {

    int size;
    cin >> size;

    int arr[100];
    for (int i=0; i<size; i++) {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    cout << BinarySearch(arr, size, key) << endl;
    return 0; 
}