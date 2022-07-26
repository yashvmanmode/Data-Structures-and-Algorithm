/*

Problem Statement

Bubble Sort is one of the sorting algorithms that works by repeatedly swapping the adjacent elements of the array if they are not in sorted order.

You are given an unsorted array consisting of N non-negative integers. Your task is to sort the array in non-decreasing order using the Bubble Sort algorithm.


time complexity = O(n^2)/ Best case = O(n)
space complexity = O(1)
*/

//optimised approch

void bubbleSort(vector<int>& arr, int n)
{   
    for (int i=1; i<n; i++) {
        
        for (int j=0; j<n-i; j++) {
            
            if (arr[j] > arr[j+1])
                    swap(arr[j], arr[j+1]);
        }
    }
}





