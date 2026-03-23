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
    //at front
    void push_fornt(int value){
        node* newNode =new node(value);
        if(head==NULL){
            head=tail=newNode;
        }else{
            newNode->next=head;
             head=newNode;
        }
    }
    //push back function
    // void push_back(int value){
    //     node* newNode = new node(value);
    //     if(head==NULL){
    //         head=tail=newNode;
    //     }else{
    //         tail->next=newNode;
    //         tail=newNode;
    //     }
    // }
  //delete front
//   void delte_fornt(){
//     if(head==NULL){
//         cout<<"linklist is empty";
//         return;
//     }
//     node* temp=head;
//     head=head->next;
//     temp->next=NULL;
//     delete temp;
//   }
  //delete end
//   void delete_end(){
//     if(head==NULL){
//         return;
//     }
//     node* temp=head;
//     while(temp->next!=tail){
//         temp=temp->next;
       
//     }
//      temp->next=NULL;
//      delete tail;
//      tail=temp;
//   }
  // insert at disired point
  void insert(int val,int pos){
    if(pos<0){
        cout<<"invalid number";
        return;
    }else if(pos==0){
        push_fornt(val);
        return;
    }
    node* temp=head;
    for (int i = 0; i <pos; i++)
    {
        temp=temp->next;
    }
    node* newnode= new node(val);
    newnode->next=temp->next;
    temp->next=newnode;
    
  }
  //for output values
    void display(){
        node* temp =head;
        while (temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        
    }
};
int main(){
    list l;
    l.push_fornt(1);
    l.push_fornt(2);
    l.push_fornt(3);
    l.push_fornt(4);
    l.insert(5,2);
   
    l.display();
}