#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* privious;
    node(int val){
        data=val;
        next=privious=NULL;
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
    void push_back(int val){
        node* newNode=new node(val);
        node* temp=head;
        if (head==NULL)
        {
            head=tail=newNode;
        }else{
            while (temp!=tail)
            {
                temp=temp->next;
            }
            tail->next=newNode;
            newNode->privious=tail;
            tail=newNode;
        }
        
    }
    void pop_delete(){
       node* temp =head;
       head=head->next;
       if (head!=NULL)
       {
         head->privious=NULL;
       }
       temp->next=NULL;
       delete temp;
       
    }
    void display(){
        node* temp=head;
        if (temp==NULL)
        {
           cout<<"linked list is empty.";
        }else{
            while (temp!=NULL)
            {
                cout<<temp->data<<"<->";
                temp=temp->next;
            }
            cout<<"NULL"<<endl;
        }
        
    }
};
int main(){
  doublylist dll;
  dll.push_back(1);
  dll.push_back(2);
  dll.push_back(3);
  dll.display();
  dll.pop_delete();
  dll.display();
}