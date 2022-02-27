/*There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
Example 2:

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
Example 3:

Input: nums = [1], target = 0
Output: -1*/


//CODE:

 int binary_search(vector<int>nums,int s,int e,int x)
    {
        
        while(s<=e)
        {
            int mid=(s+e)/2;
            if(nums[mid]==x)
            {
                return mid;
            }
            else if(nums[mid]>x)
            {
                e=mid-1;
            }
            else if(nums[mid]<x)
            {
                s=mid+1;
            }
               
        }
        return -1;
    }
    int min_indx(vector<int>arr) {
	    int n=arr.size();
	    // code here
	    int s=0;
	    int e=n-1;
	    while(s<=e)
	    {
	        int mid=s+((e-s)/2);
	        int next=(mid+1)%n;
	        int prev=(mid-1+n)%n;
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
	    return -1;
	}
    
    int search(vector<int>& nums, int target) {
        int indx=min_indx(nums);
        int n=nums.size();
         int res1=binary_search(nums,0,indx-1,target);
        int res2=binary_search(nums,indx,n-1,target);
        if(res1!=-1)
            return res1;
        else if(res2!=-1)
            return res2;
        else    
        return -1;
        
        
    }
