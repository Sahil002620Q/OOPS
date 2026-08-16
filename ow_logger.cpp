#include <iostream>
#include <fstream>
using namespace std;

class FileLogger 
{
    private:

        ofstream file;
        string message;

    public:

        FileLogger(){
            cout << "logger started \n" ;
            file.open("log.txt");
        }

        ~FileLogger(){
            file.close();
            cout << "logger stopped ";
        }

        void Message(string message){
            this->message = message;
            file << message << endl ;
        }
};

int main () {
    FileLogger logger;

    logger.Message("Program started");
    logger.Message("User logged in");
    logger.Message("Program running");
}