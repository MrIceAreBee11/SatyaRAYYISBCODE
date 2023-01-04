#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED
#include <iostream>
using namespace std;
#define nil NULL
#define info(P) (P)->info
#define right(P) (P)->right
#define left(P) (P)->left

typedef int infotype;
typedef struct Node *adrNode;
struct Node{
    infotype info;
    adrNode right;
    adrNode left;
};


adrNode newNode_1301213316(infotype x);
adrNode findNode_1301213316(adrNode root, infotype x);
void insertNode_1301213316(adrNode &root, adrNode p);
void printPreOrder_1301213316(adrNode root);
void printDescendant_1301213316(adrNode root, infotype x);
int sumNode_1301213316(adrNode root);
int countLeaves_1301213316(adrNode root);
int heightTree_1301213316(adrNode root);

#endif // TREE_H_INCLUDED


