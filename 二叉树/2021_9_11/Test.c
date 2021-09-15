#include<stdio.h>
#include<windows.h>

typedef char BTreeDataType;

typedef struct BTreeNode
{
	struct BTreeNode* left;
	struct BTreeNode* right;
	BTreeDataType data;
}BTree;

BTree* BTreeInit(BTreeDataType x)
{
	BTree* bt = (BTree*)malloc(sizeof(BTree));
	if (bt == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	bt->left = NULL;
	bt->right = NULL;
	bt->data = x;

	return bt;
}

void BTreePrint(BTree* bt)
{
	if (bt == NULL)
	{
		printf("NULL ");
		return;
	}
	printf("%c ", bt->data);
	BTreePrint(bt->left);
	BTreePrint(bt->right);
}

int main(void)
{
	BTree* A = BTreeInit('A');
	BTree* B = BTreeInit('B');
	BTree* C = BTreeInit('C');
	BTree* D = BTreeInit('D');
	BTree* E = BTreeInit('E');
	A->left = B;
	B->left = D;
	B->right = E;
	A->right = C;
	BTreePrint(A);

	system("pause");
	return 0;
}