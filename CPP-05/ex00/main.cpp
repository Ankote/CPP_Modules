#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b("Ayoub", 1);
        b.dicrementGrade();
        b.incrementGrade();
        // b.incrementGrade();
        std::cout << b;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}