/**
 * @file utils.hpp
 * @author Huseyin MEN (you@domain.com)
 * @brief Encapsulation, is to make sure that "sensitive" data is hidden from users.
 * @version 0.1
 * @date 2023-04-01
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#pragma once
#include <iostream>
namespace template_project {
    class Point
    {
    private:
        /* data */
        int x;
        int y;
        int *p;
        int getY() const;
        int getX() const;
    public:
        Point(int _x=0 , int _y=0 , int _p = 0):x(_x),y(_y),p(new int(_p)){};
        Point(const Point&); // copy constructor
        ~Point();
        void print_datas();
        bool atOrigin();
        friend std::ostream & operator <<(std::ostream & , Point& );
        friend std::ostream & operator <<(std::ostream & , Point* );
    };
}  // namespace template_project

