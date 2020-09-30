/**
 * Project OOP3200-F2020-InClass3
 * @author Ahmed Butt
 * @version 1.0
 */

#pragma once
#include <string>
#ifndef _PERSON_H
#define _PERSON_H

class Person {
public: 
    
/**
 * @param first_name
 * @param last_name
 * @param age
 */
Person(std::string first_name, std::string last_name, float age);
    
float getAge();
    
/**
 * @param value
 */
float setAge(float value);
    
std::string getFirstName();
    
/**
 * @param value
 */
std::string setFirstName(std::string value);
    
std::string getLastName();
    
/**
 * @param value
 */
std::string setLastName(std::string value);
    
std::string SaysHello();
    
virtual std::string ToString();

private: 
    float m_age;
    std::string m_firstName;
    std::string m_lastName;
};

#endif //_PERSON_H