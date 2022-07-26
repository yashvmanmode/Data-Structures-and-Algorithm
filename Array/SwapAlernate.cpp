#include <iostream>
using namespace std;

int SwapAlternate(int& arr, int size) {

    for (int i=0; i<size; i+=2) {  //i+=2 for moving 2 step forward
        if (i+1 < size)
            swap(arr[i], arr[i+1]);
    }
}

int PrintArray(int& arr, int size) {

    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }cout << endl;
}

int main() {

    int size;
    cin >> size;

    int arr[100];
    for (int i=0; i<size; i++)
        cin >> arr[i];

    SwapAlternate(arr, size);
    PrintArray(arr, size);

    return 0;
}

//Time Complexity = O(n)
//Space Complexity = O(1)