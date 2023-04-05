#include "swarm.hpp"


namespace common_utils {

Swarm::Swarm():lastUpdate(0)
{
    m_particle = new Particle[NPARTICLES];
}

Swarm::~Swarm()
{
    delete []m_particle;
}
void  Swarm::update(int elapsed)
{
    int interval = elapsed-lastUpdate;

     for (int i = 0; i < Swarm::NPARTICLES; i++)
    {
        m_particle[i].update(interval);
        /* code */
    }
    lastUpdate = elapsed;
}
}  // namespace common_utils

