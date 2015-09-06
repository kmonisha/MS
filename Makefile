all: Demo.o Monitor.o Panel.o Case.o System.o Keyboard.o 
	g++ -o all Demo.o Monitor.o Panel.o Case.o System.o Keyboard.o 

Panel.o: Panel.cpp Panel.h
	g++ -c Panel.cpp
System.o: System.cpp System.h Monitor.o
	g++ -c System.cpp
Keyboard.o: Keyboard.cpp Keyboard.h System.o
	g++ -c Keyboard.cpp
Case.o: Case.cpp Case.h 
	g++ -c Case.cpp
Monitor.o: Monitor.cpp Panel.o Case.o
	g++ -c Monitor.cpp
Demo.o: Demo.cpp System.o Keyboard.o Monitor.o Panel.o Case.o
	g++ -c Demo.cpp
