#pragma once


namespace common_utils {

    struct Particle 
    {
    public:
        Particle ();
        ~Particle ();
        double m_x;
        double m_y;
        double m_speed;
        double m_direction;
        void update(int interval);
    private:

    };

}  // namespace common_utils

