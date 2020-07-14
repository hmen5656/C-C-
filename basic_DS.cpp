#include<iostream>
using namespace std;

struct n
{
    int data=NULL;
    n * next=NULL;
};
typedef n node;

void yazdir( node* x){
    while(x!=NULL){
        
        cout<<x->data<<endl;
        x=x->next;

    }
}
void ekle( node* x,int add){
    node *temp=new node;
    temp->data=add;
    temp->next=NULL;
    if(x==NULL)
    {
      x=temp;
    }
    else{
        while(x->next!=NULL){
            x=x->next;
        }
        x->next=temp;
        
    }
}
void onune_ekle(node * x,int add , int ara){
    node * temp=new node;
    temp->data=add;
    while(x->next->data != ara)
        x=x->next;
    temp->next=x->next;
    x->next=temp;
}
int main(){
    node *root=new node;
    root->data=34;
    ekle(root,45);
    ekle(root,23);
    ekle(root,88);
    ekle(root,9);
    ekle(root,232);
    ekle(root,911);
    onune_ekle(root,54,9);
    yazdir(root);

    return 0;
}
