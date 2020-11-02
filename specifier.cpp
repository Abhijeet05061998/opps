#include <bits/stdc++.h>
using namespace std;

class Circle
{   
    //private data member
    private: 
        double radius;
     
    //public member functions
    public:
        int getRadius()
         {
         cout<<"Radius: "<<radius;
         }
        void setRadius(double r) 
        { 
        	radius = r; 
        }
        double compute_area() 
        { 
        	cout<<"Area: "<< 3.14 * radius * radius;
        }
};

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
    Circle* obj=new Circle();
    
    obj->setRadius(5);
    obj->getRadius();
    cout<<endl;
    obj->compute_area();
    
    return 0;
}