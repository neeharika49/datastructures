/*Given an array arr of n elements which is first increasing and then may be decreasing, find the maximum element in the array.
Note: If the array is increasing then just print then last element will be the maximum value.

Example 1:

Input: 
n = 9
arr[] = {1,15,25,45,42,21,17,12,11}
Output: 45
Explanation: Maximum element is 45.
Example 2:

Input: 
n = 5
arr[] = {1, 45, 47, 50, 5}
Output: 50
Explanation: Maximum element is 50.
Your Task:  
You don't need to read input or print anything. Your task is to complete the function findMaximum() which takes the array arr[], and n as parameters and returns an integer denoting the answer.

Expected Time Complexity: O(logn)
Expected Auxiliary Space: O(1)

Constraints:
3 ≤ n ≤ 106
1 ≤ arri ≤ 106
*/


//CODE:


int findMaximum(int arr[], int n) {
	    if(n==0)
	    {
	        return arr[0];
	    }
	    // code here
	    int s=0;
	    int e=n-1;
	   while(s<=e)
	   {
	       int mid=s+(e-s)/2;
	       if(mid>0 && mid<n-1)
	       {
	           if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
	           {
	             return arr[mid];
	           }
	           else if(arr[mid-1]>arr[mid])
	           {
	               e=mid-1;
	           }
	           else
	              {
	                  s=mid+1;
	              }
	       }
	       else if(mid==0)
	       {
	           if(arr[0]>arr[1])
	           {
	               return arr[0];
	           }
	           else
	           {
	               return arr[1];
	           }
	       }
	       else if(mid==n-1)
	       {
	           if(arr[n-1]>arr[n-2])
	           {
	               return arr[n-1];
	           }
	           else
	           return arr[n-2];
	       }
	   }
	}
