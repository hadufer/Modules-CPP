#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Wrong number of arguments!\n";
        return -1;
    }
    std::string fileName = argv[0];
    fileName = fileName + ".replace";
    std::ofstream fileO;
    std::ifstream fileI;
    fileI.open(argv[1]);
    fileO.open(fileName.c_str());
    if (!fileO.is_open())
    {
        std::cout << "File can't be created\n";
        return -1;
    }
    std::string buffRead;
    std::string buffToWrite;
    while (std::getline(fileI, buffRead))
    {
        for (size_t i = 0; i < buffRead.size(); i++)
        {
            if (strcmp(buffRead.c_str() + i, argv[3]) == 0)
            {
                // std::cout << "IN" << std::endl;
                i += strlen(argv[3]) - 3;
            }
            else
            {
                buffToWrite.push_back(buffRead[i]);
            }
        }
        std::cout << buffToWrite;
    }
}