# boost_odeint_practice

To use Eigen

```
sudo ln -s /usr/include/eigen3/Eigen /usr/include/Eigen
```

Execute rk_main

```
ode_test$ mkdir build
```

```
ode_test$ cd build
```

```
ode_test/build$ cmake ..
```

```
ode_test/build$ ./rk4_main
```

system dynamics

dsdt = A*s + u --> Free function

