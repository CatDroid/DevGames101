#include<cmath>
#include<Eigen/Core>
#include<Eigen/Dense>
#include<iostream>

int main(){

    // Basic Example of cpp
    std::cout << "Example of cpp \n";
    float a = 1.0, b = 2.0;
    std::cout << a << std::endl;
    std::cout << a/b << std::endl;
    std::cout << std::sqrt(b) << std::endl;
    std::cout << std::acos(-1) << std::endl; // = π  3.14159  得到的是弧度
    std::cout << std::sin(30.0/180.0*acos(-1)) << std::endl; // acos(-1) 就是 π

    // Example of vector
    std::cout << "Example of vector \n";
    // vector definition
    Eigen::Vector3f v(1.0f,2.0f,3.0f); // 列向量  typedef Matrix <float，3,1> Vector3f ; 
    Eigen::Vector3f w(1.0f,0.0f,0.0f);
	Eigen::RowVector3f u(1.0f, 2.0f, 3.0f); // 行向量  向量只是特殊的矩阵, 用矩阵的模板实现 
	// typedef Matrix <float，1,3> Eigen::RowVector3f 一行三列

    // vector output
    std::cout << "Example of output \n";
    std::cout << v << std::endl;
	std::cout << u << std::endl;
    // vector add
    std::cout << "Example of add \n";
    std::cout << v + w << std::endl;
    // vector scalar multiply
    std::cout << "Example of scalar multiply \n";
    std::cout << v * 3.0f << std::endl;
    std::cout << 2.0f * v << std::endl;

    // Example of matrix
    std::cout << "Example of matrix \n";
    // matrix definition
    Eigen::Matrix3f i,j;
    i << 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0; // 行主序 1 2 3 是在一行
    j << 2.0, 3.0, 1.0, 4.0, 6.0, 5.0, 9.0, 7.0, 8.0;
    // matrix output
    std::cout << "Example of output \n";
    std::cout << i << std::endl;
    // matrix add i + j
	std::cout << i + j << std::endl;
    // matrix scalar multiply i * 2.0
	std::cout << i * 2.0 << std::endl;
    // matrix multiply i * j
    // matrix multiply vector i * v
	std::cout << i * v << std::endl;

	//std::cout << v * i << std::endl; // 不能是 向量*矩阵  向量一定是列向量 

    return 0;
}