//Given a rows x cols binary matrix filled with 0's and 1's, find the largest rectangle containing only 1's and return its area.

 

//Example 1:


//Input: matrix = [["1","0","1","0","0"],["1","0","1","1","1"],["1","1","1","1","1"],["1","0","0","1","0"]]
//Output: 6
//Explanation: The maximal rectangle is shown in the above picture.
//Example 2:

//Input: matrix = [["0"]]
//Output: 0
//Example 3:

//Input: matrix = [["1"]]
//Output: 1
 

//Constraints:

//rows == matrix.length
//cols == matrix[i].length
//1 <= row, cols <= 200
//matrix[i][j] is '0' or '1'.
 //CODE:
int MAH(vector<int>v)
    {
        stack<pair<int,int>>s1,s2;
        vector<int>left,right;
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        if(s1.size()==0)
        {
            left.push_back(-1);
        }
        else if(s1.size()>0 && v[i]>s1.top().first)
    
        {
            left.push_back(s1.top().second);
        }
        else if(s1.size()>0 && v[i]<=s1.top().first)
        {
            while(!s1.empty() && v[i]<=s1.top().first)
            {
                s1.pop();
            }
            if(s1.size()==0)
            {
             left.push_back(-1);   
             }
            else
                left.push_back(s1.top().second);
        }
        s1.push({v[i],i});
    }
    for(int i=n-1;i>=0;i--)
    {
        if(s2.size()==0)
        {
            right.push_back(n);
        }
        else if(s2.size()>0 && v[i]>s2.top().first)
    
        {
         right.push_back(s2.top().second);
        }
        else if(s2.size()>0 && v[i]<=s2.top().first)
        {
            while(!s2.empty() && v[i]<=s2.top().first)
            {
                s2.pop();
            }
            if(s2.size()==0)
            {
             right.push_back(n);   
             }
            else
                right.push_back(s2.top().second);
        }
        s2.push({v[i],i});
    }
    reverse(right.begin(),right.end());
    int ans=INT_MIN;
     for(int i=0;i<n;i++)
     {
        ans = max(ans, (right[i]-left[i]-1)*v[i]); 
     }
        
    return ans;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.size()==0)
        {
            return 0;
        }
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int>v(n,0);
        int ans1=-1e9;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]=='0')
                {
                    v[j]=0;
                }
                else
                    v[j]++;
            }
            ans1=max(ans1,MAH(v));
        }
        return ans1;
    }
