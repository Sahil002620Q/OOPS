#ifndef LOGGER
#define LOGGER
//or use pragma once

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