#pragma once
#include <iostream>
#include <human.hpp>
namespace template_project {
    class Student: public Human
    {
    private:
        /* data */
        static int counter;
    protected:
        std::string StudentID;
        int AGE = 0;
            
    public:
        Student(std::string NAME = "Test" , std::string SURNAME = "User" ,std::string ID = "00000000",std::string StudentID = "1111111" , int AGE = 0 ):StudentID(StudentID),Human(NAME,SURNAME,ID,AGE){counter++;};
        Student(const Student&); // copy constructor
        ~Student();
        void print_details();
        static get_object_counter(void){return Student::counter;};
        std::string getId()const;
        std::string getName()const;
        std::string getSurname()const;
        std::string getStudentID()const;
        int getAge()const;
        Student& operator=(const Student* );
        Student& operator=(const Student& );
        Student operator+(const Student& );
        Student operator+(const Student* );
        Student& operator+=(const Student &);
        Student& operator+=(const Student *);
        Student& operator-=(const Student &);
        Student& operator-=(const Student *);
        void operator[](int i);
        // Student& operator=(const Student& );
        friend std::ostream & operator <<(std::ostream & , Student& );
        friend std::ostream & operator <<(std::ostream & , Student* );
    };
}  // namespace template_project

