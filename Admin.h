#ifndef ADMIN_H
#define ADMIN_H
#include "Employee.h"
#pragma once

class Admin : public Employee
{
public:
Admin():Employee(){

}
Admin(string name,int id,string password,double balance,double salary):Employee(name,id,password,balance,salary){
    
}

};

#endif