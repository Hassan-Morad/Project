#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#pragma once
#include "Client.h"
class Employee : public Client
{
double salary;
public:
Employee():Client(){
    salary=0;
}
Employee(string name,int id,string password,double balance,double salary):Client(name,password,id,balance){
    setSalary(salary);
}
void setSalary(double salary){
    if(Validation::validateSalary(salary))
      this->salary=salary;
    else
      cout<<"Salary should be more than 5000."<<endl;  
}
double getSalary(){
    return salary;
}
void display(){
    Client::display();
    cout<<"Salary is : "<<salary<<endl;
}
};

#endif