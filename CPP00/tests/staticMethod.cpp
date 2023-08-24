#include <iostream>

class Person
{
    public :
	    static void sayHello()
	    {
		    std::cout<< "Hello world";    
	    }	
};

int main()
{ 
   Person::sayHello();	
}

