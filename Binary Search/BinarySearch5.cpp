/*Given an ascending sorted rotated array Arr of distinct integers of size N. The array is right rotated K times. Find the value of K.

Example 1:

Input:
N = 5
Arr[] = {5, 1, 2, 3, 4}
Output: 1
Explanation: The given array is 5 1 2 3 4. 
The original sorted array is 1 2 3 4 5. 
We can see that the array was rotated 
1 times to the right.
Example 2:

Input:
N = 5
Arr[] = {1, 2, 3, 4, 5}
Output: 0
Explanation: The given array is not rotated.*/


//CODE:
int findKRotation(int arr[], int n) {
	    
	    // code here
	    int s=0;
	    int e=n-1;
	    while(s<=e)
	    {
	        int mid=s+((e-s)/2);
	        int next=(mid+1)%n;
	        int prev=(mid+n-1)%n;
	        if(arr[mid]<=arr[prev] && arr[mid]<=arr[next])
	        {
	            return mid;
	        }
	         else if(arr[e]>=arr[mid])
	        {
	            e=mid-1;
	        }
	        else if(arr[s]<=arr[mid])
	        {
	            s=mid+1;
	        }
	        
	        
	    }
	    return 0;
	}
