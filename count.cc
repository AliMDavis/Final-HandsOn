#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <cctype>
#include <stdio.h>


using namespace std;


int countLine(string text)
{
    int lineCounter;

    
}


int countChar(char *text)
{
    int charCounter;
    string s = text;
        charCounter = s.size();

    return charCounter;

}

int main(int argc, char **argv)
{
    cout << countChar(argv[1]) << " Lines" << endl;
    return 0;
}