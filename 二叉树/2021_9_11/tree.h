#pragma once
#include<stdio.h>
#include<windows.h>

typedef char BTDataType;
typedef struct BTNode
{
	struct BTNode* left;
	struct BTNode* right;
	BTDataType data;
}BTNode;

BTNode* BTNodeInit(BTDataType x);

// ǰ�� ���� �������
void PrevOrder(BTNode* root);
void InOrder(BTNode* root);
void PostOrder(BTNode* root);
// �ڵ����
int TreeSize(BTNode* root);
// Ҷ�ӽڵ�ĸ���
int TreeLeafSize(BTNode* root);
// �������
void LevelOrder(BTNode* root);