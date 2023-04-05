#include<iostream>
#include <string>
using namespace std;

template<class t>
struct node
{
	t data;
	int size;
	node<t> *next=NULL;
	node(){}
	node(int s):size(s){}
};

template<class t>
node<t>* add_item(node<t>* n,t item){
	node<t>* temp=new node<t>;
	temp->data=item;
	int tempsize=n->size;
	if(n->size==0){
		cout<<"basa eklendi"<<endl;
		n=temp;
		n->size+=1;
		return n;
	}

	n->size+=1;
	node<t>* iter=n;
	while(iter->next != NULL)
			iter=iter->next;
	iter->next=temp;
	return n;
	}

template<class t>
void yazdir(node<t> *n){
	while(n->next!=NULL){
		cout<<n->data<<endl;
		n=n->next;
		
	}
	cout<<n->data<<endl;

}

template<class t>
node<t>* remove_item(node<t>* n,t item){
	if(n->size==0){
		cout<<"list is already emty";
		return n;
	}
	node<t>* temp=new node<t>;
	if(n->data==item){
		node<t>* temp=n;
		n->next->size=n->size-1;
		n=n->next;
		delete temp;
		return n;
	}
	node<t>* iter=n;
	while(iter->next != NULL && iter->next->data != item)
			iter=iter->next;
	if(iter->next == NULL){
		cout<<"there is no "<<item<<endl;
		return n;
	}
	temp=iter->next;
	iter->next=iter->next->next;
	delete temp;
	n->size-=1;
	return n;
	}
int main(int argc, char *argv[]){

	// node<int>* mynode;
	// mynode->size=0;
	// mynode = add_item(mynode,5);
	// mynode = add_item(mynode,7);
	// mynode = add_item(mynode,8);
	// cout<<"size :"<<mynode->size<<endl;

	// mynode = add_item(mynode,9);
	// mynode = add_item(mynode,2);
	// mynode = add_item(mynode,1);
	// cout<<"size :"<<mynode->size<<endl;
	// yazdir(mynode);
	// cout<<"======================="<<endl;
	// mynode=remove_item(mynode,8);
	// yazdir(mynode);
	// cout<<"size :"<<mynode->size<<endl;
	// cout<<"======================="<<endl;
	// mynode=remove_item(mynode,5);
	// yazdir(mynode);
	// cout<<"size :"<<mynode->size<<endl;
	// cout<<"======================="<<endl;


	// node<char const *>* mynode;//char const * yerine string yazinca kabul etmiyor
	// mynode->size=0;
	// mynode = add_item(mynode,"huseyin");
	// mynode = add_item(mynode,"halil");
	// mynode = add_item(mynode,"berat");
	// cout<<"size :"<<mynode->size<<endl;
	// cout<<"======================="<<endl;
	// mynode = add_item(mynode,"hasan");
	// mynode = add_item(mynode,"ahmet");
	// mynode = add_item(mynode,"mehmet");
	// cout<<"size :"<<mynode->size<<endl;
	// yazdir(mynode);
	// cout<<"======================="<<endl;
	// cout<<"======================="<<endl;
	// mynode=remove_item(mynode,"asd");
	// yazdir(mynode);
	// cout<<"size :"<<mynode->size<<endl;
	// cout<<"======================="<<endl;
	// mynode=remove_item(mynode,"mehmet");
	// yazdir(mynode);
	// cout<<"size :"<<mynode->size<<endl;
	// cout<<"======================="<<endl;

	
	
	return 0;
}