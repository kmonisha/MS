#include "Panel.h"
#include<iostream>
using namespace std;
Panel::Panel(int size_, Type type_) : _size(size_),_type(type_){
}
void Panel::display(){
	cout<<"size :"<<_size<<endl<<"Type: "<<type[_type]<<endl;
}
		
