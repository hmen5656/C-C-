

#include <student.hpp>

namespace template_project {

    namespace common_utils {

    } // namespace common_utils
    
    int Student::counter = 0;
    Student::Student(const Student& c)
    {
        this->counter++;
    }
    Student::~Student()
    {
        this->counter--;
    }
    void Student::print_details()
    {
        std::cout<<""<<std::endl;
    }
    std::string Student::getId()const
    {
        return this->ID;
    }
    std::string Student::getName()const
    {
        return this->NAME;
    }
    std::string Student::getSurname()const
    {
        return this->SURNAME;
    }
    std::string Student::getStudentID()const
    {
        return this->StudentID;
    }
    int Student::getAge()const
    {
        return this->AGE;
    }
    Student& Student::operator=(const Student& _Student)
    {
        return *this;
    }
    Student& Student::operator=(const Student* _Student)
    {
        return *this;
    }
    Student Student::operator+(const Student& _Student)
    {
        Student _rStudent = Student();
        return _rStudent;
    }
    Student Student::operator+(const Student* _Student)
    {
        Student _rStudent = Student();
        return _rStudent;
    }
    Student&  Student::operator+=(const Student &_Student)
    {
        return *this;
    }
    Student&  Student::operator+=(const Student *_Student)
    {
        return *this;
    }
    Student&  Student::operator-=(const Student &_Student)
    {
        return *this;
    }
    Student&  Student::operator-=(const Student *_Student)
    {
        return *this;
    }
    void Student::operator[](int i)
    {

    }
    std::ostream& operator<<(std::ostream & _out, Student* _Student)
    {
        _out<<"\n";
        return _out; 
    };
    std::ostream& operator<<(std::ostream & _out, Student& _Student)
    {
        _out<<"\n";
        return _out; 
    };
}  // namespace template_project
