#include <iostream>
#include <fstream>
#include "module/logger.h"
using namespace std;


int main () {
    FileLogger logger;
    
    logger.write("Program started");
    logger.write("User logged in");
    logger.write("Program running");
}