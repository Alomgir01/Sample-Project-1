/*Program-decompose with function.
Author: MD ALOMGIR HOSSAIN
ID-2022-1-60-125
date: 16 April,2022*/

#include<stdio.h>
void decomopose(double x, long *int_part, double *frac_part)
{
    *int_part=(long) x;
    *frac_part= x-*int_part;
}
int main(void)
{
    double x, *frac_part;
    long *int_part;
    printf("Enter a \'double\' number: ");
    scanf("%lf",&x);
    printf("\'int\' part is %d\n",(int)x);
    printf("\'frac\' part is %g",x-(int)x);
    getch();
}

