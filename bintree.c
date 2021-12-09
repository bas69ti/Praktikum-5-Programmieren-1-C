#include "bintree.h"

extern bintree* newNode(char c) {
	bintree* newEl = (bintree*)malloc(sizeof(bintree));

	newEl->node = c;
	newEl->left = NULL;
	newEl->right = NULL;

	return newEl;
}

extern void print_inorder(bintree* b) {
	if (b == NULL)
		return;

	print_inorder(b->left);
	printf("%c -> ", b->node);
	print_inorder(b->right);
}

extern void count(bintree* b) {
	
	if (b == NULL)
		return;
	cnt++;

	count(b->left);
	count(b->right);
		
}
