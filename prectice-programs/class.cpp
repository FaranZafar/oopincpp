//#include<iostream>
//using namespace std;
//class Accounts {
//	private:
//		int  current_balance=40000;
//		int sum=0;
//		int  remaining_balance=0;
//	public:
//	 void display(int arr[],int size){
//	 	for(int i=0;i<size;i++){
//	 	sum+=arr[i];	
//	 	remaining_balance=current_balance-sum;
//	 		
//		 }
//		 cout<<"your total expanse today:"<<sum<<endl;
//	 	cout<<"your remaining balance is:"<<remaining_balance<<endl;
//	 	
//	 }	
//};
//int main(){
//	int size;
//	cout<<"Enter total counting of expanses today:";
//	cin>> size;
//	int  arr[size];
//	for(int i=0;i<size;i++){
//		cout<<"Enter your today expanse "<<i+1<<":";
//		cin>>arr[i];
//	}
//    Accounts acc;
//    acc.display(arr,size);
//    return 0;
//}


//=============================================================================

//#include<iostream>
//using namespace std;
//class Book{
//	private:
//		int ISBN=0;
//		string title;
//		string author;
//		int edition;
//		int price=0;
//		string publisher;
//	public:
//	void display(int isbn,string title1,string author1,int edition1,int price1,string publisher1){
//		ISBN=isbn;
//		title=title1;
//		author=author1;
//		edition=edition1;
//		price=price1;
//		publisher=publisher1;
//		//out put is this
//		cout<<"ISBN no of book is:"<<ISBN<<endl;
//		cout<<"Title of book is:"<<title<<endl;
//		cout<<"author of book is:"<<author<<endl;
//		cout<<"edition of book is:"<<edition<<endl;
//		cout<<"price of book is:"<<price<<endl;
//		cout<<"publisher of book is:"<<publisher<<endl;
//		
//		
//	}	
//		
//};
//int main(){
//		int ISBN_no=0;
//		string title;
//		string author;
//		int edition;
//		int price=0;
//		string publisher;
//		cout<<"Enter ISBN no of book:";
//		cin>>ISBN_no;
//		cout<<"Enter title  of book:";
//		cin>>title;
//		cout<<"Enter author name of book:";
//		cin>>author;
//		cout<<"Enter  edition of book:";
//		cin>>edition;
//		cout<<"Enter price of book:";
//		cin>>price;
//		cout<<"Enter publisher name of book:";
//		cin>>publisher;
//		cout<<"---------------------------------------";
//		Book acc;
//		acc.display(ISBN_no,title,author,edition,price,publisher);
//		
//}
