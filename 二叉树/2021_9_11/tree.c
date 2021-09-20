#include"tree.h"

BTNode* BTNodeInit(BTDataType x)
{
	BTNode* root = (BTNode*)malloc(sizeof(BTNode));
	root->data = x;
	root->left = root->right = NULL;
	return root;
}

// ǰ�� ���� �������
void PrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		return;
	}
	printf("%c ", root->data);
	PrevOrder(root->left);
	PrevOrder(root->right);
}
void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		return;
	}
	PrevOrder(root->left);
	printf("%c ", root->data);
	PrevOrder(root->right);
}
void PostOrder(BTNode* root)
{
	if (root == NULL)
	{
		return;
	}
	PrevOrder(root->left);
	PrevOrder(root->right);
	printf("%c ", root->data);
}
// �ڵ����
int TreeSize(BTNode* root)
{
	if (root != NULL)
	{
		return TreeSize(root->left) + TreeSize(root->right) + 1;
	}
	else
	{
		return 0;
	}
}
// Ҷ�ӽڵ�ĸ���
int TreeLeafSize(BTNode* root)
{
	if (root->left == NULL&&root->right == NULL)
	{
		return 1;
	}
	else
	{
		return TreeLeafSize(root->left) + TreeLeafSize(root->right);
	}
}
// �������
void LevelOrder(BTNode* root);