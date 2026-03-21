#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array:";
    cin>>size;
    int arr[size];
    for (int i = 0; i <size; i++)
    {
        cout<<"Number "<<": "<<endl;
        cin>>arr[i];
    }
    //sort array
   for (int i = 0; i <size; i++)
   {
     for (int j = 0; j <size; j++)
     {
        if (arr[j]<arr[i])
        {
            int temp=0;
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
        
     }
     
   }
   //output loop
   for (int  i = 0; i <size; i++)
   {
    cout<<"number "<<i+1<<": "<<arr[i]<<endl;
   }
   
   
    
}