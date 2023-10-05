#include "Bureaucrat.hpp"

void validTest()
{
    std:: cout << "\n\n_____________________Valid Test_________________\n\n";

    try
    {
        Bureaucrat b;

        b.setGrade(1);
        b.setName("Valid");
        std::cout << b << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void LowExcTest()
{
    std:: cout << "\n\n_____________________Low Exception_________________\n\n";
    try
    {

        Bureaucrat b("Low", 155);
        std::cout << b << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void HieghExcTest()
{
    std:: cout << "\n\n_____________________Hiegh Exception_________________\n\n";
    try
    {

        Bureaucrat b("Hiegh", 0);
        std::cout << b << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void IncTest()
{
    std:: cout << "\n\n_____________________Increment Test_________________\n\n";
    try
    {

        Bureaucrat b("Ayoub", 5);
        b.incrementGrade();
        std::cout << b;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void InvalidIncTest()
{
    std:: cout << "\n\n_____________________valid Increment test_________________\n\n";
    try
    {

        Bureaucrat b("Ayoub", 1);
        b.incrementGrade();
        std::cout << b;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void DecTest()
{
    std:: cout << "\n\n_____________________Dicrement Test_________________\n\n";
    try
    {

        Bureaucrat b("Ayoub", 5);
        b.dicrementGrade();
        std::cout << b;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void InvalidDecTest()
{
    std:: cout << "\n\n_____________________Invalid increment test_________________\n\n";
    try
    {
        Bureaucrat b("Ayoub", 150);
        b.dicrementGrade();
        std::cout << b;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void additionalTest()
{
    std::cout << "\n\n_________________________Additional test__________________________\n\n";
    try
    {
        Bureaucrat b("Ayoub", 149);
        b.dicrementGrade();
        b.incrementGrade();
        b.incrementGrade();
        std::cout << b;
    }
    catch(const std::exception& e)
    {
        std::cout << "Grade too high error:\n\n";
        std::cout << e.what() << std::endl;
    }
}

int main()
{
    validTest();
    LowExcTest();
    HieghExcTest();
    IncTest();
    InvalidIncTest();
    DecTest();
    InvalidDecTest();
    additionalTest();
}