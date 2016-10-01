//
// Created by fz z on 16/9/28.
//

#include "head.h"

Pool::Pool() {
    cout<<"请输入泳池半径r"<<endl;
    cin>>radius;
}

double Pool::Circumference() {
    return 2 * PI * (radius + 3);
}

double Pool::Area() {
    return PI * 3 * 3 - PI * radius * radius;
}

void Pool::show() {
    cout<<"围栏造价为"<<Pool::Circumference() * FencePrice<<endl;
    cout<<"走廊造价为"<<Pool::Area() * ConcretePrice<<endl;
}