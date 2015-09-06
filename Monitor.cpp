#include"Monitor.h"
#include<string>
#include<iostream>
using namespace std;
Monitor::Monitor(string brand_, int size_, Type type_): _brand(brand_), _panel(size_,type_), _monitorCase(size_ * 1.2){
}
void Monitor::display(string input){
	cout<<"Brand is: "<<_brand<<endl;
	_panel.display();
	cout<<"Keyboard input: "<<input<<endl;
}

		
