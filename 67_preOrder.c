#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

#include<malloc.h>

struct node{

int data;
struct node *left;
struct node *right;

};

struct node* createNode(int data){

    struct node *n;

    n=(struct node*)malloc(sizeof(struct node));

    n->data=data;
    n->left=NULL;
    n->right=NULL;

    return n;




}

void preOrder(struct node *root){

    if(root!=NULL){


    printf("\n%d",root->data);
    preOrder(root->left);
    preOrder(root->right);

    }


    
}

int main(){

    struct node *p=createNode(23);
    struct node *p1=createNode(11);
    struct node *p2=createNode(42);
    struct node *p3=createNode(79);
    struct node *p4=createNode(83);

    //linking the nodes with each other

    p->left=p1;
    p->right=p2;

    p1->left=p3;
    p1->right=p4;


    preOrder(p);










    return 1;
}