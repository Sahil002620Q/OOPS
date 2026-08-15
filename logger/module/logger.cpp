#include <iostream>
#include <fstream>
#include "logger.h"
// using namespace std;

FileLogger::FileLogger()
{
    std::cout << "logger started \n" ;
    file.open("log.txt");
    
}

FileLogger::~FileLogger()
{
    file.close();
    std::cout << "logger stopped ";
}

void FileLogger::write(std::string message)
{
    // this->message = message; //not necessary here as it is directly usable
    file << message << std::endl ;
}

