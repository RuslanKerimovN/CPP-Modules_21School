#include "Data.h"

uintptr_t serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
    return reinterpret_cast<Data*>(raw);
}

int main() {
    Data *data = new Data;
    Data *testing;
    data->t = 'g';
    data->integer = 55;
    data->c = 'r';

    uintptr_t ptrTest = serialize(data);
//    char *s = reinterpret_cast<char*>(ptrTest);
//    std::cout << *s << std::endl;
//    int *ss = reinterpret_cast<int*>(s);
//    ss++;
//    std::cout << *ss << std::endl;
//    ss++;
//    char *sss = reinterpret_cast<char*>(ss);
//    std::cout << *sss << std::endl;

    std::cout << "<<SERIALIZE OBJECT>>" << std::endl;
    std::cout << ptrTest << std::endl;

    testing = deserialize(ptrTest);

    std::cout << "<<TEST>>" << std::endl;
    std::cout << "copy ->" << testing->t << ", original -> " << data->t << std::endl;
    std::cout << "copy ->" << testing->integer << ", original -> " << data->integer << std::endl;
    std::cout << "copy ->" << testing->c << ", original -> " << data->c << std::endl;

    delete data;
    return 0;
}
