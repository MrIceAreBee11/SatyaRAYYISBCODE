#include "Tree.h"
#include <iostream>
using namespace std;
int main()
{
    cout << "<<===================================>>" << endl;
    int x[9] = {5,3,9,10,4,7,1,8,6};
    int i=0,n=0;
    while(n<9){
        cout<<x[n]<<" ";
        n++;
    }
    adrNode P,root;
    root = nil;
    while(i<9){
        P = newNode_1301213316(x[i]);
        insertNode_1301213316(root,P);
        i++;
    }

    printf("\n");
    printf("\nPre Order\t        : ");
    printPreOrder_1301213316(root);

    printf("\n");
    printf("\nDescendent of Node 9\t: ");
    printDescendant_1301213316(root, 9);

    printf("\n");
    printf("\nSum of BST Info\t        : ");
    cout<< sumNode_1301213316(root);

    printf("\nNumber of Leaves\t: ");
    cout<< countLeaves_1301213316(root);

    printf("\nHeight of Tree\t\t: ");
    cout<< heightTree_1301213316(root)<<endl;
    cout << "<<===================================>>";
    cout<<endl;
    return 0;
}
