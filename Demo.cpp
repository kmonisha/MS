#include<string>
#include"Monitor.h"
#include"System.h"
#include"Keyboard.h"
using namespace std;

int main(){
	Type type1 = LCD;
	Type type2 = PLASMA;
	Type type3 = LED;

	Monitor monitor1("SAMSUNG", 24, type1);
	Monitor monitor2("DELL", 14, type2);
	Monitor monitor3("HP", 21, type3);
	Monitor monitor4("ACER", 21, type3);

	System system;
	system.addMonitor(&monitor1);

	Keyboard keyboard;
	keyboard.associateToSys(&system);
	string input;
	getline(cin,input);
	keyboard.getInput(input);

	system.addMonitor(&monitor2);
	system.addMonitor(&monitor3);
	system.addMonitor(&monitor4);

	getline(cin,input);
	keyboard.getInput(input);
	//monitor.display();
	
}
