#include<iostream>
using namespace std;
class Node{
	public:
		
	int data;
	Node* next;
	
	Node(int value){
		data=value;
        next = Null;
	}
};
class List{
	private:
		Node* head;
		Node* tail;
	public:
	 List(){
	 	head=tail=Null;
	 }	
	void push_front(int val){
		Node* newNode= new Node(val)
		if(head==Null){
			head=tail=newNode;
			return;
		}else{
			newNode->next=head;
			head=newNode;
		}
		
	} 
	void display(){
		Node* temp = head;
		while(temp !=Null){
			cout<<temp->data<<"->";
			temp=temp->next;
		}
		cout<<"null"<<endl;
	}
};
int main(){
	list mylist;
	mylist.push_front(12);
	mylist.push_front(13);
	mylist.push_front(14);
	mylist.push_front(15);
	mylist.display();
	
	return 0;
}
