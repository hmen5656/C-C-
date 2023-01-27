

#include <human.hpp>

namespace template_project {

    namespace common_utils {

    } // namespace common_utils
    int Human::counter = 0;
    Human::Human(const Human& c)
    {
        this->counter++;
    }
    Human::~Human()
    {
        this->counter--;
    }
    void Human::print_details()
    {
        std::cout<<""<<std::endl;
    }
    std::string Human::getId()const
    {
        return this->ID;
    }
    std::string Human::getName()const
    {
        return this->NAME;
    }
    std::string Human::getSurname()const
    {
        return this->SURNAME;
    }
    int Human::getAge()const
    {
        return this->AGE;
    }
    Human& Human::operator=(const Human& _Human)
    {
        return *this;
    }
    Human& Human::operator=(const Human* _Human)
    {
        return *this;
    }
    Human Human::operator+(const Human& _Human)
    {
        Human _rHuman = Human();
        return _rHuman;
    }
    Human Human::operator+(const Human* _Human)
    {
        Human _rHuman = Human();
        return _rHuman;
    }
    Human&  Human::operator+=(const Human &_Human)
    {
        return *this;
    }
    Human&  Human::operator+=(const Human *_Human)
    {
        return *this;
    }
    Human&  Human::operator-=(const Human &_Human)
    {
        return *this;
    }
    Human&  Human::operator-=(const Human *_Human)
    {
        return *this;
    }
    void Human::operator[](int i)
    {
    }
    std::ostream& operator<<(std::ostream & _out, Human* _Human)
    {
        _out<<"\n";
        return _out; 
    };
    std::ostream& operator<<(std::ostream & _out, Human& _Human)
    {
        _out<<"\n";
        return _out; 
    };

}  // namespace template_project
