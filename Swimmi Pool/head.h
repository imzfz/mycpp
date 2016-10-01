//
// Created by fz z on 16/9/28.
//

#ifndef SWIMMI_POOL_HEAD_H
#define SWIMMI_POOL_HEAD_H

#endif //SWIMMI_POOL_HEAD_H

const float PI = 3.14159;
const float FencePrice = 35;
const float ConcretePrice = 20;

#include <iostream>
using namespace std;
class Pool{
private:
    double radius;

public:
    Pool();
    double Circumference();
    double Area();
    void show();

};