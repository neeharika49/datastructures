/*Given the root of a binary tree, return the postorder traversal of its nodes' values.

 

Example 1:


Input: root = [1,null,2,3]
Output: [3,2,1]
Example 2:

Input: root = []
Output: []
Example 3:

Input: root = [1]
Output: [1]
 

Constraints:

The number of the nodes in the tree is in the range [0, 100].
-100 <= Node.val <= 100
*/

//code
class Solution {
public:
    vector<int>v;
    void post(TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
        post(root->left);
        post(root->right);
        v.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        post(root);
        vector<int>res=v;
        v.clear();
        return res;
    }
};
