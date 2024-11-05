#include "Serializer.hpp"

int main()
{
    Data *data = new Data;
    data->c = 'Z';
    data->integer = 101;
    data->str = "String";

    uintptr_t raw = Serializer::serialize(data);
    Data *newData = Serializer::deserialize(raw);

    ///  DATA ADDRESS  ///
    std::cout << "Data address: " << data << std::endl;
    std::cout << "Converted Data address: " << raw << std::endl;
    std::cout << "Reconverted in address format: " << newData << std::endl;   

    delete data;

    return 0;
}