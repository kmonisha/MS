#include"Monitor.h"
#include"System.h"
#include<iostream>
#include<string>
using namespace std;
System::System(){
	_monitorCount = 0;
}
void System::addMonitor(Monitor *monitor_){
	if(_monitorCount < 4){
		_monitors[_monitorCount++] = monitor_;
	}
}	
void System::passInput(string input){
	int i;
	for( i = 0; i < _monitorCount; i++){
		(_monitors[i])->display(input);
	}
}	
