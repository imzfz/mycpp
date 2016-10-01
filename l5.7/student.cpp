//
// Created by fz z on 16/9/29.
//

#include "head.h"
void Student::display() {
    cout<<"num:"<<num<<endl;
    cout<<"name:"<<name<<endl;
}

void Student1::show() {
    display();
    cout<<"age:"<<age<<endl;
}

void Student2::show_all() {
    show();
    cout<<"score:"<<score<<endl;
}