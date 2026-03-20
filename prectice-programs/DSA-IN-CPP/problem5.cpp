#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cout<<"enter the size of the array :";
    cin>>size;
    int arr[size];
    //input for loop
    for (int i = 0; i <size; i++)
    {
        cout<<"number "<<i+1<<":";
        cin>>arr[i];
    }
    cout<<"\nindex\tValue\tHistogram"<<endl;
    //output loop
    for (int i = 0; i < size; i++)
    {
        cout<<i<<"\t"<<arr[i]<<"\t";
        //histogram loop
        for (int j = 0; j< arr[i]; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}