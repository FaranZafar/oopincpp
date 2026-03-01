#include<iostream>
using namespace std;
class Employee{
    private:
     int employeeId;
     string name;
     string designation;
     float basesalary;
     float taxrate;
     float deductionlimit;
     public:
     Employee(){
        employeeId=111;
        name="faran";
        designation="engineer";
        basesalary=5000000;
        taxrate=0;
        deductionlimit=1000;
     }
     Employee(int id,string name1,string desig,float salary,float taxrate1,float limit){
        employeeId=id;
        name=name1;
        designation=desig;
        basesalary=salary;
        taxrate=taxrate1;
        deductionlimit=limit;
     }
    void calclutegrosssalary(float bonus){
          basesalary+=bonus;
          cout<<"your salary is:"<<basesalary<<endl;
     }
     void calculatenetsalary(float bonus){
        float taxrate1;
        taxrate1=(taxrate/100)*basesalary;
        basesalary-=taxrate1;
        cout<<"your net salary is:"<<basesalary;
     }
     void display(){
        cout<<"=================="<<endl;
        cout<<"emloyee id:"<<employeeId<<endl;
        cout<<"name :"<<name<<endl;
        cout<<"designation:"<<designation<<endl;
        cout<<"salary:"<<basesalary<<endl;
        cout<<"deductionlimit:"<<deductionlimit<<endl;
     }
};
int main(){
    Employee a1(111,"faran","engineer",2000.0,10.0,1000.0);
    a1.display();
    a1.calclutegrosssalary(5000.0);

    Employee a2(222,"awais","applied chemist",20000.0,5.0,2000);
    a2.display();
    a2.calculatenetsalary(5000);

}