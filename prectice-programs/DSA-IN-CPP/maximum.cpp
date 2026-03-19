#include<iostream>
using namespace std;
int main(){
    int maxnum;
    int arr[5]={10,23,43,12,32};
    for (int i = 0; i <5; i++)
    {
        if (arr[i]<maxnum)
        {
            maxnum=arr[i];
        }
    }
     cout<<"minimum number is:"<<maxnum;
    return 0;
}