//что выведется на экран(решать без запуска), почему.

/*
задача ни понимание переопределения функций, фиртуальные функции, позднее и раннее связывание,  конструкция using
*/
#include <cstdlib> 
#include <iostream> 

using std::cout; 
using std::endl; 

class A { 
	public: 
		void f(int a) { cout « "A::f()" « endl; } 	
}; 

class B : public A { 
	public: 
		using A::f; 
		void f(double a) { cout « "B::f()" « endl;} 
}; 

int main() { 
	B * bPtr = new B(); 
	bPtr->f(1); 
	bPtr->f(1.2); 
	delete bPtr; 
	return EXIT_SUCCESS; 
}
