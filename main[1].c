/*
A simple calculator
created by Ngunjiri Erick
on 24th, January 2022
MIT License
C89 compiler
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declaration
    char name[100];
    int t1,t2,sum,diff,product;
    float quot;
    printf("simple calculator!\n");

    // capture input
    printf("Enter your name: ");
    gets(name);
    printf("Enter two integers: ");
    scanf("%d%d", &t1,&t2);
    //copulations
    sum = t1 + t2;
    diff = t1 - t2;
    product = t1 * t2;
    quot = (float)t1/t2;

    // outputs
    printf("Hey %s, here is your results:\n",name);
    printf("%6d + %6d\n",t1,t2,sum);
    printf("%6d - %6d\n",t1,t2,diff);
    printf("%6d * %6d\n",t1,t2,product);
    printf("%6d / %6.2f\n",t1,t2,quot);
    return 0;
}
