
//============================problem 1============================
//#include<iostream>
//using namespace std;
//void swap(int *a,int *b){
//	int temp=*a;
//	*a=*b;
//	*b=temp;
//
//}
//int main(){
//	int num1,num2;
//	cout<<"enter number1:";
//	cin>>num1;
//	cout<<"enter number2:";
//	cin>>num2;
//	cout<<"------------------------------"<<endl;
//	cout<<"before swaping:"<<endl<<"num1:"<<num1<<endl<<"num2:"<<num2<<endl;
//	swap(&num1,&num2);
//	cout<<"after swaping:"<<endl<<"num1:"<<num1<<endl<<"num2:"<<num2<<endl;
////
////}
////==================================problem 2=================================
//#include<iostream>
//using namespace std;
//void funpoint(int *a,int *b,int *c){
//	//for *a
//	if(*a>100){
//		*a += 5;
//	}
//	else if(*a<100){
//		*a -= 5;
//	}else{
//		*a+=0;
//	}
//	//for *b
//	if(*b>100){
//		*b += 5;
//	}
//	else if(*b<100){
//		*b -= 5;
//	}else{
//		*b+=0;
//	}
//	//for *c
//	if(*c>100){
//		*c += 5;
//	}
//	else if(*c<100){
//		*c -= 5;
//	}else{
//		*c+=0;
//	}
//}
//int main(){
//	int num1,num2,num3;
//	cout<<"enter first number:";
//	cin>>num1;
//	cout<<"enter second number:";
//	cin>>num2;
//	cout<<"enter third number:";
//	cin>>num3;
//	funpoint(&num1,&num2,&num3);
//	cout<<"-----------------------------"<<endl;
//	cout<<"number1:"<<num1<<endl;
//	cout<<"number2:"<<num2<<endl;
//	cout<<"number3:"<<num3<<endl;
//	
//}


//==============================problem 3======================
//#include<iostream>
//using namespace std;
//
//void storedata(int arr[],int size)
//{
//	for(int i=0;i<size;i++)
//{
//		cout<<"enter number:";
//		cin>>arr[i];
//	}
//}
//int maxnum(int arr[],int size)
//{
//	int max=arr[0];
//	for(int i=0;i<size;i++)
//{
//		if(arr[i]>max)
//{
//			max=arr[i];
//		}
//	}
//	return max;
//}
//int main()
//{
//	int size,maximum;
//	cout<<"enter size of array:";
//	cin>>size;
//	int arr1[size];
//	storedata(arr1,size);
//	maximum=maxnum(arr1,size);
//	cout<<"maximum number is :"<<maximum<<endl;
//}
//===============================problem 4(ascending order)====================
//#include<iostream>
//using namespace std;
//void storedata(int arr[],int size){
//	for(int i=0;i<size;i++){
//		cout<<"enter number:";
//		cin>>arr[i];
//	}
//}
//int sortarray(int arr[],int size){
//	for(int i=0;i<size-1;i++){
//		for(int j=i+1;j<size;j++ ){
//			if(arr[i]>arr[j]){
//			
//			int temp=arr[i];
//			arr[i]=arr[j];
//			arr[j]=temp;
//		}
//		}
//	}
//}
//void display(int arr[],int size){
//	for(int i=0;i<size;i++){
//		cout<<"the number is:"<<arr[i]<<endl;
//	}
//}
//int main(){
//	int size;
//	cout<<"enter size of array:";
//	cin>>size;
//	int arr1[size];
//	storedata(arr1,size);
//	sortarray(arr1,size);
//	cout<<"------------------After sorting-----------------"<<endl;
//	display(arr1,size);
//}
//===========================(decending order)====================
//#include<iostream>
//using namespace std;
//void storedata(int arr[],int size){
//	for(int i=0;i<size;i++){
//		cout<<"enter number:";
//		cin>>arr[i];
//	}
//}
//int sortarray(int arr[],int size){
//	for(int i=0;i<size-1;i++){
//		for(int j=i+1;j<size;j++ ){
//			if(arr[i]<arr[j]){
//			//only difference of this sign "<" instead of ">"
//			int temp=arr[i];
//			arr[i]=arr[j];
//			arr[j]=temp;
//		}
//		}
//	}
//}
//void display(int arr[],int size){
//	for(int i=0;i<size;i++){
//		cout<<"the number is:"<<arr[i]<<endl;
//	}
//}
//int main(){
//	int size;
//	cout<<"enter size of array:";
//	cin>>size;
//	int arr1[size];
//	storedata(arr1,size);
//	sortarray(arr1,size);
//	cout<<"------------------After sorting-----------------"<<endl;
//	display(arr1,size);
//}

