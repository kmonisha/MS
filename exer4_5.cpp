#include<iostream>
using namespace std;

class A{
	char* cp;
	double &dr;
	
	public:
		A(char c, double &r):dr(r){
			cout<<"const"<<endl;
			cp = new char(c);
		}	
		A(const A& a):dr(a.dr){
			cout<<"copy"<<endl;
			cp  = new char(*(a.cp));
			//double tmp = a.dr;
			//dr = tmp;
		} 
		char get() const{
			cout<<"get:"<<cp<<endl;
			return *cp;
		}
		~A(){
			cout<<"dest"<<endl;
				delete cp;
		}
};

A foo(double &d){
	A a('c',d);
	cout<<"foo"<<endl;
	//cout<<"get:"<<a.get()<<endl;
	return a;
}
int main(){
	double d  = 3.14;
		cout<<"mai2"<<endl;
	foo(d).get();	
	//A a('c',d);
	cout<<"mai"<<endl;
	//a.get();
}

