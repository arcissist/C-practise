#include <stdio.h>
int main(int argc, const char * argv[])
{
    int month = 0, day = 0;
    printf("Please enter the date:(Such as 3.5)");
    scanf("%d.%d", &month, &day);
    switch(month)
    {
        case 1:
            if( day>=1 && day<=20 )
            {
                printf("Capricornus\n");
            }
            else if( day>=21 && day<=31 )
            {
                printf("Aguarius\n");
            }
            else
            {
                printf("The daily input is wrong\n");
            }
            break;
        case 2:
            if( day>=1 && day<=20 )
            {
                printf("Aguarius\n");
            }
            else if( day>=21 && day<=29 )
            {
                printf("Pisces\n");
            }
            else
            {
                printf("The daily input is wrong\n");
            }
            break;
        case 3:
            if( day>=1 && day<=20 )
            {
                printf("Pisces\n");
            }
            else if( day>=21 && day<=31 )
            {
                printf("Aries\n");
            }
            else
            {
                printf("The daily input is wrong\n");
            }
            break;
        case 4:
            if( day>=1 && day<=20 )
            {
                printf("Aries\n");
            }
            else if( day>=21 && day<=30 )
            {
                printf("Taurus\n");
            }
            else
            {
                printf("The daily input is wrong\n");
            }
            break;
        case 5:
            if( day>=1 && day<=20 )
            {
                printf("Taurus\n");
            }
            else if( day>=21 && day<=31 )
            {
                printf("Gemini\n");
            }
            else
            {
                printf("The daily input is wrong\n");
            }
            break;
        case 6:
            if( day>=1 && day<=20 )
            {
                printf("Gemini\n");
            }
            else if( day>=21 && day<=30 )
            {
                printf("Cancer\n");
            }
            else
            {
                printf("The daily input is wrong\n");
            }
            break;
        case 7:
            if( day>=1 && day<=22 )
            {
                printf("Cancer\n");
            }
            else if( day>=23 && day<=31 )
            {
                printf("Lion\n");
            }
            else
            {
                printf("The daily input is wrong\n");
            }
            break;
        case 8:
            if( day>=1 && day<=22 )
            {
                printf("Lion\n");
            }
            else if( day>=23 && day<=31 )
            {
                printf("Virgo\n");
            }
            else
            {
                printf("The daily input is wrong\n");
            }
            break;
        case 9:
            if( day>=1 && day<=22 )
            {
                printf("Virgo\n");
            }
            else if( day>=23 && day<=30 )
            {
                printf("Libra\n");
            }
            else
            {
                printf("The daily input is wrong\n");
            }
            break;
        case 10:
            if( day>=1 && day<=22 )
            {
                printf("Libra\n");
            }
            else if( day>=23 && day<=31 )
            {
                printf("Scorpio\n");
            }
            else
            {
                printf("The daily input is wrong\n");
            }
            break;
        case 11:
            if( day>=1 && day<=22 )
            {
                printf("Scorpio\n");
            }
            else if( day>=23 && day<=30 )
            {
                printf("Sagittarius\n");
            }
            else
            {
                printf("The daily input is wrong\n");
            }
            break;
        case 12:
            if( day>=1 && day<=22 )
            {
                printf("Sagittarius\n");
            }
            else if( day>=23 && day<=31 )
            {
                printf("Capricornus\n");
            }
            else
            {
                printf("The daily input is wrong\n");
            }
            break;
        default :printf("The entry in month is wrong\n");
    }
    return 0;
}
