#include <stdio.h>
#include <time.h>
void f()
{
    int i=0;
    while (i<1000000000)
    {
        i++;
    }
}
int main()
{
    clock_t t;
    t = clock();
    f();
    t = clock()-t;
    printf("%lf\n", (double)(t) / CLOCKS_PER_SEC);
    return 0;
}