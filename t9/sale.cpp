//
// Created by fz z on 16/9/28.
//

#include "head.h"

void Sale::cal(int quantity, double price) {
    sum += quantity * price;
}

void Sale::average(){
    aver = sum/n;
}

void Sale::display() {
    cout<<"sum is : "<<sum<<endl;
    cout<<"average is : "<<aver<<endl;
}

void Sale::list(int quantity, double price) {
    cal(quantity, price);
    n += quantity;
}