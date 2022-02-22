/*Given a sorted array of size N and an integer K, find the position at which K is present in the array using binary search.


Example 1:

Input:
N = 5
arr[] = {1 2 3 4 5} 
K = 4
Output: 3
Explanation: 4 appears at index 3.

Example 2:

Input:
N = 5
arr[] = {11 22 33 44 55} 
K = 445
Output: -1
Explanation: 445 is not present.*/



//CODE:
int binarysearch(int arr[], int n, int k){
        // code here
        int s=0;
        int e=n-1;
        while(s<=e)
        {
            int mid=(s+e)/2;
            if(arr[mid]==k)
            {
                return mid;
            }
            else if(arr[mid]>k)
            {
                e=mid-1;
            }
            else
            {
            s=mid+1;
            }
        }
        return -1;
    }
