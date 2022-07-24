https://youtu.be/oVa8DfUDKTw

/*

You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-decreasing order. You have to find the intersection of these two arrays.

Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.

NOTE:

1. The length of each array is greater than zero.
2. Both the arrays are sorted in non-decreasing order.
3. The output should be in the order of elements that occur in the original arrays.
4. If there is no intersection present then return an empty array.

*/
//bruteforce approch
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int> ans;
    
	for (int i=0; i<n; i++) {
        
        int element = arr1[i];
        for (int j=0; j<m; j++) {
            
            if (element == arr2[j]){
                ans.push_back(element);
                arr2[j] = -9999999999;
                break;
            }
        }
    }
    return ans;
}// Time Complexity = O(n^2)



//optimised approch
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    int i=0, j=0;
    vector<int> ans;
    
    while (i<n && j<m) {
        
        if (arr1[i] == arr2[j]){
            
            ans.push_back(arr1[i]);
            i++; j++;
        }
        
        else if (arr1[i] < arr2[j])
            i++;
        
        else
            j++;
    }
    
    return ans;
}//Time Complexity = O(n*m)