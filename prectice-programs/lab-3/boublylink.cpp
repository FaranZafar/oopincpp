#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* previous;
    node(int val){
        data=val;
        next=previous=NULL;
    }
 };
class doublylist{
    private:
    node* head;
    node* tail;
    public:
    doublylist(){
        head=tail=NULL;
    }
    void push_front(int val){
        node* newNode =new node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            newNode->next=head;
            head->previous=newNode;
            head=newNode;
        }
    }
    void display(){
        node* temp=head;
        if (temp==NULL)
        {
            cout<<"Linked list is empty.";
        }else{
            while (temp!=NULL)
            {
                cout<<temp->data<<"->";
                temp=temp->next;
            }
            cout<<"NUll"<<endl;
        }
        
    }
};
int main(){
  doublylist dll;
  dll.push_front(3);
  dll.push_front(2);
  dll.push_front(1);
  dll.display();
}
