#include <stdio.h>
#include <math.h>

int main() {
    double wavelength, slitWidths[3];
    int m;
    double angles[3]; 
    double maxangle;
    int max, x = 0; 

    while (!x) 
    {
        printf("Enter the wavelength (in nm) between 380 and 750 nm: ");
        scanf("%lf", &wavelength);

        if (wavelength < 380.0 || wavelength > 750.0) 
        {
            printf("Out of the range. Please enter a valid number.\n");
        } 
         else
         {
            x = 1; 

            printf("Enter the first value of slit width (in μm): ");
            scanf("%lf", &slitWidths[0]);
            printf("Enter the second value of slit width (in μm): ");
            scanf("%lf", &slitWidths[1]);
            printf("Enter the third value of slit width (in μm): ");
            scanf("%lf", &slitWidths[2]);

            printf("Enter the value of m: ");
            scanf("%d", &m);

            for (int i = 0; i < 3; i++) {
                angles[i] = asin((m * wavelength * 1e-9) / (slitWidths[i] * 1e-6));
            }

            
            maxangle = angles[0];
            max = 0;

            for (int i = 1; i < 3; i++)
            {
                if (angles[i] > maxangle)
                 {
                    maxangle = angles[i];
                    max = i;
                 }
            }

            
            for (int i = 0; i < 3; i++) 
            {
                printf("Angle %d: %lf \n", i + 1, angles[i]);
            }

                 
            printf("\n\nAngle %d: %lf bents the light most\n", max + 1, maxangle);
         }
    }

    return 0;
}
