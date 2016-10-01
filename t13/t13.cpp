#include "t13.h"
#include<iostream>
#include<String.h>
using namespace std;
void Reversal::sort(int i, long *p) {
    long temp ,*m;
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

void Reversal::sort(int i, int *p) {
    int temp ,*m;
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

void Reversal::sort(int i, double *p) {
    double temp ,*m;
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

void Reversal::Input(int i, double *p){
    cout<<"Input:"<<endl;
    for(int j = 0; j < i; j++){
        cin>>*p;
        p++;
    }
}

void Reversal::Input(int i, int *r){
    cout<<"Input:"<<endl;
    for(int j = 0; j < i; j++){
        cin>>*r;
        r++;
    }
}

void Reversal::Input(int i, long *q){
    cout<<"Input:"<<endl;
    for(int j = 0; j < i; j++){
        cin>>*q;
        q++;
    }
}





//第一章13 14 第二章5 ，6  泳池，超市 121-9