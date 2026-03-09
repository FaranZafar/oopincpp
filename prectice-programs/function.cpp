
  //================FUNCTIONS============================//
  //===================calcluter using Function===========//
//#include<iostream>
//using namespace std;
//int sum(int a,int b){
//	int c =a+b;
//	return c;
//}
//int sub(int a,int b){
//	int c =a-b;
//	return c;
//}
//int mul(int a,int b){
//	int c =a*b;
//	return c;
//}
//int divi(int a,int b){
//	int c =a/b;
//	return c;
//}
//int main()
//{
// int num1,num2;
// cout<<"Enter first number: ";
// cin>>num1;
// cout<<"Enter second number: ";
// cin>>num2;
// cout<<"the sum is:"<<sum(num1,num2)<<endl;
//// cout<<"the sub is:"<<sub(num1,num2)<<endl;
//// cout<<"the multiple is:"<<mul(num1,num2)<<endl;
//// cout<<"the divide is:"<<divi(num1,num2)<<endl;
//}


//==================print name ===============
//#include<iostream>
//using namespace std;
//string name(string users){
//	cout<<"Welcome faran pannu!";
//}
//int main()
//{
//	string users;
//	cout<<name(users);
//	
//}

//===================Square Functions=============//
//#include<iostream>
//using namespace std;
//int square(int n)
//{
//	int s=n*n;
//	return s;
//	
//}
//int main()
//{
// int num;
// cout<<"Enter Number:";
// cin>>num;
// cout<<"the square of number is equal to:"<<square(num);
//}
//=================== check Even or odd Functions=============//
//#include<iostream>
//using namespace std;
//string evenodd(int n){
//	if(n%2==0){
//		cout<<"Even number";
//	}else{
//		cout<<"odd number";
//	}
//}
//int main(){
//	int num;
//	cout<<"Enter number to check  even or odd:";
//	cin>>num;
//    cout<< evenodd(num);
//    return 0;
//}
//=================== maximum number Functions=============//
//#include<iostream>
//using namespace std;
//string maximumnum(int a,int b){
//	if(a>b){
//		cout<<"the maximum number is:"<<a;
//	}else if(b>a){
//	 cout<<"the maximum number is:"<<b;
//	}else{
//		cout<<"invalid information";
//	}
//}
//int main(){
//	int num1,num2;
//	cout<<"Enter your first number:";
//	cin>>num1;
//	cout<<"Enter your second number:";
//	cin>>num2;
//	cout<<maximumnum(num1,num2);
//}
//======================table function================
//#include<iostream>
//using namespace std;
//int table(int a,int b){
//	for(int i=1;i<=b;i++){
//		cout<<a<<"x"<<i<<"="<<a*i<<endl;
//	}
//}
//int main()
//{
//	int num1,limit;
//	cout<<"Enter your number:";
//	cin>>num1;
//	cout<<"enter table limit:";
//	cin>>limit;
//	table(num1,limit);
//	
//}
//================printing star==================
//#include<iostream>
//using namespace std;
//void star(int a,int b){
//	for(int i=1;i<=b;i++){
//		for(int j=1;j<=i;j++){
//		 cout<<"*";
//		}
//		cout<<endl;	
//	}
//}
//int main(){
//	int num1,limit;
//	cout<<"enter number:";
//	cin>>num1;
//	cout<<"enter limit:";
//	cin>>limit;
//	star(num1,limit);
//}
#include<iostream>
using namespace std;
void star(int a,int b){
	for(int i=b;i>=a;i--)
	{
		for(int j=1;j<=i;j++)
		{
		 cout<<"*";
		}
		cout<<endl;	
	}
}
int main(){
	int num1,limit;
	cout<<"enter number:";
	cin>>num1;
	cout<<"enter limit:";
	cin>>limit;
	star(num1,limit);
}
//===================prime number==================
















































