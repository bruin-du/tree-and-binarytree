#include"tree.h"

BTNode* BTNodeInit(BTDataType x)
{
	BTNode* root = (BTNode*)malloc(sizeof(BTNode));
	root->data = x;
	root->left = root->right = NULL;
	return root;
}

// 前序 中序 后序遍历
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
// 节点个数
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
// 叶子节点的个数
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
// 层序遍历
void LevelOrder(BTNode* root)
{
	Queue queue;
	QueueInit(&queue);
	QueuePush(&queue, root);
	while (!QueueIsEmpty(&queue))
	{
		BTNode* node = QueueTop(&queue);
		QueuePop(&queue);
		printf("%c ", node->data);
		if (node->left != NULL)
		{
			QueuePush(&queue, node->left);
		}
		if (node->right != NULL)
		{
			QueuePush(&queue, node->right);
		}
	}

	QueueDestory(&queue);
}