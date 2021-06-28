/* 	Author:		Vishal Gaur
* 	Created:	06-28-2021  10:55:21
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

// function to get Inorder Traversal of Binary Tree
vector<int> getInorderTranversal(TreeNode *root)
{
    vector<int> ans;
    stack<TreeNode *> st;
    TreeNode *tmp = root;

    while (tmp != NULL || !st.empty())
    {
        if (tmp != NULL)
        {
            st.push(tmp);
            tmp = tmp->left;
        }
        else
        {
            tmp = st.top();
            ans.push_back(tmp->val);
            st.pop();
            tmp = tmp->right;
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

    vector<int> res = getInorderTranversal(&root);
    cout << "Inorder is : ";
    for (auto i : res)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
