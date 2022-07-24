#include <iostream>
#include <cmath>               
using namespace std;

int main() {

    int n; cin >> n;
    int arr[100];
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
 
    int Max = INT_MIN, Min = INT_MAX; 
    for (int i=0; i<n; i++) {
        Max = max(Max, arr[i]);
        Min = min(Min, arr[i]);
    }
    
    cout << "The Max Element is " << Max << endl;
    cout << "The Min Element is " << Min << endl;
    
}