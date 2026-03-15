//#include<iostream>
//using namespace std;
//void storeData(int arr[],int n){
//	for(int i=0;i<n;i++){
//		cout<<"Enter numbers:";
//		cin>>arr[i];
//	}
//}
//
//void Calclutesquare(int arr[],int n){
//	for(int i=0;i<n;i++){
//		
//		arr[i] =arr[i] * arr[i];
////		cout<<"sequre of numer is"<<arr[i];
//	    
//	}
//	
//}
//void displaydata(int arr[],int n){
//	for(int i=0;i<n;i++){
//		cout<<"the number is:"<<arr[i]<<endl;
//	}
//}
//
//int main(){
//	int size;
//	cout<<"Enter size of array:";
//	cin>>size;
//	int arr1[size];
//	//first call fpr storing data
//	storeData(arr1, size);
//	cout<<"------------------------------"<<endl;
//	 Calclutesquare(arr1,size);
//	cout<<"------------------------------"<<endl;
//	displaydata(arr1,size);
//	cout<<"------------------------------"<<endl;
//	return 0;
//	
//}

#include<iostream>
using namespace std;
void addnum(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<"enter number:";
		cin>>arr[i];
		
	}
}
void display(int arr[],int n){
	for(int i=0;i<n;i++){
	  if(arr[i]>100){
	  	cout<<"the answer is:"<<arr[i]+50<<endl;
	  }else if(arr[i]<100 && arr[i]>50){
	  	cout<<"the answer is :"<<arr[i]+30<<endl;
	  }else{
	  	cout<<"the answer is :"<<arr[i]+100<<endl;
	  }
		
	}
}
int main(){
	int size;
	cout<<"enter size of array:";
	cin>>size;
	int arr1[size];
	
	addnum(arr1,size);
	cout<<"------------------------------------"<<endl;
	display(arr1,size);
}






























