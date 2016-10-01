//
// Created by fz z on 16/9/28.
//

#ifndef T9_HEAD_H
#define T9_HEAD_H

#endif //T9_HEAD_H

#include <iostream>
using namespace std;
static double discount;
static double price;
static int n;
static double sum = 0;
static double aver = 0;
class Sale {
public:
    static void list(int quantity, double price);
    static void cal(int quantity, double price);
    static void display();
    static void average();
};
