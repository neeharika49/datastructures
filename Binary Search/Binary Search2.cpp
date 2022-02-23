/*Given a sorted array having N elements, find the indices of the first and last occurrences of an element X in the given array.

Note: If the number X is not found in the array, return '-1' as an array.

Example 1:

Input:
N = 4 , X = 3
arr[] = { 1, 3, 3, 4 }
Output:
1 2
Explanation:
For the above array, first occurence
of X = 3 is at index = 1 and last
occurence is at index = 2.
Example 2:

Input:
N = 4, X = 5
arr[] = { 1, 2, 3, 4 }
Output:
-1
Explanation: 
As 5 is not present in the array,
so the answer is -1.*/


//CODE:
vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        // Code here
        int s=0;
        int e=n-1;
        int f_res=-1;
        int l_res=-1;
        vector<int>v;
        while(s<=e)
        {
            int mid=s+((e-s)/2);
            if(x==arr[mid])
            {
                f_res=mid;
                e=mid-1;
            }
            else if(x>arr[mid])
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
            int mid=s+((e-s)/2);
            if(x==arr[mid])
            {
                l_res=mid;
                s=mid+1;
            }
            else if(x>arr[mid])
            {
                s=mid+1;
            }
            else
            e=mid-1;
        }
        if(f_res!=-1 || l_res!=-1)
        {
        v.push_back(f_res);
        v.push_back(l_res);
        }
        else
        v.push_back(-1);
    return v;
    }
