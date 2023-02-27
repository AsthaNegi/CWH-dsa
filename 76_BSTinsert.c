 #include<stdio.h>
 #include<stdlib.h>



struct node{

int data;
struct node *left;
struct node *right;

};


struct node* create(int data){

struct node *n=(struct node*)malloc(sizeof(struct node));

n->data=data;
n->left=NULL;
n->right=NULL;

return n;


}

void insert(struct node *root,int key){

    struct node *prev=NULL;

    while(root!=NULL){

        prev=root;

        if(root->data==key){
            printf("\ncannot insert ! element already in the tree");
            return;
        }

        else if(key<root->data){
            root=root->left;
        }

        else{

            root=root->right;
        }

    }

    struct node *new=create(key);

    if(key<prev->data){
        prev->left=new;
    }
    else{
        prev->right=new;
    }
    




}

void inOrder(struct node *root){


if(root!=NULL){

    inOrder(root->left);
    printf("%d ",root->data);
    inOrder(root->right);

  

}


}


 int main(){

     struct node *p=create(23);
     struct node *p1=create(16);
     struct node *p2=create(35);
     struct node *p3=create(10);
     struct node *p4=create(19);

     p->left=p1;
     p->right=p2;

     p1->left=p3;
     p1->right=p4;

    

printf("\nbefore insert");

inOrder(p);


insert(p,17);


printf("\nAfter insert!");
inOrder(p);


return 0;
 }