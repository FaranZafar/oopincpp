#include<iostream>
using namespace std;
 // node class
class node{
 public:
    int data;
    node* next;

  node(int value){
    data=value;
    next=NULL;
  }  
};
// list class
class list{
    private:
    node* head;
    node* tail;
    public:
    // constractor
    list(){
        head=tail=NULL;
    }
    //push fornt fuction
    void push_front(int value){
        node* newNode=new node(value);
        if(head==NULL){
            head=tail=newNode;
        }else{
            newNode->next=head;
            head=newNode;
        }
    }
    // push back function
    void push_back(int value){
        node* newNode=new node(value);
        if(head==NULL){
            head=tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    // count value function
    void count(){
        int count=0;
        node* temp=head;
        while (temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        cout<<"total count is:"<<count<<endl;
    }
    // max number function
    void maxnum(){
        node* temp=head;
        int max= head->data;
        while (temp!=NULL)
        {
            if(temp->data > max){
                max=temp->data;
            }
            temp=temp->next;
        }
        cout<<"Maximum Number is:"<<max<<endl;
    }
    // minimun number function
    void minnum(){
        node* temp=head;
        int min=head->data;
        while (temp!=NULL)
        {
            if(temp->data<min){
                min=temp->data;
            }
            temp=temp->next;
        }
        cout<<"the minimum number is:"<<min<<endl;
    }
    // serearch function
    void serach(int val){
        node* newNode=head;
        bool temp=false;
        while (newNode!=NULL)
        {
            if(newNode->data==val){
                cout<<"Number is present."<<endl;
                temp=true;
                break;
            }
            newNode=newNode->next;
           
            
        }
        if(!temp){
            cout<<"Number is not present."<<endl;
        }
        
    }
    //delete fornt function
    void delete_fornt(){
        if(head==NULL){
            cout<<"Linked list is empty.";
            return;
        }
        node* temp =head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    // delete end function
    void delete_end(){
        if (head==NULL){
            cout<<"empty linked list.";
            return;
        }
        node* temp=head;
        while (temp->next!=tail)
        {
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
    }
    //output value
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
  l.push_front(1);
  l.push_front(2);
  l.push_front(3);
  l.push_back(4);
  l.push_back(5);
  l.push_back(6);
  l.delete_fornt();
  l.delete_end();
  l.display();
//   l.count();
//   l.maxnum();
//   l.minnum();
//   l.serach(91);
//   l.serach(6);
 
  

}