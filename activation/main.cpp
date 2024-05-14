#include <iostream>
#include <string>
#include "bibliotheque/Activation.h"
using  namespace std;
int main()
{
    Activation test = Activation();
    if (test.getStatus() == false)
    {
        test.verifyActivation();
    }
    if (test.getPoint() > 0)
    {

        if (test.getStatus() == true)
        {
            cout << "Hello world" << endl;
        }
        else
        {
           cout << "You didn't pay" << endl;
        }
    }
    else
    {
       cout << "You didn't pay, Pay a licence." << endl;
    }
    return 0;
}