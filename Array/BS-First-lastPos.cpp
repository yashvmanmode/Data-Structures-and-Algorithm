//Time Complexity = O(logn) + O(logn) = O(logn)  

#include<iostream>
using namespace std;

int FirstOccure(int arr[], int size, int target) {

    int start = 0;
    int end = size-1;

    int mid = (start + (end - start)/2 );
    int firstOccurence = -1;

    while (start <= end) {

        if (arr[mid] == target) {

            firstOccurence = mid;
            end = mid-1;
        }
        else if (target > arr[mid]) {
            start = mid+1;
        }
        else{ 
            end = mid-1;
        }

        mid = (start + (end - start)/2 );
    }

    return firstOccurence;
}


int LastOccure(int arr[], int size, int target) {

    int start = 0;
    int end = size-1;

    int mid = (start + (end - start)/2 );
    int LastOccurence = -1;

    while (start <= end) {

        if (arr[mid] == target) {

            LastOccurence = mid;
            start = mid+1;
        }
        else if (target > arr[mid]) {
            start = mid+1;
        }
        else{ 
            end = mid-1;
        }

        mid = (start + (end - start)/2 );
    }

    return LastOccurence;
}

int main() {

    int size;
    cin >> size;

    int arr[100];
    for (int i=0; i<size; i++)
        cin >> arr[i];

    int target;
    cin >> target;

    cout << FirstOccure(arr, size, target) << " ";
    cout << LastOccure(arr, size, target) << " ";

    return 0;
}