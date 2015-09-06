#ifndef SYSTEM_H
#define SYSTEM_H
#include"Monitor.h"
#include<string>
using namespace std;
class System{

	private:
		 int _monitorCount;
		 Monitor *_monitors[4];
	public:
		System();
		void addMonitor(Monitor *monitor_);
		void passInput(string input);
};
#endif
