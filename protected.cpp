#include<bits/stdc++.h>
using namespace std;
//base class
class parent
{
protected:
	int emp_id;
};

//Derived class
class child: public parent
{
public:

	void setId(int x)
	{
		emp_id=x;
	}
	void ans()
	{
		cout<<"Emp_id : "<<emp_id;
	}

};
int main()

{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
   child p;
   p.setId(10);
   p.ans();
}