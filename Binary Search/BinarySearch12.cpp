/*Given a sorted array consisting 0’s and 1’s. The task is to find the index of first ‘1’ in the given array.

 

Example 1:

Input : 
arr[] = {0, 0, 0, 0, 0, 0, 1, 1, 1, 1}
Output : 
6
Explanation:
The index of first 1 in the array is 6.


Example 2:
Input : 
arr[] = {0, 0, 0, 0}
Output : 
-1
Explanation:
1's are not present in the array.
 
 
Your Task:  
You don't need to read input or print anything. Your task is to complete the function firstIndex() which takes the array A[] and its size N as inputs and returns the index of first 1. If 1 is not present in the array then return -1.


Expected Time Complexity: O(Log (N))
Expected Auxiliary Space: O(1)

 

Constraints:
1 ≤ N ≤ 106
0 ≤ Ai ≤ 1
*/



//CODE:

 int firstIndex(int a[], int n) 
    {
        // Your code goes here
        int s=0;
        int e=n-1;
        int f_oc=-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(a[mid]==1)
            {
                f_oc=mid;
                e=mid-1;
            }
            else if(a[mid]<1)
            {
                s=mid+1;
            }
        }
        return f_oc;
    }
}
