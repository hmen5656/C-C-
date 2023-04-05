#include "particle.hpp"
#include <stdlib.h>
#include <math.h>
#include <iostream>
namespace common_utils {

Particle::Particle():m_x(0),m_y(0)
{
    m_direction = (2*M_PI*rand())/RAND_MAX;
    m_speed = (0.0005*rand())/RAND_MAX;
    // m_x = ((2.0 *rand())/RAND_MAX)-1;
    // m_y = ((2.0 *rand())/RAND_MAX)-1;
    // m_xSpeed += 0.01*(((2.0 *rand())/RAND_MAX)-1);
    // m_ySpeed += 0.01*(((2.0 *rand())/RAND_MAX)-1);
}

Particle::~Particle()
{

}
void Particle::update(int interval)
{
    double xspeed = m_speed*cos(m_direction);
    double yspeed = m_speed*sin(m_direction);
    // const double speed = 0.0;
    std::cout<<"interval:"<<interval<<std::endl;
    m_x += xspeed*interval;
    m_y += yspeed*interval;
    // if(m_x<-1.0 || m_x>=1.0 )
    //     m_xSpeed = -m_xSpeed;
    // if( m_y<-1.0 || m_y>=1.0)
    //     m_ySpeed = -m_ySpeed;
}
}  // namespace common_utils