//=======================problem 5==============================
//#include<iostream>
//using namespace std;
//void storedata(int arr[],int size){
//	for(int i=0;i<size;i++){
//		cout<<"enter number:";
//		cin>>arr[i];
//	}
//}
//
//bool search(int arr[],int size, int key){
//	for(int i=0;i<size;i++){
//		if(arr[i]==key){
//			return true;
//		}
//	}
//	return false;
//}
//int main(){
//	int size,key;
//	cout<<"enter size of array:";
//	cin>>size;
//	int arr1[size];
//	storedata(arr1,size);
//	cout<<"write number who are you find:";
//	cin>>key;
//	
//	if(search(arr1,size,key)){
//		cout<<"number is found in array.";
//	}else{
//		cout<<"number is not found in the array.";
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//void storedata(int arr[],int size){
//		for(int i=0;i<size;i++){
//		cout<<"enter number:";
//		cin>>arr[i];
//	}
//}
//double square(int arr2[],int size){
//	for(int i=0;i<size;i++){
//		arr2[i]=arr2[i]*arr2[i];
//	}
//	
//	
//}
//void display(int arr2[],int size){
//	for(int i=0;i<size;i++){
//		cout<<"the square of number is:"<<arr2[i]<<endl;
//	}
//	
//}
//double cube(int arr3[],int size){
//	for(int i=0;i<size;i++){
//		arr3[i]=arr3[i]*arr3[i]*arr3[i];
//	}
//}
//void display1(int arr3[],int size){
//	for(int i=0;i<size;i++){
//		cout<<"the cube of number is:"<<arr3[i]<<endl;
//	}
//	
//}
//int main(){
//
//	int size;
//	cout<<"enter size of array:";
//	cin>>size;
//	int arr[size];
//	storedata(arr,size);
//	cout<<"--------------------------------------------"<<endl;
//	//square 
//	square(arr,size);
//	
//	//display
//	display(arr,size);
//	cout<<"---------------------------------------------"<<endl;
//	//cube
//	cube(arr,size);
//	//display
//	display1(arr,size);
//	
//	
//	
//
//
//	
//}


//
//#include<iostream>
//using namespace std;
//void modifyarray(double a[],double b[],double c[],int size){
//	for(int i=0;i<size;i++){
//		b[i]=a[i]*a[i];
//	}
//	for(int i=0;i<size;i++){
//		c[i]=a[i]*a[i]*a[i];
//	}
//}
//void display(double a[],double b[],double c[],int size ){
//	for(int i=0;i<size;i++){
//		cout<<"the square of number is:"<<b[i]<<endl;
//	}
//	for(int i=0;i<size;i++){
//		cout<<"the cube of number is:"<<c[i]*c[i]*c[i]<<endl;
//	}
//}
//int main(){
//	int size=5;
//	double a[size]={2,3,4,5,6};
//	double b[size],c[size];
//	modifyarray(a,b,c,size);
//	display(a,b,c,size);
//}





//
//#include<iostream>
//using namespace std;
//
//void storedata(int arr[],int size)
//{
//	for(int i=0;i<size;i++)
//{
//		cout<<"enter number:";
//		cin>>arr[i];
//	}
//}
//int maxnum(int arr[],int size)
//{
//	int max=arr[0];
//	for(int i=0;i<size;i++)
//{
//		if(arr[i]>max)
//{
//			max=arr[i];		}
//	}
//	return max;
//}
//int main()
//{
//	int size,maximum;
//	cout<<"enter size of array:";
//	cin>>size;
//	int arr1[size];
//	storedata(arr1,size);
//    maximum=maxnum(arr1,size);
//	cout<<"maximum number is :"<<maximum<<endl;
//}



//#include<iostream>
//using namespace std;
//void max(int *a,int *b,int *c){
//	if(*a>*b && *a>*c){
//		cout<<"maximum number:"<<*a;
//	}else if(*b>*a && *b>*c){
//		cout<<"maximum number :"<<*b;
//	}else if(*c>*a && *c>*b){
//		cout<<"maximum number is:"<<*c;
//	}
//}
//
//int main(){
//	int num1,num2,num3;
//	cout<<"enter your num1:";
//	cin>>num1;
//	cout<<"enter your num2:";
//	cin>>num2;
//	cout<<"enter your num3:";
//	cin>>num3;
//	
//	
//}

#include<iostream>
using namespace std;
void getdata(int array[],int size){
	for(int i=0;i<size;i++){
		cout<<"enter number "<<i+1<<":";
		cin>>array[i];
	}
}
void modifyarray(int array[],int size){
	for(int i=0;i<size;i++ ){
		if(array[i]%2==0){
			array[i]=array[i]*array[i];
		}else{
			array[i]=array[i]*array[i]*array[i];
		}
	}
}
void displayarray(int array[],int size){
	for(int i=0;i<size;i++){
		cout<<"number after modification:"<<array[i]<<endl;
	}
}
int main(){
	int size;
	cout<<"enter size of array:";
	cin>>size;
	int arr1[size];
	//calling functions
	getdata(arr1,size);
	modifyarray(arr1,size);
	displayarray(arr1,size);
}












