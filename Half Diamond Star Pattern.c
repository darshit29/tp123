//Half Diamond Star Pattern#include<stdio.h>int main(){    int a, b , c;    c=1;    for(a=1;a<10;a++)    {        for(b=1; b<=c; b++)        {            printf("*");        }        if(a < 5)        {           c++;        }        else        {                    c--;        }        printf("\n");    }    return 0;}