#include <iostream>
using namespace std;
class Accounts
{
	private:
		int current_balance=40000;
		int sum=0;
		int remaining_balance=0;
		
	public:
	void display(int array[],int size)
	{
	   cout<<"--------DATA SHEET --------"<<endl;
	
		for(int i=0;i<size;i++)
		{
			sum+=array[i];
			
			
		}
		remaining_balance = current_balance-sum;
		cout<<"total data for expenses is ="<<sum<<endl;
		cout<<"your remaining balance is ="<<remaining_balance;
	}	
};
int main()
{
	int size;
	cout<<"enter your data for expenses = ";
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cout<<"enter data for your expenses "<<i+1<<":";
		cin>>arr[i];
	}
	Accounts acc;
	acc.display(arr,size);
}
