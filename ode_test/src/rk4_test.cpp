#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>
#include <boost/lambda/lambda.hpp>
#include <boost/numeric/odeint.hpp>
#include <boost/numeric/odeint/external/eigen/eigen.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace boost::numeric::odeint;
using namespace std;

typedef Eigen::Matrix<double,2,1> state_type;
using Eigen::Matrix2d;



void sys(state_type &y, state_type &dydx, double x)
{

    Matrix2d A;
    state_type u;
    A.setZero();
    A(0,1) = 1;
    u<<0,1;

    dydx = A*y + u;
}

int main(){
    
    state_type y(2);

    runge_kutta4< state_type > rk4;
    y<<0,0;
    

    double x = 0;
    double h = 0.1;
    for (int i = 0; i < 100; i++,x+=h){
        rk4.do_step(sys,y,x,h);
        cout << "Time : ";
        cout << x+h;
        cout << ",";
        cout<<"state : ";
        cout << y(1); 
        cout << endl;
    }

}
