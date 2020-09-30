/**
 * Project OOP3200-F2020-InClass3
 * @author Ahmed Butt
 * @version 1.0
 */


#include "Person.h"
#include <iostream>

/**
 * Person implementation
 */


/**
 * @param first_name
 * @param last_name
 * @param age
 */
Person::Person(std::string first_name, std::string last_name, float age) 
    :  m_firstName(first_name), m_lastName(last_name), m_age(age)
{

}

float Person::getAge()
{
    return m_age;
}

float Person::setAge(float value)
{
    m_age = value;
}

std::string Person::getFirstName()
{
    return m_firstName;
}

std::string Person::setFirstName(std::string value) 
{
    m_firstName = value;
}

std::string Person::getLastName()
{
    return m_lastName;
}

std::string Person::setLastName(std::string value) 
{
    m_lastName = value;
}

std::string Person::SaysHello()
{
    std::cout << getFirstName() << " says Hello!" << std::endl;
}

std::string Person::ToString()
{
    std::string outputString = "";

    outputString += "------------------------------------------\n";
    outputString += "First Name: " + getFirstName() + "\n";
    outputString += "Last Name: " + getLastName() + "\n";
    outputString += "Age: " + std::to_string(getAge()) + "\n";
    outputString += "------------------------------------------\n";

    return outputString;
}
