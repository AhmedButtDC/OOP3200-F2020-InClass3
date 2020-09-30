/**
 * Project OOP3200-F2020-InClass3
 * @author Ahmed Butt
 * @version 1.0
 */


#include "Professor.h"
#include<string>
#include <iostream>

/**
 * Professor implementation
 */


/**
 * @param first_name
 * @param last_name
 * @param age
 * @param employee_id
 */
Professor::Professor(std::string first_name, std::string last_name, float age, std::string employee_id)
    : Person(first_name, last_name, age), m_employeeID(std::move(employee_id))
{

}

/**
 * @return std::string
 */
std::string Professor::getEmployeeID() 
{
    return m_employeeID;
}

/**
 * @param value
 */
std::string Professor::setEmployeeID(std::string value)
{
    m_employeeID = value;
}

/**
 * @return void
 */
std::string Professor::Teaches()
{
    std::cout << getFirstName() << " is teaching" << std::endl;
}

/**
 * @return std::string
 */
std::string Professor::ToString() 
{
    std::string output_string;

    output_string += Person::ToString();
    output_string += "------------------------------------------\n";
    output_string += "Student ID: " + getEmployeeID() + "\n";
    output_string += "------------------------------------------\n";

    return output_string;
}