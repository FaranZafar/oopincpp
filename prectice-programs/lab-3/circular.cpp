#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
class circularlist{
    private:
    node* head;
    node* tail;
    public:
    circularlist(){
        head=tail=NULL;
    }
    //insert at head
    void insert(int val){
        node* newNode=new node(val);
        if (head==NULL)
        {
            head=tail=newNode;
            newNode->next=head;
        }else{
            newNode->next=head;
            head=newNode;
            tail->next=head;
        }
        
    }
    void display(){
        node* temp =head;
        if (temp==NULL)
        {
            cout<<"circular linked list is empty.";
        }else{
            do
            {
                cout<<temp->data<<" ";
                temp=temp->next;
            } while (temp!=head);
        }
        
    }
};
int main(){
    circularlist cl;
    cl.insert(3);
    cl.insert(2);
    cl.insert(1);
    cl.display();
}