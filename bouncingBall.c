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

    int TimingofBall = Ballbouncing(3.0, .66, 1.5);
    printf("The ball viwed %i times", TimingofBall);

}

int Ballbouncing(double h, double br, double win) //  h - height, br - bounce of ball, win -window
{
    // key idea is, return an error if condition isn't properly met
    if (h <= 0 || (br <= 0 || br >= 1) || win >= h)
    {
        return -1;
    }
    else
    {
        float
        int
    }


}