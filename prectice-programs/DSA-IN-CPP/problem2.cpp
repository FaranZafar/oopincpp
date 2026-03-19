#include<iostream>
using namespace std;
int reverse(int a){
    int rev=0;//use separate variavles to store the result
    int digit;
    while (a>0)  //loop untill the all digits processed
    {
         digit=a%10;  //get the last digit
         rev=(rev*10)+digit; // add to the reverse digit
         a=a/10; //remove the last digit
    }
    
   
    return rev;
}
int main(){
  int num;
  cout<<"enter three digit number:";
  cin>>num;
  cout<<"reverse of number is :"<<reverse(num);
}