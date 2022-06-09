/*
Given a Binary Tree. Find the Zig-Zag Level Order Traversal of the Binary Tree.

 

Example 1:

Input:
        3
      /   \
     2     1
Output:
3 1 2
Example 2:

Input:
           7
        /     \
       9       7
     /  \     /   
    8    8   6     
   /  \
  10   9 
Output:
7 7 9 8 8 6 9 10 
 

Your Task:
You don't need to read input or print anything. Your task is to complete the function zigZagTraversal() which takes the root node of the Binary Tree as its input and returns a list containing the node values as they appear in the Zig-Zag Level-Order Traversal of the Tree.

 

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

 

Constraints:
1 <= N <= 104

 */


//CODE

class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	vector<int>ans;
    	if(root==NULL)
    	{
    	    return ans;
    	}
    	queue<Node*>q;
    	q.push(root);
    	int count=0;
while(!q.empty())
{
    	vector<int>v;
    	int size=q.size();
    	for(int i=0;i<size;i++)
    	{
    	    Node*curr=q.front();
    	    q.pop();
    	    v.push_back(curr->data);
    	    if(curr->left!=NULL) q.push(curr->left);
    	    if(curr->right!=NULL) q.push(curr->right);
    	}
    	if(count%2==0)
    	{
    	    for(int x:v)
    	    {
    	        ans.push_back(x);
    	    }
    	}
    	if(count%2!=0)
    	{
    	    reverse(v.begin(),v.end());
    	    for(int x:v)
    	    {
    	        ans.push_back(x);
    	    }
    	}
    	count++;
    }
    return ans;
    
    }
};
