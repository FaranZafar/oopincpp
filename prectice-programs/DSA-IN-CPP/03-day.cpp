//conditional statements
#include<iostream>
using namespace std;
int main(){
    // int a=-12;
    // if(a>=0){
    //     cout<<"number is positive";
    // }else{
    //     cout<<"number is negtive";
    // }
    // int age;
    // cout<<"enter age:";
    // cin>>age;
    // if(age>=18){
    //     cout<<"you can vote";
    // }else{
    //     cout<<"you cannot vote";
    // }
    // int a;
    // cout<<"enter number:";
    // cin>>a;
    // if(a%2==0){
    //     cout<<"number is even";
    // }else if(a==0){
    //     cout<<"number is 0";
    // }else{
    //     cout<<"number is odd";
    // }
    // return 0;
    //find chacracter lowercase or uppercase
    // char ch;
    // cout<<"enter character:";
    // cin>>ch;
    // if(ch>='a' && ch<='z'){
    //     cout<<"character is lowercase"; //small =97...
    // }else if(ch>='A' && ch<='Z'){    //capital = (65-90)
    //     cout<<"character is upercase";
    // }else{
    //     cout<<"error";
    // }
    // int sum=0;
    // for(int i=0;i<=6;i++){
    //     if(i%2!=0){
    //         cout<<i<<endl;
    //         sum+=i;
    //     }
    // }
    // cout<<"sum = "<<sum;
    // int count=1,sum=0;
    // while(count<=6){
    //     if(count%2!=0){
    //        cout<<count<<endl;
    //        sum+=count;
    //     }
    //     count++;
    // }
    // cout<<"sum = "<<sum;
    //========even number sum;
    // int sum=0,n;
    // cout<<"enter number to sum even number only:";
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //    if(i%2==0){
    //     cout<<i<<endl;
    //     sum+=i;
    //    }
    // }
    // cout<<"sum ="<<sum;
    //prime number
    int n;
    bool isPrime =true;
    cout<<"enter number to check prime:";
    cin>>n;

    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            isPrime=false;
            break;
        }
    }
    if(isPrime == true){
        cout<<"prime number";
    }else{
        cout<<"non-prime number";
    }
}