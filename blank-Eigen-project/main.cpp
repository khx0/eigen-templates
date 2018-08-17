/*
 * file: main.cpp
 * author: Nikolas Schnellbächer
 * contact: khx0@posteo.net
 * date: 2018-08-17
 */

#include <iostream>
#include <fstream>
#include <sstream>
#include <random>
#include <ctime>
#include <cmath>

#include <Eigen/Dense>

int main(int argc, char *argv[])
{
    //////////////////////////////////////////////////////////////////////////////////////
    std::cout << "Using Eigen version: "
              << EIGEN_WORLD_VERSION << "."
              << EIGEN_MAJOR_VERSION << "."
              << EIGEN_MINOR_VERSION << std::endl;
    //////////////////////////////////////////////////////////////////////////////////////
    
    Eigen::Vector3d b1(1.0, 0.0, 0.0);
    Eigen::Vector3d b2(0.0, 0.0, 1.0);
    
    std::cout << b1.transpose() << std::endl;
    std::cout << b2.transpose() << std::endl;
    
    std::cout << "normal termination" << std::endl;
    return 0;
}
