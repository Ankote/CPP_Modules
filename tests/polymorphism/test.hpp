#include <iostream>

class A
{
    public :
        virtual void Display()
        {
            std::cout << "Hii Hoo  I am the Base Class!!!!!!!" << std::endl;
        }
};

class B : public A
{
    public :
            void Display()
            {
                std::cout << "Hii Hoo  I am derived  Class BBBBB!!!!!!!" << std::endl;
            }
};

class C
{
    public :
            void Display()
            {
                std::cout << "Hii Hoo  I am derived  Class CCCCC!!!!!!!" << std::endl;
            }
};


