#include<iostream>
using namespace std;
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int key;
    cout<<"enter the key to search :";
    cin>>key;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == key)
        {
            cout<<"key found at index :"<<i;
            return 0;
        }
    }
    cout<<"key not found";
    return 1;
}