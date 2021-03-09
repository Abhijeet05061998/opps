#include<bits/stdc++.h>
using namespace std;


class Employee{
protected:
	int salary;
};
class prog:public Employee{
public:
	int bonus=10;

	void setsalry(int x)
	{
		salary=x;
	}
	int getsalary()
	{
		return salary;
	}
};
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
   prog obj;
   obj.setsalry(100000);
   cout<<obj.getsalary()<<endl;
	cout<<obj.bonus<<endl;
	
