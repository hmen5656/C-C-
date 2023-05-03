#pragma once
#include "particle.hpp"

namespace common_utils {

    class Swarm 
    {
    public:
        const static int NPARTICLES = 5000;
        Swarm ();
        virtual ~Swarm (); 
        const Particle * const getParticles(){ return m_particle; };
        void update(int elapsed);

    private:
        Particle * m_particle;
        int lastUpdate;

    };

}  // namespace common_utils

