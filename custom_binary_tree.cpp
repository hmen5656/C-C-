#include <iostream>
using namespace std;

struct node
{
    int data;
    node* sub_left;
    node* sub_right;
};
class binary_tree
{
private:
    node* insert_(int add_,node* root);
    void print_(node* root);
    void insert(int add_,node* root);
    node* head_=NULL;
public:
    binary_tree(){
    };
    ~binary_tree();
    void add(int add_);
    void print();
    int min();
    int max();
};
binary_tree::~binary_tree(){
    delete head_;
}
void binary_tree::add(int add_){
    if(head_!=NULL)
    insert(add_,head_);//eger insert_ kullanicaksa sadece bu fonksiyonu cagirmamis yeterli olacaktir
else{
    
        head_=new node;
        head_->data=add_;
        head_->sub_left=NULL;
        head_->sub_right=NULL;
}
}
node* binary_tree::insert_(int add_,node* root){
    if(root==NULL)
    {
        root=new node;
        root->data=add_;
        root->sub_left=NULL;
        root->sub_right=NULL;
        return root;
    }
    if(add_>=root->data){
        root->sub_right=insert_(add_,root->sub_right);
        return root;
    }
    root->sub_left=insert_(add_,root->sub_left);
    return root;
}

void binary_tree::insert(int add_,node* root){

  //eger bunu kullanacaksam decleration kismindaki referans i kaldirmam lazim
    if(add_>=root->data){
        if(root->sub_right!=NULL)
            insert_(add_,root->sub_right);
        else{
            root->sub_right =  new node{add_,NULL,NULL};
        }
    }
    else {
        if(root->sub_left!=NULL){
            insert_(add_,root->sub_left);
        }
        else{
            root->sub_left = new node{add_,NULL,NULL};
        }
    }

    // eger bu kismi kullanacaksam function decleration kisminda rootu *& roo olarak vermeliyim
    // if(root==NULL)
    // {
    //     root=new node{add_,NULL,NULL};
    // }
    // else if(add_<root->data)
    //     insert(add_,root->sub_left);
    // else if(add_>root->data)
    //     insert(add_,root->sub_right);
    // else if(add_==root->data)
    // {

    // }
    
}

void binary_tree::print_(node* root){
    if(root==NULL){
        return;
    }
    print_(root->sub_left);
    cout<<root->data<<endl;
    print_(root->sub_right);
    
}
void binary_tree::print(){
    print_(head_);
}
int binary_tree::max(){
    node*temp=new node;
    temp=head_;
    while(temp->sub_right!=NULL)
        temp=temp->sub_right;
    cout<<"max deger = "<<temp->data<<endl;
    return temp->data; 
}
int binary_tree::min(){
    node*temp=new node;
    temp=head_;
    while(temp->sub_right!=NULL)
        temp=temp->sub_left;
    cout<<"max deger = "<<temp->data<<endl; 
    return temp->data;
}

int main(){

    binary_tree mynode;
    mynode.add(34);
    mynode.add(67);
    mynode.add(23);
    mynode.add(99);
    mynode.add(99);
    mynode.add(374);
    mynode.add(101);
    mynode.print();
    mynode.min();
    mynode.max();

    return 0;
}
