#include <iostream>
#include <string>
#include <math.h>

#define FLOAT_MIN   1.175494351e-38
#define FLOAT_MAX   3.402823466e+38
#define DOUBLE_MIN  2.2250738585072014e-308
#define DOUBLE_MAX  1.7976931348623158e+308

int main(int argc, char **argv) {
    if (argc != 2)
        return 0;

    std::string string = argv[1];
    
    {
        int result;
        std::cout << "char: ";
        try {
            result = std::stoi(string);
            if (result < -128 || result > 127)
                std::cout << "impossible" << std::endl;
            else if (!isprint(result))
                std::cout << "Non displayable" << std::endl;
            else
                std::cout << "'" << static_cast<char>(result) << "'" << std::endl;
        } catch (const std::exception &ex) {
            std::cout << "impossible" << std::endl;
        }
    }

    {
        int result;
        std::cout << "int: ";
        try {
            result = std::stoi(string);
            if (result > 2147483647 || result < -2147483648)
                std::cout << "impossible" << std::endl;
            else
                std::cout << static_cast<int>(result) << std::endl;
        } catch (const std::exception &ex) {
            std::cout << "impossible" << std::endl;
        }
    }

    {
        float result;
        double d;
        std::cout << "float: ";
        try {
            d = std::stod(string);
            result = round(static_cast<float>(d));
            if (result > FLOAT_MAX || result < FLOAT_MIN || isnan(result))
                std::cout << result << std::endl;
            else
                std::cout << result << ".0f" << std::endl;
        } catch (const std::exception &ex) {
            std::cout << "impossible" << std::endl;
        }
    }

    {
        double result;
        std::cout << "double: ";
        try {
            result = round(std::stod(string));
            if (result > DOUBLE_MAX || result < DOUBLE_MIN || isnan(result))
                std::cout << result << std::endl;
            else
                std::cout << static_cast<float>(result) << ".0" << std::endl;
        } catch (const std::exception &ex) {
            std::cout << "impossible" << std::endl;
        }
    }

    return 0;
}
