#include<iostream>
using namespace std;
class node {
    public:
    int data;
    node* next;
    node(int value){
        data=value;
        next=NULL;
    }

};
class list {
    private:
    node* head;
    node* tail;
    public:
    list(){
        head=tail=NULL;
    }
     //swapping of two numbers
    void swap(node* a,node* b){
        if(a==NULL|| b==NULL)return;
        int temp=a->data;
        a->data=b->data;
        b->data=temp;
        // cout<<"Number 1:"<<a->data;
        // cout<<"number 2:"<<b->data;


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
   
    void display(){
        node* temp=head;
        if (temp==NULL)
        {
            cout<<"linked list is empty."<<endl;
        }else{
            while (temp!=NULL)
            {
                cout<< temp->data<<"->";
                temp=temp->next;
            }
            cout<<"NULL"<<endl;
        }
        
    }
};

int main(){
   list l;
    int v1, v2;
    cout<<"enter num1:";
    if(!(cin>>v1)) return 0;
    cout<<"enter num2:";
    if(!(cin>>v2)) return 0;
    node* num1 = new node(v1);
    node* num2 = new node(v2);
    cout<<"Before swap: "<<num1->data<<" "<<num2->data<<endl;
    l.swap(num1, num2);
    cout<<"After swap: "<<num1->data<<" "<<num2->data<<endl;
   l.push_front(5);
   l.push_front(4);
   l.display();
    delete num1;
    delete num2;
 
}