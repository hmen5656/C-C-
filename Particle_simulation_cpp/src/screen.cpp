#include "screen.hpp"

namespace PFA {


Screen::~Screen()
{
    delete []this->m_buffer;
    SDL_DestroyRenderer(this->m_renderer);
    SDL_DestroyTexture(this->m_texture);
    SDL_DestroyWindow(this->m_window);
    SDL_Quit();
}

bool Screen::init()
{
    if(SDL_Init(SDL_INIT_VIDEO) < 0 ){
        return false;
    }
    this->m_window = SDL_CreateWindow("Particle Fire Simulation",
                                       SDL_WINDOWPOS_UNDEFINED,
                                       SDL_WINDOWPOS_UNDEFINED,
                                       SCREEN_WIDTH,
                                       SCREEN_HEIGHT,
                                       SDL_WINDOW_SHOWN);
                                        
    if(this->m_window ==  NULL ){
        // std::cout << "SDL_CreateWindow Failed , Error" << SDL_GetError() <<std::endl;
        SDL_Quit();
        return false;
    }                                    
    this->m_renderer = SDL_CreateRenderer(this->m_window,
                                          -1,
                                          SDL_RENDERER_PRESENTVSYNC);   
    
    if(this->m_renderer ==  NULL ){
        SDL_DestroyWindow(this->m_window);
        SDL_Quit();
        return false;
    }                                 
    this->m_texture = SDL_CreateTexture(this->m_renderer,
                                        SDL_PIXELFORMAT_RGBA8888,
                                        SDL_TEXTUREACCESS_STATIC,
                                        SCREEN_WIDTH,
                                        SCREEN_HEIGHT);
    if(this->m_texture ==  NULL ){
        SDL_DestroyRenderer(this->m_renderer);
        SDL_DestroyWindow(this->m_window);
        SDL_Quit();
        return false;
    }
    this->m_buffer = new Uint32[SCREEN_HEIGHT*SCREEN_WIDTH];

    memset(this->m_buffer,0,SCREEN_WIDTH*SCREEN_HEIGHT*sizeof(Uint32));    
    
    return true;
}
bool Screen::processEvents()
{
    SDL_Event event;
    while(SDL_PollEvent(&event)){
        if(event.type == SDL_QUIT)
            return false;
    }
    return true;
}
void Screen::update()
{
    SDL_UpdateTexture(this->m_texture,NULL,this->m_buffer,SCREEN_WIDTH*sizeof(Uint32));
    SDL_RenderClear(this->m_renderer); 
    SDL_RenderCopy(this->m_renderer,this->m_texture,NULL,NULL);
    SDL_RenderPresent(this->m_renderer);  
}
void Screen::clear()
{
    memset(this->m_buffer,0,SCREEN_WIDTH*SCREEN_HEIGHT*sizeof(Uint32));    
}
void Screen::setPixel(int x,
              int y,
              Uint8 red,
              Uint8 green,
              Uint8 blue)
{
    if(x<0 || x>=SCREEN_WIDTH || y<0 || y>=SCREEN_HEIGHT)
        return;
    Uint32 color = 0;
    color += red<<24;
    color += green<<16;
    color += blue<<8;
    color += 0XFF;
    m_buffer[(y * SCREEN_WIDTH)+x] = color;
}
void Screen::close()
{
    delete []this->m_buffer;
    SDL_DestroyRenderer(this->m_renderer);
    SDL_DestroyTexture(this->m_texture);
    SDL_DestroyWindow(this->m_window);
    SDL_Quit();
}


}  // namespace // namespace Particle File Animation