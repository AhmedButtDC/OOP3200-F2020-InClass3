/**
 * Project OOP3200-F2020-InClass3
 * @author Ahmed Butt
 * @version 1.0
 */


#include "Student.h"
#include <string>
#include <iostream>

/**
 * Student implementation
 */


/**
 * @param first_name
 * @param last_name
 * @param age
 * @param student_id
 */
Student::Student(std::string first_name, std::string last_name, float age, std::string student_id) 
    : Person(first_name, last_name, age), m_studentID(std::move(student_id))
{

}

std::string Student::getStudentID()
{
    return m_studentID;
}

std::string Student::setStudentID(std::string value)
{
    m_studentID = value;
}

std::string Student::Studies()
{
    std::cout << getFirstName() << " is studying" << std::endl;
}

std::string Student::ToString() 
{
    std::string output_string;

    output_string += Person::ToString();
    output_string += "------------------------------------------\n";
    output_string += "Student ID: " + getStudentID() + "\n";
    output_string += "------------------------------------------\n";

    return "";
}