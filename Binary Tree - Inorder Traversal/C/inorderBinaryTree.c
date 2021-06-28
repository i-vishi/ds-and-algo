/* 	Author:		Vishal Gaur
* 	Created:	06-28-2021  11:05:28
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

// function to get inorder traversal of binary tree
void getInorderTraversal(TreeNode *root, int *ans, int *pos)
{
    if (root == NULL)
        return;

    getInorderTraversal(root->left, ans, pos);
    ans[*pos] = root->val;
    (*pos)++;
    getInorderTraversal(root->right, ans, pos);
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

    int *res = malloc(100 * sizeof(int));
    int pos = 0;
    getInorderTraversal(root, res, &pos);
    printf("Inorder is : ");
    for (int i = 0; i < pos; i++)
    {
        printf("%d ", res[i]);
    }
    printf("\n");
    return 0;
}
