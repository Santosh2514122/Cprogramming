#include<stdio.h>
int main()
    {
        int team;
        {
        printf("Enter the teampreature\n:");
        scanf("%d",&team);
        if (team<0)
        printf("freezing weather");
        else if (team<10)
        printf("weather is very cold");
        else if (team<20)
        printf("weather is cold");
        else if (team<30)
        printf("weather is normal");
        else if (team<40)
        printf("weather is hot");
        else 
        printf("very hot weather");
        return 0;
    }
    }  