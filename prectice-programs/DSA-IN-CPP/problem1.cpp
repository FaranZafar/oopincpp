#include<iostream>
//short for input,output stream
#include<fstream>
//short for file stream.this is the most importent library for this program.
#include<string>
//allows us to use string data type to store data like student name etc
using namespace std;
int main(){
    string name,degree;
    int rollNo,sizeofarray,choice;
    while (true)
    {
        //displaying the manu
        cout<<"---student database system ---------"<<endl;
        cout<<"1.display all Data"<<endl;
        cout<<"2.Enter New Data "<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"Enter your choice :";
        cin>>choice;
        if (choice==1)
        {
            ifstream inFile("students.txt");
            if(!inFile){
                cout<<"No data file found. please enter data first."<<endl;
                continue;
            }
            cout<<"---------current students Record----------"<<endl;
            //read untill the end of the file
            while (inFile>>name>>degree>>rollNo)
            {
                cout<<"Name: "<<name<<"|Degree: "<<degree<<"|RollNo: "<<rollNo<<endl;

            }
            inFile.close();
            cout<<"------------------------------"<<endl;
        }else if(choice==2){
            //ios::app allows you to add new data without deleting old data
            ofstream outFile("students.txt",ios::app);
            if(!outFile){
                cout<<"Error opening file!"<<endl;
                continue;
            }
            cout<<"enter the total number of student :";
    cin>>sizeofarray;
    cout<<"enter data of student:";
   
    for (int i = 0; i <=sizeofarray-1; i++)
    {
        cout<<"\nStudent "<<i+1<<" Name:";
        cin>>name;
        cout<<"Student "<<i+1<<" Degree:";
        cin>>degree;
        cout<<"Student "<<i+1<<" RollNo:";
        cin>>rollNo;
        //writing to the file
        outFile<<name<<""<<degree<<""<<rollNo<<endl;
        outFile.close(); //close after writing
        cout<<"data is successfully entered"<<endl;
    }

        }else if (choice==3)
        {
            cout<<"Exiting program..."<<endl;
            break;
        }else{
            cout<<"invalid choice!please try again."<<endl;
        }
        
        

    }
   return 0;       
}