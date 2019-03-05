#include <stdio.h>
#include <cs50.h>

// As shown from the format
    /*

    Beginning the order from the height of the floor,
    The Rate of the ball bouncing from the height of the floor the child is on
    Mother looking out of the window from below from the ball hitting the ground

    */

int Ballbouncing(double, double, double);

int main(void)
{
    int TimeofBallBouncing = Ballbouncing(3.0, .66, 1.5);
    printf("The # of Times of the ball was viewed as %i times!\n", TimeofBallBouncing);

}

int Ballbouncing(double h, double br, double win) // h - height, br - rate of ball bouncing, win - window
{
    // key idea here is, if the condition is not correct
    if (h <= 0 || (br <= 0 || br >= 1) || win <= h)
    {
        return -1; // then return an errors that will break the function

    }
    else
    {
        float Rebound = 0;

        // ensures, height of 'rebouncing' ball is greater then win param
        Rebound = h * br;

        int viewCount = 1;

        while(Rebound > win)
        {
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

