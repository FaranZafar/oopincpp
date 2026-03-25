#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int value){
        data=value;
        next=NULL;
    }
};
class list{
    private:
    node* head;
    node* tail;
    public:
    list(){
        head=tail=NULL;
    }
    void push_front(int value){
        node* newNode=new node(value);
        if(head==NULL){
            head=tail=newNode;
        }else{
             newNode->next=head;
             head=newNode;
        }
    }
    void ascending(){
        node* i;
        node* j;
        int tempval;
        for (i=head; i->next!=NULL; i=i->next)
        {
           for (j=i->next; j!=NULL; j=j->next)
           {
             if (i->data>j->data)
             {
                tempval=i->data;
                i->data=j->data;
                j->data=tempval;
             }
             
           }
           
        }
        node* temp =head;
        while (temp !=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<endl;
        
        
    }

    //decending order
    void descending(){
        node* i;
        node* j;
        int tempval;
        for (i=head; i->next!=NULL; i=i->next)
        {
           for (j=i->next; j!=NULL; j=j->next)
           {
             if (i->data<j->data)
             {
                tempval=i->data;
                i->data=j->data;
                j->data=tempval;
             }
             
           }
           
        }
        node* temp =head;
        while (temp !=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<endl;
        
    }
    void display(){
        node* temp=head;
        if(temp==NULL){
            cout<<"linked list is empty.";
        }else{
            while (temp!=NULL)
            {
                cout<<temp->data<<"->";
                temp=temp->next;
            }
            cout<<"NULL"<<endl;
        }
    }
};
int main(){
       list l;
       l.push_front(5);
       l.push_front(3);
       l.push_front(4);
       l.push_front(1);
       l.push_front(2);
       l.display();
       l.ascending();
       //enter number in sorted list
       l.push_front(0);
       l.display();
      
      
       
}