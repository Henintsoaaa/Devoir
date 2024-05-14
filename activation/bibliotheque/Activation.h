#ifndef __POINT__
#define __POINT__
using namespace std;
#include <iostream>
#include <fstream>
#include <string>

class Activation
{
private:
    string code = "ABCD";
    int point;
    bool status = false;

public:
    Activation();
    ~Activation();
    int getPoint();
    bool verifyActivation();
    bool getStatus();
    void activate();
};

#endif