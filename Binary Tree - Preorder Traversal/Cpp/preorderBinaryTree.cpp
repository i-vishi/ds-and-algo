/* 	Author:		Vishal Gaur
* 	Created:	06-28-2021  10:33:12
*/

#include <bits/stdc++.h>

using namespace std;

// Binary Tree Node
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// function to get Preorder Traversal of Binary Tree
vector<int> getPreorderTranversal(TreeNode *root)
{
    vector<int> ans;
    stack<TreeNode *> st;
    TreeNode *tmp = root;
    while (tmp != NULL || !st.empty())
    {
        if (tmp != NULL)
        {
            ans.push_back(tmp->val);
            if (tmp->right != NULL)
            {
                st.push(tmp->right);
            }
            tmp = tmp->left;
        }
        else
        {
            tmp = st.top();
            st.pop();
        }
    }
    return ans;
}


// main function to test above function

int main()
{
    TreeNode root = TreeNode(1), n2 = TreeNode(2), n3 = TreeNode(3), n4 = TreeNode(4);
    root.left = &n2;
    root.right = &n3;
    n3.left = &n4;

    vector<int> res = getPreorderTranversal(&root);
    cout << "Preorder is : ";
    for (auto i : res)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
