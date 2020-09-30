/**
 * Project OOP3200-F2020-InClass3
 * @author Ahmed Butt
 * @version 1.0
 */

#pragma once
#ifndef _STUDENT_H
#define _STUDENT_H

#include "Person.h"
#include <string>

class Student: public Person {
public: 
    std::string m_studentID;
    
/**
 * @param first_name
 * @param last_name
 * @param age
 * @param student_id
 */
Student(std::string first_name, std::string last_name, float age, std::string student_id);
    
std::string getStudentID();
    
/**
 * @param value
 */
std::string setStudentID(std::string value);
    
std::string Studies();
    
std::string ToString();

private:
    std::string m_studentID;
};

#endif //_STUDENT_H