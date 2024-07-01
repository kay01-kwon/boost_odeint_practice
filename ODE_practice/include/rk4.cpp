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

void ode_test::do_rk4()
{
    rk4.do_step(
        ode_test(),
        s,t,dt);
    t = t+dt;
    // cout<<"Time : "<<t<<" position :"<<s(0)<<endl;
}

void ode_test::get_state(state_type& s_)
{
    s_ = s;
}

void ode_test::get_dstate_dt(state_type& dsdt_)
{
    dsdt_ = dsdt;
}

void ode_test::get_time(double* t_ptr)
{
    *t_ptr = t;
}

// void ode_test::system_dynamics(state_type &s, state_type &dsdt, double t)
// {
//     dsdt = A*s + u;
// }

void ode_test::operator()(const state_type &s, state_type &dsdt, const double t)
{
    dsdt = A*s + u;
}

ode_test::~ode_test()
{

}


