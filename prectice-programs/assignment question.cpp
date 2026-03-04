
//====================question 1=========================
//#include<iostream>
//using namespace std;
//int sum(int a,int b,int c,int d=0,int e=0,int f=0,int g=0){
//	int sum=a+b+c+d+e+f+g;
//	return sum;
//}
//int sub(int a,int b,int c,int d=0,int e=0,int f=0,int g=0){
//	int sub=a-b-c-d-e-f-g;
//	return sub;
//}
//int mul(int a,int b,int c,int d=1,int e=1,int f=1,int g=1){
//	int mul=a*b*c*d*e*f*g;
//	return mul;
//}
//int divide(int a,int b,int c,int d=1,int e=1,int f=1,int g=1){
//	int divide=a/b/c/d/e/f/g;
//	return divide;
//}
//int main(){
//	int num1,num2,num3,num4,num5,num6,num7=0;
//	cout<<"Enter your numbers:";
//	cin>>num1;
//	cin>>num2;
//	cin>>num3;
//	cin>>num4;
//	cin>>num5;
//	cin>>num6;
//	cin>>num7;
//	cout<<"the answer is:"<<sum(num1,num2,num3,num4,num5,num6,num7);
//	cout<<"the answer is:"<<sum(num1,num2,num3);
//	cout<<"Enter your second number:";
//	cin>>num2;
//	cout<<"Enter your third number:";
//	cin>>num3;
//	cout<<"the answer is equal to:"<<sub(num1,num2,num3,num4,num5,num6,num7);
//}
//===================swaping program (2) ===================
//#include<iostream>
//using namespace std;
//void swap(int &a,int &b){
//	int temp=a;
//	a=b;
//	b=temp;
//}
//int main(){
//	int num1,num2;
//	cout<<"enter number1:";
//	cin>>num1;
//	cout<<"enter number2:";
//	cin>>num2;
//	cout<<"before swaping:"<<num1<<"number2:"<<num2<<endl;
//	swap(num1,num2);
//	cout<<"after swaping:"<<num1<<"number2:"<<num2<<endl;
//	return 0;
//}
//=====================Fictorial of number()================
//#include<iostream>
//using namespace std;
//int fictorial(int n){
//	int answer=1;
//	for(int i=1;i<=n;i++){
//		answer=answer*i;
//	}
//	return answer;
//}
//int main(){
//	int num;
//	cout<<"Enter number to find Fictorial:";
//	cin>>num;
//	cout<<"The answer is equal to:"<<fictorial(num);
//
//	
//}
//=======================claclute sequare,cube,area,cicumference===============
//#include<iostream>
//using namespace std;
//float calclute(int r,int choice){
//	switch(choice){
//		case 1:
//			return 3.14 * r * r;
//		case 2:
//			return r * r;	
//		case 3:
//			return r * r * r;
//		case 4:
//			return 2 * 3.14 * r;
//	}
//	
//}
//int main(){
//	int redius,choice;
//	cout<<"Enter Radius:";
//	cin>>redius;
//	cout<<"Enter number to find:\n 1.Area\n 2.square\n3.cube\n4.circumference.\n Enter one number:";
//	cin>>choice;
//	cout<<"the answer is:"<<calclute(redius,choice);
//	
//}
//==========================palindrome=====================================
//#include<iostream>
//using namespace std;
//int palindrome(int num){
//	int original=num;
//	int reversed=0;//store reversed value
//	while(num>0){
//		int digit = num % 10; //get last digit
//		reversed=reversed * 10 +digit; // add it to reversed
//		num=num/10; //remove last digit
//	}
//	return (original== reversed);
//}
//int main(){
//	int number;
//	cout<<"enter number to check it is  palindrome or not:";
//	cin>>number;
//	if(palindrome(number))
//	cout<<number<<"is a palindrome.";
//	else
//	cout<<number<<"is not a palindrome.";
//	return 0;
//	
//	
//}
//
//

//=================array=======================
//#include<iostream>
//using namespace std;
//int main(){
//	int size;
//	cin>>size;
//int arr1[size];
//for(int i=1;i<=size;i++){
//	cout<<"enter value:";
//	cin>>arr1[i];
//}
//for(int i=1;i<=size;i++){
//	cout<<"Value"<<i<<":"<<arr1[i]<<endl;
//}
//}


//==================== table ===============================








//
//#include<iostream>
//using namespace std;
//void multiply(int value,int start,int end){
//    for(int i=start;i<=end;i++){
//		cout<<value<<"x"<<i<<"="<<value*i<<endl;
//	}
//	
//}
//int main(){
//	int value,start,end;
//	cout<<"enter value:";
//	cin>>value;
//	cout<<"enter start value:";
//	cin>>start;
//	cout<<"enter end value:";
//	cin>>end;
//	multiply(value,start,end);
//	
//}












