

#include <iostream>
#include "Person.h"
#include "Professor.h"
#include "Student.h"

using namespace std;

int main()
{
    Person person = Person("Bob", "Smith", 35.6f);
    person.SaysHello();
    
    std::cout << person.ToString() << std::endl;

    Student student = Student("Mike", "Jones", 22.0f, "ASMFOASMFA2");
    student.SaysHello();
    student.Studies();

    std::cout << student.ToString() << std::endl;

    Professor professor = Professor("Andrew", "Hogue", 38.0f, "THISISID");

    std::cout << professor.ToString() << std::endl;
}