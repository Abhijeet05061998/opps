#include<bits/stdc++.h>
using namespace std;


int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r", stdin);
  freopen("output.txt", "w", stdout);
  #endif

	try
	{
		int age=15;
		if(age>18)
		{
			cout<<"You are eligible for this test"<<endl;
		}
		else
		{
			throw 404;
		}
	}
	catch(int num)
	{
		cout<<"Acess Denied:-you must be atleat 18 year old for  eligiblity"<<endl;
		cout<<"Error Number:-"<<num;
	}
}