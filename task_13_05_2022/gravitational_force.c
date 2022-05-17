/* c code to find the gravitational force*/

#include <stdio.h>
#include <math.h>
float gravitational_force(double G, double m1, double m2, double r)
{

    return G * (m1 * m2) / r * r;
}

int main()
{
    float m1 = 300.0, m2 = 200.0, r = 100.0;
    float G = 6.67 / 1e11;
    printf("gravitational force F = %f N\n", gravitational_force(G, m1, m2, r));
}