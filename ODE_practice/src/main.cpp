#include "rk4.h"

int main()
{
    ode_test ode;

    state_type s;
    state_type dsdt;
    double t;


    for(int i  = 0; i < 100;i++)
    {
        ode.do_rk4();
        ode.get_time(&t);
        ode.get_state(s);
        ode.get_dstate_dt(dsdt);
        cout<<"Time: "<<t<<"\t";
        cout<<"state: "<<s(0)<<"\n";

    }
    cout<<"Finish"<<"\n";
    return 0;
}