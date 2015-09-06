#ifndef MONITOR_H
#define MONITOR_H
#include"Panel.h"
#include"Case.h"
#include<string>
using namespace std;

class Monitor{
	private:
		string _brand;
		Panel _panel;
		Case _monitorCase;
	public:
		Monitor(string brand_, int size_, Type type_);
		void display(string input);
};
#endif
