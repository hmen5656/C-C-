#include <iostream>

using namespace std;

template <typename T>
class Node
{
public:
    T value;
    Node *next = NULL;

    Node(T value)
    {
        this->value = value;
    }
};

template <typename T>
class Stack
{
private:
    int size_;
    int index_=0;

public:
    Node<T> *top_ = NULL;
    Node<T> *itr_ = NULL;
    Stack()
    {
        this->size_ = 0;
    }

    void push(T value)
    {
        if (this->top_ == NULL)
        {
            cout << "Addıng fırst element" << endl;
            this->top_ = new Node<T>(value);
        }
        else
        {
            Node<T> *tmp = new Node<T>(value);
            tmp->next = this->top_;
            this->top_ = tmp;
        }
        this->size_ += 1;
    }

    Node<T> *pop()
    {
        Node<T> *tmp = this->top_;

        this->top_ = this->top_->next;
        this->size_ -= 1;
        return tmp;
    }

    Node<T> *peek()
    {
        return this->top_;
    }

    int size()
    {
        return this->size_;
    }

    Node<T> *iterate()
    {
        if (this->itr_ == NULL || this->itr_->next == NULL)
        {
            this->index_ = 0 ;
            // cout << "Iterator is null" << endl;
            cout << "index :"<<this->index_ ;
            this->itr_ = this->top_;
        }
        else
        {
            this->index_++;
            cout << "index :" <<this->index_;
            this->itr_ = this->itr_->next;
        }
        return this->itr_;
    }

    T ptr()
    {
        return this->itr_->value;
    }

    void resetIterator()
    {
        this->itr_ = NULL;
    }
};

int main(int argc, char *argv[])
{
    Stack<int> stk1;
    stk1.push(10);
    stk1.push(12);
    stk1.push(14);
    stk1.push(16);
    stk1.push(5);
    stk1.push(4);
    stk1.push(3);
    stk1.push(2);
    stk1.push(1);

    Node<int> *test = NULL;
    do{
        test = stk1.iterate();
        cout << "\tValue : " <<test->value <<"\t"<< endl;

    }
    while (test->next != NULL);
    
    cout<<"For loop"<<endl;
    
    for(int i=0;i<11;i++)
    {
        stk1.iterate();
        cout << "\tValue : " <<stk1.ptr() <<"\t"<< endl;

    }
    cout << endl;
    return 0;
}