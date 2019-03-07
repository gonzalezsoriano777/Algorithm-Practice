#include <stdio.h>
#include <stdlib.h>


// As shown from the format
    /*
    Beginning the order from the height of the floor,
    The Rate of the ball bouncing from the height of the floor the child is on
    Mother looking out of the window from below from the ball hitting the ground
    */


int BouncingBall(double, double, double);


int main(void)
{
    int TimingOfBall = BouncingBall(3.0, .66, 1.5);
    printf("The # of times of the ball was viewed as %i times!\n", TimingOfBall);

}

int BouncingBall(double h, double br, double win) // h - height, br - bounce rate of ball, win - window
{
    // key idea is, that if the condition is not met then
    if(h <= 0 || br <= 0 || br >= 1)
    {
        return -1; // return an error and break function
    }
    else
    {
        float Rebound = 0;

        // ensures that the "rebouncing" ball is greater then the win param
        Rebound = h * br;

        int viewCount = 1;

        while(Rebound > win)
        {
            Rebound = Rebound * br;
            viewCount = viewCount + 2;
        }

        return viewCount;

    }


}


// Condition

    /*
    ** Float parameter "h" in meters must be greater than 0**
    ** Float parameter “br" must be greater than 0 and less than 1**
    ** Float parameter “win" must be less than h.**
    */