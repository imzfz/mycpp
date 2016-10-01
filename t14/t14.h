//
// Created by fz z on 16/9/25.
//

#ifndef T14_T14_H
#define T14_T14_H

#endif //T14_T14_H

#pragma once
#include <iostream>
using namespace std;
class Reversal {
public:
    template <typename T>
    void sort(int i, T *p) {
        T temp ,*m;
        int j, k;

        m = p;
        for (j = 0; j < i; j++) {
            for (k = 0; k < i - j; k++) {
                if (*p > *(p+1) && *(p+1)) {
                    temp = *p;
                    *p = *(p+1);
                    *(p+1) = temp;
                }
                p++;
            }
            p = m;
        }

        cout<<"排序为"<<endl;
        while(*p){
            cout<<*p<<" ";
            p++;
        }
        cout<<endl;
    }

    template <typename M>
    void Input(int i, M *p){
        cout<<"Input:"<<endl;
        for(int j = 0; j < i; j++){
            cin>>*p;
            p++;
        }
    }


};