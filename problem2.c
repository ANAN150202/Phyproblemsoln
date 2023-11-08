#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846
int main()
{   
    printf("Diffraction grating equation: mw = dsin(a) \n\n");
    printf("In first case :\nOrder of the bright spot,m = 3\nWavelength of the light,w = 530nm\nAngle at which the bright spot is observed,a = 65 degree\nSpacing between the slits on the grating,d = ?\n\n");
    
    double m=3,w=530,a=65*(PI/180.0);
    double d=((m*w)/sin(a));

    printf("From the equation d = (m*w)/sin(a) = %lf nm\n\n",d);
    printf("Now that we know d, we can find the angle for the second-order bright spot for red light\nIn second case :\nOrder of the bright spot,m = 2\nWavelength of the light,w = 700nm\nSpacing between the slits on the grating,d = %lf nm\nAngle at which the bright spot is observed,a = ?\n\n",d);
    m=2,w=700;
    a=(asin((m*w)/d))*(180.0/PI);
    printf("Angle for the second-order bright spot be for red light %lf degree",a);
}