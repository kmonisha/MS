#ifndef KEYBOARD_H
#define KEYBOARD_H
#include"System.h"
#include"Keyboard.h"
#include<iostream>
#include<string>
using namespace std;
class Keyboard{
	private:
		System *_system;
	public:
		void associateToSys(System *system_);
		void getInput(string input);
};
#endif
