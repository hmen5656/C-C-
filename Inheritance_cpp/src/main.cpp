#include <iostream>
#include <stdbool.h>
#include <student.hpp>
using namespace template_project;
int main(int argc, char *argv[])
{
    // Student Huseyin = Student();
    // std::cout<<"ID :"<<Huseyin.getId()<<std::endl;
    // std::cout<<"NAME :"<<Huseyin.getName()<<std::endl;
    // std::cout<<"SURNAME :"<<Huseyin.getSurname()<<std::endl;
    // std::cout<<"STUDENT_ID :"<<Huseyin.getStudentID()<<std::endl;
    // std::cout<<"AGE :"<<Huseyin.getAge()<<std::endl;

    char A  = 0;
    for (int i = 0; i < 300; i++)
    {
        std::cout<< " I: "<<i<<" A: "<<A<<" A(int): " <<(int)A++<<std::endl;
        /* code */
    }
    
    return 0;
}