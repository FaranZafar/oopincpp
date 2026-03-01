#include<iostream>
using namespace std;
class librarybook{
    private:
    string isbn;
    string title;
    string authore;
    int copies=15;
    int availablecopies=10;
    int loanperiad;
    public:
    librarybook(){
        isbn="000-000";
        title="unknown";
        copies=15;
        availablecopies=10;
        loanperiad=0;
    }
    librarybook(string isbn1,string title1, string authore1){
        isbn=isbn1;
        title=title1;
        authore=authore1;
        
    
    }
   void checkout(){
        
    if (availablecopies>0){
        cout<<"the book is avaiable.."<<endl;
        availablecopies-=1;
        cout<<"remaining books is:"<<availablecopies;
    }else{
        cout<<"the book is not available..";
    }
   }
   void returnbook(){
        if(availablecopies>0){
            cout<<"book is return successfully"<<endl;
            availablecopies+=1;
            cout<<"remaining books:"<<availablecopies;

        }else{
            cout<<"book is not available..";
        }

   }
   void display(){
    cout<<"title is:"<<title<<endl;
    cout<<"authore is:"<<authore<<endl;
    cout<<"total copiese:"<<copies<<endl;
    cout<<"available copiese:"<<availablecopies<<endl;

   }
};
int main(){
    librarybook a1("1111111111","faranpannu","faran");
    a1.display();
    a1.returnbook();
}