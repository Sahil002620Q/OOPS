#ifndef LOGGER
#define LOGGER  //or use pragma once but then you have to import  iostream too

class FileLogger 
{
    private:
        std::ofstream file;
        std::string message;

    public:
        FileLogger();
        ~FileLogger();
        void write(std::string message);
};

#endif