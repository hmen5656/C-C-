#include <iostream>
#include "screen.hpp"
#include <iomanip>
#include <cmath>
#include <swarm.hpp>
#include <time.h>
using namespace std;

int main(int argc, char *argv[])
{
    srand(time(NULL));
    PFA::Screen screen;
    if(screen.init() == false)
    {
        std::cout <<"Screen Initializastion Failed!!!"<<std::endl;
        return 1;
    }
    common_utils::Swarm swarm;
    
    while(true)
    {
        //Update particles
        int elapsed = SDL_GetTicks();
        screen.clear();
        swarm.update();
        Uint8 red = (1+sin(elapsed*0.0002))*128;
        Uint8 green = (1+sin(elapsed*0.0003))*128;
        Uint8 blue = (1+sin(elapsed*0.0001))*128;
        // //Draw particles
        // for (int y = 0; y < PFA::Screen::SCREEN_HEIGHT; y++)
        // {
        //     for (int x = 0; x < PFA::Screen::SCREEN_WIDTH; x++)
        //     {
        //         screen.setPixel(x,y,red,green,blue);
        //     }
        // }
        
        // for (int x = 250; x < 551 ; x++)
        // {
        //     screen.setPixel(x,300,255,255,255);
        // }
        const common_utils::Particle * const pParticles = swarm.getParticles();
        for (int i = 0; i < common_utils::Swarm::NPARTICLES; i++)
        {
            common_utils::Particle particle  = pParticles[i];
            int x = (particle.m_x+1)*PFA::Screen::SCREEN_WIDTH/2;
            int y = (particle.m_y+1)*PFA::Screen::SCREEN_HEIGHT/2;
            screen.setPixel(x,y,red,green,blue);
            /* code */
        }
        

        //Draw the screen
        screen.update(); 
        if(screen.processEvents()==false)
            break;
    }
    screen.close();

    return 0;
}