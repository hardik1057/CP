#include<math.h>
#include<stdio.h>
int main()
{
    int pin, n, direction, dist,x = 0, y = 0, tot = 0;
    int directions[5];
    scanf("%d", &pin);
    for (int i = 4; i >= 1; i--)
    {
        directions[i]=pin%10;
        pin /= 10;
    }
    scanf("%d", &n);
    int i=0;
    for (i; i < n; i++)
    {
        scanf("%d %d", &direction, &dist);
        tot += dist;
        switch (directions[direction])
        {
        case 1: y=y+dist;
                break;
        case 2: y=y-dist;
                break;
        case 3: x=x+dist;
                break;
        case 4: x=x-dist;
                break;
        }
    }
    int disp = sqrt((x * x )+ (y * y));
    printf("%d\n", tot);
    printf("%d\n" ,disp);
    if (x<0&& y>0)
    {
        printf("2\n ");
    }
    else if (x<0&&y<0)
    {
        printf("3\n ");
    }
    else if (x>0&&y<0)
    {
        printf("4\n ");
    }
    else if (x>0&&y>0)
    {
        printf("1\n ");
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}