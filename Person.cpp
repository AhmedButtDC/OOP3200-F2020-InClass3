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
    : m_age(age), m_firstName(first_name), m_lastName(last_name), m_age(age)
{

}

/**
 * @return float
 */
float Person::getAge() const
{
    return m_age;
}

/**
 * @param value
 */
void Person::setAge(float value) const
{
    m_age = value;
}

/**
 * @return std::string
 */
std::string Person::getFirstName() const
{
    return m_firstName;
}

/**
 * @param value
 */
void Person::setFirstName(const std::string& value) 
{
    m_firstName = value;
}

/**
 * @return std::string
 */
std::string Person::getLastName() const
{
    return m_lastName;
}

/**
 * @param value
 */
void Person::setLastName(const std::string& value) 
{
    m_lastName = value;
}

/**
 * @return void
 */
void Person::SaysHello() const
{
    std::cout << getFirstName() << " says Hello!" << std::endl;
}

std::string Person::ToString()
{
    std::string outputString = "";

    outputString += "------------------------------------------\n";
    outputString += "First Name: " + getFirstName();
    outputString += "Last Name: " + getLastName();
    outputString += "Age: " + std::to_string(getAge());
    outputString += "------------------------------------------\n";

    return outputString;
}

/**
 * @return std::string
 */