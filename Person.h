#ifndef PERSON_H
#define PERSON_H
#include<iostream>
#include<ctype.h>
#include "Validation.h"
using namespace std;
#pragma once

class Person
{
     int id;
     string name, password;
 public:
Person(string name = "___" , int id = 0 ,  string password = "___")
{
    setId(id);
    setName(name);
    setPassword(password);
}

void setId(int id) 
{
    this->id = id;
}
void setName(string name)
{
    if(Validation::validateName(name))
        this->name = name;
    else
        cout<<"Name is not valid."<<endl;
}
void setPassword(string password)
{
    if(Validation::validatePassword(password))
        this->password=password;
    else
        cout<<"The Password must be at least 8 characters and not more than 20 characters."<<endl;
}
int getId()
{
    return id;
}
string getName()
{
    return name;
}
string getPassword()
{
    return password;
}
void display()
{
    cout<<"Name is : "<<name<<endl;
    cout<<"ID is : "<<id<<endl;
    cout<<"Password is : "<<password<<endl;
}
};

#endif