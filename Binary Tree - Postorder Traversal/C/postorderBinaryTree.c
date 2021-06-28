/* 	Author:		Vishal Gaur
* 	Created:	06-28-2021  11:45:14
*/

#include <stdio.h>
#include <stdlib.h>

// Binary Tree Node
typedef struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

// function to get a new tree node
TreeNode *newNode(int val)
{
    TreeNode *node = (TreeNode *)malloc(sizeof(TreeNode));
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// function to get postorder traversal of binary tree
void getPostorderTraversal(TreeNode *root, int *ans, int *pos)
{
    if (root == NULL)
        return;

    getPostorderTraversal(root->left, ans, pos);
    getPostorderTraversal(root->right, ans, pos);
    ans[*pos] = root->val;
    (*pos)++;
}

// main function to test above function

int main()
{
    TreeNode *root = newNode(1);
    TreeNode *n2 = newNode(23);
    TreeNode *n3 = newNode(13);
    TreeNode *n4 = newNode(44);
    root->left = n2;
    root->right = n3;
    n2->right = n4;

    int *res;
    int pos = 0;
    getPostorderTraversal(root, res, &pos);
    printf("Postorder is : ");
    for (int i = 0; i < pos; i++)
    {
        printf("%d ", res[i]);
    }
    printf("\n");
    return 0;
}
