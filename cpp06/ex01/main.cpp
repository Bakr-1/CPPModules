#include  "Serialization.hpp"

int main()
{
    Data* data = new Data;
    data->data_Integer = 42;
    data->data_Float = 42.42f;
    data->data_Double = 42.42;
    data->data_Char = 'A';
    std::cout << "data: " << data << std::endl;
    std::cout << "data->data_Integer: " << data->data_Integer << std::endl;
    std::cout << "data->data_Float: " << data->data_Float << std::endl;
    std::cout << "data->data_Double: " << data->data_Double << std::endl;
    std::cout << "data->data_Char: " << data->data_Char << std::endl;
    uintptr_t raw = serialize(data);
    std::cout << "raw: " << raw << std::endl;
    Data* data2 = deserialize(raw);
    std::cout << "data2->data_Integer: " << data2->data_Integer << std::endl;
    std::cout << "data2->data_Float: " << data2->data_Float << std::endl;
    std::cout << "data2->data_Double: " << data2->data_Double << std::endl;
    std::cout << "data2->data_Char: " << data2->data_Char << std::endl;
    delete data;
    return 0;
}