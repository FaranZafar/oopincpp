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
    //push front function
    void push_fornt(int val){
        node* newNode=new node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
           newNode->next=head;
           head=newNode;
            
        }
    }
    //searching element
    void search(int val){
        node* temp =head;
        bool key=false;
        while (temp!=NULL)
        {
            if (temp->data==val)
            {
                key=true;
                cout<<"Number is present"<<endl;
                return;

            }
            temp=temp->next;
        }
        cout<<"Number is not present."<<endl;
    }
    //insert at desired location
    void insert(int val,int pos){
        if(pos<0){
            cout<<"Invalid Location.";
            return;
        }
       else if(pos==0){
            push_fornt(val);
        }
        node* temp =head;
            for (int i = 0; i <pos; i++)
            {
                temp=temp->next;
            }
            node* newNode=new node(val);
            newNode->next=temp->next;
            temp->next=newNode;
            
        
    }

    void display(){
        node* temp=head;
        while (temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main(){
    list l;
    l.push_fornt(9);
    l.push_fornt(12);
    l.push_fornt(3);
    l.push_fornt(2);
    l.push_fornt(1);
    l.insert(8,3);
    l.display();
    
    return 0;
}