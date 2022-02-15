#include "rk4.h"

int main()
{
    ode_test ode;

    for(int i  = 0; i < 100;i++)
    {
        ode.do_rk4();
    }
}