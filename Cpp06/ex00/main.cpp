#include <iostream>
#include <string>
#include <cstdlib>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Wrong Number of Arguments" << std::endl;
        return -1;
    }
    std::string tmp = static_cast<std::string>(argv[1]);
    if (tmp == "nan" || tmp == "inf" || tmp == "+inf" || tmp == "-inf")
        std::cout << "int: " << "impossible" << std::endl;
    else if (isprint((char)std::atoi(tmp.c_str())))
        std::cout << "char: " << static_cast<char>(std::atoi(tmp.c_str())) << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    
    if (tmp == "nan")
        std::cout << "int: " << "impossible" << std::endl;
    else if (tmp == "inf" || tmp == "+inf")
        std::cout << "int: " << "+inf" << std::endl;
    else if (tmp == "-inf")
        std::cout << "int: " << "-inf" << std::endl;
    else
        std::cout << "int: " << std::atoi(tmp.c_str()) << std::endl;
    std::cout << "float: " << std::atof(tmp.c_str()) << (std::atof(tmp.c_str()) - std::atol(tmp.c_str()) == 0 ? ".0" : "")  << 'f' << std::endl;
    std::cout << "double: " << std::atof(tmp.c_str()) << (std::atof(tmp.c_str()) - std::atol(tmp.c_str()) == 0 ? ".0" : "") << std::endl;
    return 0;
}