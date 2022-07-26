#include <iostream>
using namespace std;

int FindPivot(int arr[], int size) {

    int start = 0;
    int end = size-1;

    int mid = start + (end - start)/2;

    while (start < end) {

        if (arr[mid] >= arr[0])
            start = mid-1;

        else
            end = mid;

        mid = start + (end - start)/2;
    }
    return start;
}

int main() {

    int size;
    cout << "enter size: " ;
    cin >> size;

    int arr[100];
    cout << "Enter array element" ;
    for (int i=0; i<size; i++) {
        cin >> arr[i];
    }

    cout << "the pivot element is ";
    cout << FindPivot(arr, size);


    return 0;
}