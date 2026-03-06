//#include<iostream>
//using namespace std;
//class Bankaccount{
//	private:
//		int accountnumber;
//		string accountholdername;
//		string accounttype; //saving,current
//		float  balance;
//		float  minimumbalance;
//	public:
//		//default constructure
//	Bankaccount(){
//		accountnumber =0000;
//		accountholdername="Faran Zafar";
//		accounttype="saving";
//		balance=20000;
//		minimumbalance=2500;
//	}	
//	   //parametrazed constructure
//	Bankaccount(int accnum,string ahname,string acctype,float ball,float minibala){
//		accountnumber=accnum;
//		accountholdername=ahname;
//		accounttype=acctype;
//		balance=ball;
//		minimumbalance=minibala;
//	}   
//	//for displaying values
//	display(){
//		cout<<"===================================="<<endl;
//		cout<<"Account number is:"<<accountnumber<<endl;
//		cout<<"Account holder name is:"<<accountholdername<<endl;
//		cout<<"Account type is:"<<accounttype<<endl;
//		cout<<"Balance is:"<<balance<<endl;
//		cout<<"minimum balance is:"<<minimumbalance<<endl;
//		
//		
//	}
//	//for deposit ammount
//	deposit(float ammount){
//		if(ammount>0){
//			balance+=ammount;
//			cout<<"ammount deposit successfully."<<endl;
//		}else{
//			cout<<"ammount is not correct."<<endl;
//		}
//	}
//	//for withdrawn ammount
//	withdraw(float ammount){
//		if(ammount>0){
//			balance-=ammount;
//			cout<<"ammount withdraw successfully."<<endl;
//		}else{
//			cout<<"ammount is not correct."<<endl;
//		}
//	}
//	//for calcluting interestrate
//    void calcluteinterest(float rate, int year) {
//        float interest;
//        interest = balance * rate * year;
//        cout << "Interest is: " << interest << endl;
//        balance = balance + interest;
//        cout << "Your balance is: " << balance << endl;
//    }
//
//};
//int main()
//{
//
//	
//	string accttype, accholname;
//	int accountnum,function;
//	float balance,minimumbalance=1500;
//	cout<<"Enter Account-Holder Name:";
//	cin>>accholname;
//	cout<<"Enter AccountNumber:";
//	cin>>accountnum;
//	cout<<"press one key to describe accounttype like "<<endl<<"1.saving"<<endl<<"2.current"<<endl;
//	cin>>accttype;
//	if(accttype=="1"){
//		accttype="saving";
//	}else if(accttype=="2"){
//		accttype="current";
//	}
//	cout<<"Enter balance of account:";
//	cin>>balance;
//	Bankaccount A1(accountnum,accholname,accttype,balance,minimumbalance);
//	A1.display();
//	cout<<"======================================"<<endl;
//	// for deposit,withdraw ,calcluteinterest
//	cout<<"press one key from (1-to-3) to perform some action like"<<endl<<"1.Deposit"<<endl<<"2.Withdraw"<<endl<<"3.CalcluteInterest"<<endl;
//	cin>>function;
//	if(function==1){
//		int ammount;
//		cout<<"Enter ammount for deposit:";
//		cin>>ammount;
//		A1.deposit(ammount);
//		A1.display();
//	}else if(function==2){
//		int ammount;
//		cout<<"Enter ammount for Withdraw:";
//		cin>>ammount;
//		A1.withdraw(ammount);
//		A1.display();
//	}else if(function==3){
//		int rate1,year;
//		float rate;
//		cout<<"Enter rate:";
//		cin>>rate1;
//		rate=rate1/100.0;
//		cout<<"Enter year:";
//		cin>>year;
//		A1.calcluteinterest(rate,year);
//	}
//	
//	
//}



//#include <iostream>
//using namespace std;
//
//class Demo {
//public:
//    Demo() {
//        cout << "Constructor called" << endl;
//    }
//
//    ~Demo() {
//        cout << "Destructor called" << endl;
//    }
//};
//
//int main() {
//    Demo obj;  // Constructor runs here
//
//    // when main() ends, destructor is automatically called
//    return 0;
//}


#include<iostream>
using namespace std;
int main(){
	int size,arr[size],arr1[size],sum=0;
	cout<<"enter size of array:";
	cin>>size;
	for(int i=0;i<size;i++){
		cout<<"enter number "<<i+1<<":";
		cin>>arr[i];
		
	}
	cout<<"============================="<<endl;
	for(int i=0;i<size;i++){
		arr1[i]=arr[i]*arr[i];
		
		cout<<"number is "<<i+1<<":"<<arr1[i]<<endl;
		
	}
	for(int i=0;i<size;i++){
		sum+=arr1[i];
		cout<<"sum of square is:"<<sum<<endl;
	}
}
