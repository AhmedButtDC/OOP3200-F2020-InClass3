/**
 * Project OOP3200-F2020-InClass3
 * @author Ahmed Butt
 * @version 1.0
 */

#pragma once
#ifndef _PROFESSOR_H
#define _PROFESSOR_H

#include "Person.h"
#include <string>

class Professor: public Person {
public: 
    std::string m_employeeID;
    
/**
 * @param first_name
 * @param last_name
 * @param age
 * @param employee_id
 */
Professor(std::string first_name, std::string last_name, float age, std::string employee_id);
    
std::string getEmployeeID();
    
/**
 * @param value
 */
std::string setEmployeeID(std::string value);
    
std::string Teaches();
    
std::string ToString() override;

private:

};

#endif //_PROFESSOR_H