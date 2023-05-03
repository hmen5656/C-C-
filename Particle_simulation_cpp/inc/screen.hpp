#pragma once
#include "SDL.h"

namespace PFA {

    class Screen 
    {
    public:
        const static int SCREEN_WIDTH = 800;
        const static int SCREEN_HEIGHT = 600;
        Screen():m_window(NULL),m_renderer(NULL),m_texture(NULL),m_buffer(NULL),m_tempBuffer(NULL){};
        ~Screen ();
        bool init();
        bool processEvents();
        void close();
        void update();
        void clear();
        void setPixel(int x,
                      int y,
                      Uint8 red,
                      Uint8 green,
                      Uint8 blue);
        void boxBlur();
    private:
        SDL_Window *m_window;
        SDL_Renderer *m_renderer;
        SDL_Texture *m_texture;
        Uint32 *m_buffer;
        Uint32 *m_tempBuffer;
    };

}  // namespace Particle File Animation

