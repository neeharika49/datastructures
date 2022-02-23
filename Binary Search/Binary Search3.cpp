/*Given a sorted array Arr of size N and a number X, you need to find the number of occurrences of X in Arr.

Example 1:

Input:
N = 7, X = 2
Arr[] = {1, 1, 2, 2, 2, 2, 3}
Output: 4
Explanation: 2 occurs 4 times in the
given array.
Example 2:

Input:
N = 7, X = 4
Arr[] = {1, 1, 2, 2, 2, 2, 3}
Output: 0
Explanation: 4 is not present in the
given array.*/

//CODE
int count(int arr[], int n, int x) {
	    // code here
	    int s=0;
	    int e=n-1;
	    int fO=-1;
	    int lO=-1;
	    int count1=0;
	    while(s<=e)
	    {
	        int mid= s+((e-s)/2);
	        if(arr[mid]==x)
	        {
	            fO=mid;
	            e=mid-1;
	        }
	        else if(arr[mid]<x)
	        {
	            s=mid+1;
	        }
	        else
	         e=mid-1;
	    }
	     s=0;
	    e=n-1;
	    while(s<=e)
	    {
	        int mid= s+((e-s)/2);
	        if(arr[mid]==x)
	        {
	            lO=mid;
	            s=mid+1;
	        }
	        else if(arr[mid]<x)
	        {
	            s=mid+1;
	        }
	        else
	         e=mid-1;
	    }
	    if(lO==-1||fO==-1)
	    {
	        count1=0;
	    }
	    else
	      count1= lO-fO+1;
	   return count1;
	}
