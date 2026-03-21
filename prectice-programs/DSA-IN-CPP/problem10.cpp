#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    cout<<"enter number of matrix 3 by 3:"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           
            cin>>arr[i][j];
            cout<<" ";
        }
        // cout<<endl;
    }
    //reverse matrix is
    //here i start from two because 3x3 matix the indexing is 0,1,2
    // so the last digit in the index of 2
    for (int i = 2; i >=0; i--)
    {
        for (int j = 2; j>=0; j--)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}