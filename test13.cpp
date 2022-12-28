#include <iostream>
using namespace std;

int main(){
	int x, y, *p, *q;
	
	cin>>x>>y;
	p = &x;
	q = &y;
	cout<<"x is: "<< x<<".\tx address: "<<p<<endl;
	cout<<"y is: "<< y<<".\ty address: "<<q<<endl;
	
	*p = 50;
	cout<<"x is: "<< x<<".\tx address: "<<p<<endl;
	
	q = p;
	cout<<"y is: "<< y<<".\tq content: "<<*q<<endl;


	return 0;
}