#include "Activation.h"

bool Activation::verifyActivation()
{
    std::ifstream fs("code.txt");
    if (fs.fail())
    {
        std::cout << "fichier d'activation introuvable" << std::endl;
        return false;
    }
    else
    {
        std::string key;
        fs >> key;
        fs.close();
        if (key == code)
        {
            std::cout << "Activation OK" << std::endl;
            activate();
            return true;
        }
        else
        {
            std::string s;
            std::ifstream tryFyle("tentative.txt");
            tryFyle >> s;
            tryFyle.close();
            int i = std::stoi(s), value;
            std::ofstream w("tentative.txt");
            value = (i - 1);
            w << value;
            w.close();
            return false;
        }
    }
}

void Activation::activate()
{
    std::ofstream fs("tentative.txt");
    fs << "activated";
    status = true;
    fs.close();
}

Activation::Activation()
{
    std::string i;
    std::ifstream fs("tentative.txt");
    if (fs.fail())
    {
        std::cout << "tentative.txt introuvable" << std::endl,
            point = 0;
    }
    else
    {
        fs >> i;
        if (i == "activated")
        {
            status = true;
        }
        else
        {
            point = std::stoi(i);
        }
        fs.close();
    }
}

Activation::~Activation()
{
}

bool Activation::getStatus()
{
    return status;
}

int Activation::getPoint()
{
    return point;
}