/*An element is called a peak element if its value is not smaller than the value of its adjacent elements(if they exists).
Given an array arr[] of size N, find the index of any one of its peak elements.
Note: The generated output will always be 1 if the index that you return is correct. Otherwise output will be 0. 


Example 1:

Input:
N = 3
arr[] = {1,2,3}
Output: 2
Explanation: index 2 is 3.
It is the peak element as it is 
greater than its neighbour 2.
Example 2:

Input:
N = 2
arr[] = {3,4}
Output: 1
Explanation: 4 (at index 1) is the 
peak element as it is greater than 
its only neighbour element 3.*/


//CODE:
int peakElement(int arr[], int n)
{
   // Your code here
   if(n==1)
   {
       return 0;
   }
   int s=0;
   int e=n-1;
   while(s<=e)
   {
       int mid=s+((e-s)/2);
       if(mid>0 && mid<n-1)
       {
           if(arr[mid]>arr[mid-1]&& arr[mid]>arr[mid+1])
           {
               return mid;
           }
           else if(arr[mid-1]>=arr[mid])
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
               return 0;
           }
           else 
           return 1;
       }
       else if(mid==n-1)
       {
           if(arr[n-1]>arr[n-2])
           {
               return n-1;
           }
           else 
           return n-2;
       }
   }
   return -1;
}
