#include"System.h"
#include"Keyboard.h"
#include<iostream>
#include<string>
using namespace std;
void Keyboard::associateToSys(System *system_){
	_system = system_;
}
void Keyboard::getInput(string input){
	_system->passInput(input);
}

