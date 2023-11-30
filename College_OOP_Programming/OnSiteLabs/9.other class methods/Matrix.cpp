#include <iostream>
#include "Matrix.hpp"

Matrix::Matrix() : x(0), y(0){};
Matrix::Matrix(int x, int y) : x(x), y(y){
    this->data =(double*)std::malloc(x*y*sizeof(double));
}

Matrix::Matrix(const Matrix &m)
{
    std::cout<<"123";
    //Matrix(x,y);
    x=m.x;
    y=m.y;
    this->data =(double*)std::malloc(x*y*sizeof(double));

    for(int i =0;i<x*y;i++){
        data[i] = m.data[i];
    }
    std::cout<<"456" << std::endl;
}
Matrix::~Matrix(){
    std::free(data);
}


Matrix& Matrix::operator=(const Matrix  &mat2)
{
    this->x = mat2.x;
    this->y = mat2.y;
    std::free(this->data);
    data =(double*)std::malloc(x*y*sizeof(double));
    for(int i =0;i<x*y ;++i){
        this->data[i] = mat2.data[i];
    }    
    return *this;
}
double& Matrix::operator()(int x, int y)
{
        return this->data[x*this->y+y];
}
const double& Matrix::operator()(int x, int y) const
{
        return this->data[x*this->y+y];
}


