#include <stdint.h>
#include <iostream>
#include "Data.hpp"
#include "Serialization.hpp"
#include <typeinfo>

void serializeTest()
{
    Data* data = new Data();

    // uintptr_t unintptr = Serializer::serialize(data);
    // std::cout << unintptr;  //outout : 105690555219984
    Data *d = Serializer::deserialize( 105690555219984);

    if (data == d)
        d->print();
    else
        std::cout << "Serialization and Deserialization Failed!" << std::endl;
    // std::cout << unintptr << std::endl;
    delete d;
}

void failedTest()
{
    Data *data = new Data();
    Data *data3 = new Data();
    Data *data2 = Serializer::deserialize(Serializer::serialize(data3));

    if (data == data2)
        std::cout << "Serialization and Deserialization Successful!" << std::endl;
    else
        std::cout << "Serialization and Deserialization Failed!" << std::endl;
    
    delete data;
    delete data3;
}

void validTest()
{
    Data *data = new Data();
    Data *data2 = Serializer::deserialize(Serializer::serialize(data));

    if (data == data2)
        std::cout << "Serialization and Deserialization Successful!" << std::endl;
    else
        std::cout << "Serialization and Deserialization Failed!" << std::endl;
    
    delete data;
}

void AddTest()
{

    Data *data = new Data();
    uintptr_t uintptr = Serializer::serialize(data);
    Data* date2 = Serializer::deserialize(uintptr);

    date2->print();
    delete Serializer::deserialize(uintptr);
}

int main()
{
     serializeTest();
}