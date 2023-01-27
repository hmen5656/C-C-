#include <iostream>
#include <cmath>


int getMaxNumofTest(int maxDeliverableMAmps) 
{
    if(maxDeliverableMAmps == 1)
    {
        return 0;
    }
    if(maxDeliverableMAmps == 2)
    {
        return 1;
    }
	// return (int)ceil((-1.+sqrt(1+8*maxDeliverableMAmps))/2.);    
    int i=0;
    for(i=0;;i++)
    if((i*(i+1))/2>=maxDeliverableMAmps){
    break;
    }
    return i;
}

int main()
{
    int maxDeliverableMAmps;
    int test_counter = 1;
    while(std::cin>>maxDeliverableMAmps && maxDeliverableMAmps != 0) { 
        test_counter++;
        if(test_counter>=200){
            break;
        }
        if(maxDeliverableMAmps<=4711 && maxDeliverableMAmps>=1){
            std::cout<<getMaxNumofTest(maxDeliverableMAmps)<<std::endl;
        }

    }
    return 0;
}


// int getMaxSafeMAmps(int maxDeliverableMAmps)
// {
//     float temp = 0;
//     int counter =0;
//     int coeff = 1; 
//     int bat1 = 0, bat2=1;
//     while(bat1+coeff<maxDeliverableMAmps){
//             bat1 += coeff;
//             coeff*=2;
//             counter++;
//     }
//     bat2 = bat1;
//     coeff = 1;
//     while(bat2+coeff<maxDeliverableMAmps){
//         bat2 += coeff;
//         coeff*=2;
//         counter++;
//     }
//     return counter;
   
// }