#pragma once
#include <iostream>
namespace template_project {
    class Human
    {
    private:
        /* data */
        static int counter;
    protected:
        std::string ID;
        std::string NAME;
        std::string SURNAME;
        int AGE = 0;
            
    public:
        Human(std::string NAME = "Test" , std::string SURNAME = "User" ,std::string ID = "00000000" , int AGE = 0 ):NAME(NAME),SURNAME(SURNAME),ID(ID),AGE(AGE){counter++;};
        Human(const Human&); // copy constructor
        ~Human();
        void print_details();
        static int get_object_counter(void){return Human::counter;};
        std::string getId()const;
        std::string getName()const;
        std::string getSurname()const;
        int getAge()const;
        Human& operator=(const Human* );
        Human& operator=(const Human& );
        Human operator+(const Human& );
        Human operator+(const Human* );
        Human& operator+=(const Human &);
        Human& operator+=(const Human *);
        Human& operator-=(const Human &);
        Human& operator-=(const Human *);
        void operator[](int i);
        // Human& operator=(const Human& );
        friend std::ostream & operator <<(std::ostream & , Human& );
        friend std::ostream & operator <<(std::ostream & , Human* );
    };
}  // namespace template_project

