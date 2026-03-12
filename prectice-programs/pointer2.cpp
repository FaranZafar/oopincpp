//#include<iostream>
//using namespace std;
//void swap(int *a,int *b){
//	int temp=*a;
//	*a = *b;
//	*b = temp;
//}
//int main(){
//	int num1,num2;
//	cout<<"Enter number1:";
//	cin>>num1;
//	cout<<"enter number2:";
//	cin>>num2;
//	swap(&num1,&num2);
//	cout<<"number 1:"<<num1<<endl<<"number 2:"<<num2;
//	
//}


//#include<iostream>
//using namespace std;
//void modify(int *a,int *b,int *c){
//	if(*a>100){
//		*a+=5;
//	}else if(*a<100){
//		*a-=5;
//	}else{
//		*a+=0;
//	}
//	//for b
//	if(*b>100){
//		*b+=5;
//	}else if(*b<100){
//		*b-=5;
//	}else{
//		*b+=0;
//	}
//	// for c
//	if(*c>100){
//		*c+=5;
//	}else if(*c<100){
//		*c-=5;
//	}else{
//		*c+=0;
//	}		
//}
//int main(){
//	int num1,num2,num3;
//	cout<<"enter number1:";
//	cin>>num1;
//	cout<<"enter number2:";
//	cin>>num2;
//	cout<<"enter number3:";
//	cin>>num3;
//	modify(&num1,&num2,&num3);
//	cout<<"-------------------------------"<<endl;
//	cout<<"modified number1:"<<num1<<endl;
//	cout<<"modified number2:"<<num2<<endl;
//	cout<<"modified number3:"<<num3<<endl;
//}


//#include<iostream>
//using namespace std;
//int storedata(int arr[],int size){
//	
//	for(int i=0;i<size;i++){
//		cout<<"enter number "<<i+1<<":";
//		cin>>arr[i];
//	}
//	int max=arr[0];
//	for(int i=0;i<size;i++)
//	{
//		if(arr[i]>max)
//		{
//		   max=arr[i];
//		}
//	
//	}
//	  return max;
//}
//int main(){
//	int size;
//	cout<<"enter size of array:";
//	cin>>size;
//	int arr1[size];
//
//	cout<<"maximum number :"<<storedata(arr1,size);
//}


//#include<iostream>
//using namespace std;
//void sort(int arr[],int size){
//	for(int i=0;i<size;i++){
//		cout<<"enter number "<<i+1<<":";
//		cin>>arr[i];
//	}
//	for(int i=0;i<size;i++){
//		for(int j=0;j<size;j++){
//			if(arr[i]<arr[j]){
//				//for ascending use < instead of >
//				int temp=arr[i];
//				arr[i]=arr[j];
//				arr[j]=temp;
//			}
//		}
//	}
//	for(int i=0;i<size;i++){
//		cout<<"after sorting number "<<i+1<<":"<<arr[i]<<endl;
//	}
//}
//int main(){
//	int size;
//	cout<<"enter size of array:";
//	cin>>size;
//	int arr1[size];
//	sort(arr1,size);
//}

            //for descending order
//#include<iostream>
//using namespace std;
//void sort(int arr[],int size){
//	for(int i=0;i<size;i++){
//		cout<<"enter number "<<i+1<<":";
//		cin>>arr[i];
//	}
//	for(int i=0;i<size;i++){
//		for(int j=0;j<size;j++){
//			if(arr[i]>arr[j]){
//				//for descending use > instead of <
//				int temp=arr[i];
//				arr[i]=arr[j];
//				arr[j]=temp;
//			}
//		}
//	}
//	for(int i=0;i<size;i++){
//		cout<<"after sorting number "<<i+1<<":"<<arr[i]<<endl;
//	}
//}
//int main(){
//	int size;
//	cout<<"enter size of array:";
//	cin>>size;
//	int arr1[size];
//	sort(arr1,size);
//}



//#include<iostream>
//using namespace std;
//bool search(int arr[],int size,int key){
//	
//	for(int i=0;i<size;i++){
//		
//		if(arr[i]==key){
//			return true;
//		}
//	}
//	return false;
//}
//int main(){
//	int size=5;
//	int arr1[size]={2,3,4,5,6};
//	int key;
//	cout<<"enter number whos are you find:";
//	cin>>key;
//	int find=search(arr1,size,key);
//	if(find == true){
//		cout<<"number is present ";
//	}else{
//		cout<<"number is not present";
//	}
//	
//}











