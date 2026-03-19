#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array :";
    cin>>size;
    int* arr=new int[size];
    for (int i = 0; i <size; i++)
    {
        arr[i]=i*10;

        cout<<arr[i]<<" "<<endl;
    }
    delete[] arr; //destroy the array.
    return 0;

}