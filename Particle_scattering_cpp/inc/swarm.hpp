#pragma once
#include "particle.hpp"

namespace common_utils {

    class Swarm 
    {
    public:
        const static int NPARTICLES = 1000;
        Swarm ();
        virtual ~Swarm (); 
        const Particle * const getParticles(){ return m_particle; };
        void update();

    private:
        Particle * m_particle;

    };

}  // namespace common_utils

