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

#include"Queue.h"

BTNode* BTNodeInit(BTDataType x);

// 前序 中序 后序遍历
void PrevOrder(BTNode* root);
void InOrder(BTNode* root);
void PostOrder(BTNode* root);
// 节点个数
int TreeSize(BTNode* root);
// 叶子节点的个数
int TreeLeafSize(BTNode* root);
// 层序遍历
void LevelOrder(BTNode* root);