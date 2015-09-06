#include<iostream>
using namespace std;

class A{
	static A *inst;
	static int val;
	const int max;
	int x;
	A(int x_int, int max_init):x(x_int),max(max_init){
	}
	public:
		static A* instance(int,int);
		 
		void display() const;
		int getVal();
};
A* A::inst = NULL;
void A::display() const{
	cout<<val<<endl;
	cout<<max<<endl;
	cout<<x<<endl;
}
	
A* A::instance(int x, int y){
	if(val == 0){
		A a(x,y);
		val++;
		inst = &a;
		
	}	
	return inst;
}

int A::getVal(){
	return val;
}
int A::val = 0;

int main(){
	A *d = A::instance(10,20);
	d->display();
	A *g = A::instance(11,22);
	g->display();
	
/*	A a(10,100);
	a.display();
	cout<<a.getVal();
	A s(10,101);
	s.display();*/
}


