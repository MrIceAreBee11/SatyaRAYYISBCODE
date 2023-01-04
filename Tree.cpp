#include "Tree.h"
adrNode newNode_1301213316(infotype x){
    adrNode P;
    P = new Node;
    info(P)=x;
    left(P)=nil;
    right(P)=nil;

    return P;
};
adrNode findNode_1301213316(adrNode root, infotype x){
    if(root==nil){
        return nil;
    }else if(x<info(root)){
        return findNode_1301213316(left(root), x);
    }else if(x>info(root)){
        return findNode_1301213316(right(root), x);
    }else{
        return root;
    }
};
void insertNode_1301213316(adrNode &root, adrNode p){
    if(root == nil){
        root= p;
    }else if(info(p)<info(root)){
        insertNode_1301213316(left(root),p);
    }else if(info(p)>info(root)){
        insertNode_1301213316(right(root),p);
    }
};
void printPreOrder_1301213316(adrNode root){
    if(root != nil){
        cout<<(info(root))<<" ";
        printPreOrder_1301213316(left(root));
        printPreOrder_1301213316(right(root));
    }
};
void printDescendant_1301213316(adrNode root, infotype x){
    adrNode nd;
    nd = findNode_1301213316(root,x);
    if( nd != nil){
        printPreOrder_1301213316(left(nd));
        printPreOrder_1301213316(right(nd));
    }
};
int sumNode_1301213316(adrNode root){
    int sum;
    sum = 0;
    if (root !=nil){sum = sum + info(root);}
    if (left(root)!=nil){sum=sum+sumNode_1301213316(left(root));}
    if (right(root)!=nil){sum=sum+sumNode_1301213316(right(root));}
    return sum;
};
int countLeaves_1301213316(adrNode root){
    int leaves;
    leaves =0;
    if (left(root)==nil&&right(root)==nil){leaves=leaves+1;}
    if (left(root)!=nil){leaves=leaves+countLeaves_1301213316(left(root));}
    if (right(root)!=nil){leaves=leaves+countLeaves_1301213316(right(root));}
    return leaves;
};
int heightTree_1301213316(adrNode root){
    if (left(root)==nil&&right(root)==nil){return 0;}
    int maks,L=heightTree_1301213316(left(root)),R=heightTree_1301213316(right(root));
    if ( L>R ){maks =L;}
    else{maks =R;}
    return maks + 1;

};
