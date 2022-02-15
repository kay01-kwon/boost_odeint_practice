#include "rk4.h"

ode_test::ode_test()
{
    A.setZero();
    A(0,1) = 1;
    u<<0,1;
    t = 0;
    dt = 0.01;
    s.setZero();
}

void system_dynamics(state_type &s, state_type &dsdt, double t)
{
    ode_test ode;
    
    dsdt = ode.A*s + ode.u;
}

void ode_test::do_rk4()
{
    rk4.do_step(system_dynamics,s,t,dt);
    t = t+dt;
    cout<<"Time : "<<t<<" position :"<<s(0)<<endl;
}

ode_test::~ode_test()
{

}