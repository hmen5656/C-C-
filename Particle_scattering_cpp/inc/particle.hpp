#pragma once


namespace common_utils {

    struct Particle 
    {
    public:
        Particle ();
        ~Particle ();
        double m_x;
        double m_y;
        double m_xSpeed;
        double m_ySpeed;
        void update();
    private:

    };

}  // namespace common_utils

