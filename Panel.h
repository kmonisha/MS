#ifndef PANEL_H
#define PANEL_H
enum Type{LED,LCD,PLASMA};
class Panel{
	private:
		int _size;
		Type _type;
	public:
		Panel(int size_, Type type_);
		void display();
};
#endif
		
