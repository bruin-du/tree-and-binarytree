#include"tree.h"
#include"Queue.h"

int main(void)
{
	BTNode* A = BTNodeInit('A');
	BTNode* B = BTNodeInit('B');
	BTNode* C = BTNodeInit('C');
	BTNode* D = BTNodeInit('D');
	BTNode* E = BTNodeInit('E');
	A->left = B;
	B->left = D;
	B->right = E;
	A->right = C;
	PrevOrder(A);
	printf("\n");
	InOrder(A);
	printf("\n");
	PostOrder(A);
	printf("\n");
	printf("%d\n", TreeSize(A));
	printf("%d\n", TreeLeafSize(A));
	LevelOrder(A);

	system("pause");
	return 0;
}