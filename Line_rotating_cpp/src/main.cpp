#include <iostream>
#include "screen.hpp"
#include <iomanip>
#include <cmath>
using namespace std;
int line[300][2];  // 300 points, each with x and y coordinates

void rotate(double degree);
int main(int argc, char *argv[])
{
    PFA::Screen screen;
    if(screen.init() == false)
    {
        std::cout <<"Screen Initializastion Failed!!!"<<std::endl;
        return 1;
    }
    
    
    double degree = 1.0;
    while(true)
    {
        //Update particles

        //Draw particles
        for (int y = 0; y < PFA::Screen::SCREEN_HEIGHT; y++)
        {
            for (int x = 0; x < PFA::Screen::SCREEN_WIDTH; x++)
            {
                screen.setPixel(x,y,200,16,100);
            }
        }
        if(degree>=360)
            degree = 0.0;
        rotate(degree++);
        for (int i = 0; i < 300; i++) {
            screen.setPixel(line[i][0],line[i][1],255,255,255);
        }
        for (int x = 250; x < 551 ; x++)
        {
            screen.setPixel(x,300,255,255,255);
        }
        //Draw the screen
        screen.update(); 
        if(screen.processEvents()==false)
            break;
    }
    screen.close();

    return 0;
}
void rotate(double degree)
{
    // Initialize the line to start at (-150, 0) and extend along the x-axis
    for (int i = 0; i < 300; i++) {
        line[i][0] = i - 150;  // subtract 150 to center the line at (0, 0)
        line[i][1] = 0;
    }
    
    // Define the angle of rotation in degrees
    double theta = degree;  // rotate by 30 degrees
    
    // Convert the angle to radians
    double radians = theta * M_PI / 180.0;
    
    // Compute the middle point of the line
    int mid_index = 149;  // index of the middle point
    double mid_x = line[mid_index][0];
    double mid_y = line[mid_index][1];
    
    // Translate the line so that its middle point is at the origin (0, 0)
    for (int i = 0; i < 300; i++) {
        line[i][0] -= mid_x;
        line[i][1] -= mid_y;
    }
    
    // Compute the rotation matrix
    double cos_theta = cos(radians);
    double sin_theta = sin(radians);
    double rotation_matrix[2][2] = {
        {cos_theta, -sin_theta},
        {sin_theta, cos_theta}
    };
    
    // Apply the rotation matrix to each point of the line
    for (int i = 0; i < 300; i++) {
        // Extract the coordinates of the current point
        double x = line[i][0];
        double y = line[i][1];
        
        // Apply the rotation matrix
        double x_new = x * rotation_matrix[0][0] + y * rotation_matrix[0][1];
        double y_new = x * rotation_matrix[1][0] + y * rotation_matrix[1][1];
        
        // Store the new coordinates back into the line array
        line[i][0] = round(x_new);  // round to the nearest integer
        line[i][1] = round(y_new);
    }
    
    // Translate the line back to its original position
    for (int i = 0; i < 300; i++) {
        line[i][0] += mid_x;
        line[i][1] += mid_y;
    }
    for (int i = 0; i < 300; i++) {
        line[i][0] += 400;
        line[i][1] += 300;
    }
}