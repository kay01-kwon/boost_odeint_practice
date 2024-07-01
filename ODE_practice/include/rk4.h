#ifndef RK4_H
#define RK4_H

#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>
#include <boost/lambda/lambda.hpp>
#include <boost/numeric/odeint.hpp>
#include <boost/numeric/odeint/external/eigen/eigen.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>
// #include <gnuplot-iostream.h>

using boost::numeric::odeint::runge_kutta4;
using std::cout;
using std::endl;

typedef Eigen::Matrix<double,2,1> state_type;
using Eigen::Matrix2d;

class ode_test{

    public:

        ode_test();
        
        void do_rk4();

        void get_state(state_type& s_);

        void get_dstate_dt(state_type& dsdt_);

        void get_time(double* t);

        ~ode_test();

        state_type s;
        state_type u;
        state_type dsdt;

        void system_dynamics(state_type &s_, state_type &dsdt_, double t);

        void operator()(const state_type &s, state_type& dsdt, const double t);

    private:

        double t;
        double dt;

        Matrix2d A;


        runge_kutta4< state_type > rk4;

};


#endif