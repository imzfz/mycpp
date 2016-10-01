//
// Created by fz z on 16/9/29.
//

#ifndef L5_7_HEAD_H
#define L5_7_HEAD_H

#endif //L5_7_HEAD_H
#include <iostream>
#include <string>
using namespace std;
class Student{
public:
    Student(int n, string nam){
        num = n;
        name = nam;
    }
    void display();

protected:
    int num;
    string name;
};

class Student1 : public Student{
public :
    Student1(int n, string name, int a):Student(n, name){
        age = a;
    }
    void show();
private:
    int age;
};

class Student2 : public Student1{
public :
    Student2(int n, string nam, int a ,int s):Student1(n, nam, a){
        score = s;
    }
    void show_all();
private :
    int score;
};