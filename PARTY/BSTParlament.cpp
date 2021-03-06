/* 
 * File:   main.cpp
 * Author: zviad
 *

 */

#include <cstdlib>
#include <math.h>
#include<stdio.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <queue>
#include <map>

using namespace std;

/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */

struct Node {
    int data;
    Node *left;
    Node *right;
};
 

/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
struct Node *newNode(int data) {
    Node *nude=new Node;
    nude->data=data;
    nude->left=NULL;
    nude->right=NULL;
            
    return nude ;
}

 
struct Node *insertNode(struct Node *node,int data){
    Node *retNode;
    
    if(node==NULL){
        retNode=newNode(data);
        return retNode;
    }else if(node->data<data){
        node->left=insertNode(node->left,data);
    }else{
        node->right=insertNode(node->right,data);
    }
   return node; 
}
 


void printInOrder(struct Node *node){
    if(node==NULL){
        return;
    } printInOrder(node->left);
        printInOrder(node->right);
      
   
      cout<<node->data<<"\n"; 


}


int parlament() {
    int n,x;
    freopen("input.txt", "rt", stdin);
    cin>>n;
    vector<int> parls;
    for(int i=0;i<n;i++){
        cin>>x;
        parls.push_back(x);
    }

    
Node *retNode;

retNode=insertNode(NULL,parls[n-1]);
for(int i=n-2;i>=0;i--){
    retNode=insertNode(retNode,parls[i]);
}
printInOrder(retNode);
    return 0;

}



//int main() {
//
//    parlament();
//
//
//}