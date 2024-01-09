/*In digital world colors are specifier in red green blue(RGB) format, with alues of R,G,B
 variying on an integer scale form 0 to 255. In print publishing the colors are mentioned 
 in cyan megenta yellow black(CMYK) formate, ith valuesof C,M,Y,and K variying on a real 
 scale form 0.0 to 1.0. If the RGB values are all 0, then the CMY values are all 0 and k 
 alue i 1.write a program that convert RGB color to CMYK color.*/
#include <stdio.h>
int main()
{
    int r, g, b;
    char per = '%';
    float c, m, y, k, w;
    printf("Enter the value of red color between 0 to 255   = ");
    scanf("%d", &r);
    printf("Enter the value of green color between 0 to 255 = ");
    scanf("%d", &g);
    printf("Enter the value of blue color between 0 to 255  = ");
    scanf("%d", &b);
    if ((r < 0) || (r > 255) || (g < 0) || (g > 255) || (b < 0) || (b > 255))
        printf("you entered a wrong entry !");
    else
    {
        if (r == 0 && g == 0 && b == 0)
        {
            c = 0;
            m = 0;
            y = 0;
            k = 1;
        }
        else
        {

            w = (r > g) ? ((r > b) ? r : b) : ((g > b) ? g : b);
            w = w / 255.0;
            c = (w - r / 255.0) / w;
            m = (w - g / 255.0) / w;
            y = (w - b / 255.0) / w;
            k = 1 - w;
        }
        printf("Cyan is      %.0f%c\n", c * 100,per);
        printf("Magenta is   %.0f%c\n", m * 100,per);
        printf("Yellow is    %.0f%c\n", y * 100,per);
        printf("Black is     %.0f%c\n", k * 100,per);
    }
    return 0;
}