#include "particle.hpp"
#include <stdlib.h>

namespace common_utils {

Particle::Particle()
{
    m_x = ((2.0 *rand())/RAND_MAX)-1;
    m_y = ((2.0 *rand())/RAND_MAX)-1;
    m_xSpeed += 0.01*(((2.0 *rand())/RAND_MAX)-1);
    m_ySpeed += 0.01*(((2.0 *rand())/RAND_MAX)-1);
}

Particle::~Particle()
{

}
void Particle::update()
{
    const double speed = 0.0;
    m_x += m_xSpeed;
    m_y += m_ySpeed;
    if(m_x<-1.0 || m_x>=1.0 )
        m_xSpeed = -m_xSpeed;
    if( m_y<-1.0 || m_y>=1.0)
        m_ySpeed = -m_ySpeed;
}
}  // namespace common_utils

