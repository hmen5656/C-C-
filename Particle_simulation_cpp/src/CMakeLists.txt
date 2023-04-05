set(TARGET_NAME "template-service")

set(TARGET_SOURCES 
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/screen.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/renderer.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/particle.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/swarm.cpp

)
set(SDL_LIB "SDL2")
set(SDL_LIB_PATH "/usr/local/lib/")
set(SDL_LIB_INC_PATH "/usr/local/include/SDL2")
add_executable(${TARGET_NAME} ${TARGET_SOURCES})

target_include_directories(${TARGET_NAME}
    PUBLIC
        ${PROJECT_SOURCE_DIR}/inc
        
    PRIVATE
        ${SDL_LIB_INC_PATH}
)

find_library(SDL_LIB_API ${SDL_LIB} PATHS ${SDL_LIB_PATH})

target_link_libraries(${TARGET_NAME}
    PUBLIC
        ""
    PRIVATE
        ${SDL_LIB_API}
)

