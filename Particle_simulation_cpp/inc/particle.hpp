#pragma once

namespace common_utils {

struct Particle
{
  public:
    Particle();
    ~Particle();
    double m_x;
    double m_y;
    void update(int interval);

  private:
    double m_speed;
    double m_direction;
    void init();
};

}  // namespace common_utils
