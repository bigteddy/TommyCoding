#include <stdio.h>
#include <math.h>
// #include <string.h>


int main () {
    printf("%.3f\n", 8.0/5.0);
    printf("%.8f\n", 1+2*sqrt(3)/(5-0.1));

    char a[100] = "abcd";
    scanf("%d%d", &a, &b);
    printf("output is: %s\n", a);
    
    char name[100];

    printf("Who are you? ");
    // scanf("%99s", name);   // Input String
    fgets(name, 15, stdin);
    name[strcspn(name, "\n")] = '\0';  // remove newline
    printf("Hello %s ^_^", name);

    int n = 555;
    printf("%06d", n);

    const double pi = acos(-1.0);
    double r, h, s1, s2, s;
    scanf("%lf%lf", &r, &h);
    
    s1 = pi*r*r;
    s2 = 2*pi*r*h;
    s = s1*2.0 + s2;
    printf("Area = %.3f\n", s);

    // int n;
    // scanf("%d", &n);
    // printf("%d\n", n*20);

    // printf("%1f\n", 11111.0*11111.0);
    // printf("%f\n", sqrt(-10));

    return 0;
}