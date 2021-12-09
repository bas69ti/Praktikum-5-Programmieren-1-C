#pragma once
#ifndef BINTREE
#define BINTREE

#include <stdio.h>
#include <stdlib.h>


//für Funktion count
int cnt;

typedef struct bintree {
	char node;
	struct bintree* left;
	struct bintree* right;

}bintree;

bintree* newNode(char);
void print_inorder(bintree*);
void count(bintree*);

#endif //BINTREE
