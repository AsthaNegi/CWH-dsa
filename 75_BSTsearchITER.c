 #include<stdio.h>
 #include<stdlib.h>
int i=0;
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

void inOrder(struct node *root){


if(root!=NULL){

    inOrder(root->left);
    printf("%d ",root->data);
    inOrder(root->right);

  

}


}

struct node* searchIter(struct node *root,int key){

while(root!=NULL){
  if(root->data==key){
      return root;
  }
  else if(key<root->data){

      root=root->left;

  }
  else{

      root=root->right;
  }


}

   return NULL;


}

 int main(){

     struct node *p=create(23);
     struct node *p1=create(15);
     struct node *p2=create(35);
     struct node *p3=create(10);
     struct node *p4=create(17);

     p->left=p1;
     p->right=p2;

     p1->left=p3;
     p1->right=p4;

    // inOrder(p);

     struct node *catch=searchIter(p,15);

     if(catch!=NULL){

         printf("\nElement %d is found",catch->data);

     }
     else{
         printf("\nelement not found!");
     }

     return 0;
 }