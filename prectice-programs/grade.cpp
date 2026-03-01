#include<iostream>
using namespace std;
class student{
    private:
    int studentid;
    string name;
    int grade1,grade2,grade3;
    int passingmarks=33;
    int sum;
    public:
    student(){
        grade1=0;
        grade2=0;
        grade3=0;
        studentid=0;
        name="unnamed";
        passingmarks=33;


    }
    student(int id,string name1,int passingmarks1,int grade11,int grade22,int grade33){
        studentid=id;
        name=name1;
        passingmarks=passingmarks1;
        grade1=grade11;
        grade2=grade22;
        grade3=grade33;
    }
 void setgrade(int grade){
          if(0<grade<100){
            
            sum=grade1+grade2+grade3;
            cout<<"ypur grade is"<<sum;
            if(sum>=33){
                cout<<"your are passed..";
            }else{
                cout<<"your are failed..";
            }
          }
 }
 void calcluteaverage(){
    int obtained,total=120;float percentage;
    obtained=grade1+grade2+grade3;
    percentage=(obtained/total)*100;
    cout<<"your average marks is..";
 }
 void display(){
    cout<<"student id is:"<<studentid<<endl;
    cout<<"name:"<<name<<endl;
    cout<<"passing marks:"<<passingmarks;
    cout<<"total number is:"<<sum<<endl;
 }
};
int main(){
    student a1(1111,"faran",33,34,22,33);
    a1.display();
    a1.calcluteaverage();
}