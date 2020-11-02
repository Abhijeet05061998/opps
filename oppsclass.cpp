#include<bits/stdc++.h>
using namespace std;
class Employee{
public:
	string name,id;
	int salary;
	Employee(string name,string id,int salary)
	{
		this->name=name;
		this->id=id;
		this->salary=salary;
	}
	void work()
	{
		cout<<"Employee  "<<this->name<<" id: "<<this->id<<" is Working"<<endl;
	}
};

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif


	Employee*emp=new Employee("Abhijeet kumar","BE15277",53000);

	cout<<"Employee:"<<emp->name<<endl;
	cout<<"id:"<<emp->id<<endl;
	cout<<"salary:"<<emp->salary<<endl;

	emp->work();
	return 0;
}