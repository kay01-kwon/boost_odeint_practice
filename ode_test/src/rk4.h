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

using boost::numeric::odeint::runge_kutta4;
using std::cout;
using std::endl;

typedef Eigen::Matrix<double,2,1> state_type;
using Eigen::Matrix2d;

void system_dynamics(state_type &s, state_type &dsdt, double t);

class ode_test{

    public:

        ode_test();
        
        void do_rk4();

        ~ode_test();

        Matrix2d A;
        state_type u;

    private:

        double t;
        
        double dt;

        state_type s;

        runge_kutta4< state_type > rk4;

};

#endif