#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array:";
    cin>>size;
    int arr[size],arr1[size];
    
    for (int i = 0; i <size; i++)
    {
        cout<<"number "<<i+1<<" :";
        cin>>arr[i];
    }
    cout<<"-------------arr[] data is copy-------------"<<endl;
    for (int j = 0; j<size; j++)
    {
        arr1[j]=arr[j];
        cout<<"copy number "<<j+1<<" :"<<arr1[j]<<endl;
        
    }
    return 0;
    
}