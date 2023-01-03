#include "stdio.h"
#include "stdlib.h"
#include "BinarySearchTree.h"

struct TreeNode{
		struct TreeNode* pri=NULL;
		struct TreeNode* right=NULL;
		struct TreeNode* left=NULL;
		int data;
	};
static struct TreeNode* tree_header;

int main(){
	int s=0, value;
	tree_header = NULL;
	while(s!=3){
		printf("1. 新增 2. 顯示 3. 離開\n");
		scanf("%d",&s);
		if(s==1){
			printf("請輸入新增值:");
			scanf("%d", &value);
			if(tree_header == NULL){
				tree_header = createNode(tree_header, value);
			}
			else tree_header = AddNode(tree_header, value);
		}
		if(s==2){
			tree_header = ShowTree(tree_header);
			printf("\n");
		}
	}
	return 0;	
}


struct TreeNode* createNode(struct TreeNode* header, int value){
	header = (struct TreeNode *)malloc(sizeof(struct TreeNode));
	if(header == NULL) return NULL;
	header->data = value;
	header->pri = NULL;
	header->left = NULL;
	header->right = NULL;
	return header;
}

struct TreeNode* AddNode(struct TreeNode* header, int value){
	struct TreeNode* current;
	current = header;
	if(current==NULL) 
		current = createNode(current, value);
	else if(value <= current->data)
		current->left = AddNode(current->left, value);
	else if(value > current->data)
		current->right=AddNode(current->right, value);
	return current;
}	

struct TreeNode* ShowTree(struct TreeNode* header){
	struct TreeNode* current;
	current = header;
	if(current->left != NULL)
		current->left = ShowTree(current->left);
	printf("%d, ",current->data);
	if(current->right != NULL)
		current->right = ShowTree(current->right);
	return current;
}

