#include <stdio.h>

int main(){

    float m1,m2,m3,m4,m5;
    float total, average;
    float percentage;
    printf("enter five marks:");
    scanf("%f%f%f%f%f", &m1,&m2,&m3,&m4,&m5);
    total= m1 + m2 + m3 + m4 + m5;
    average= (total/5.0);
    percentage=(total / 500.0) * 100;
    printf("total: %f average: %f percentage: %f ", total, average, percentage);
    return 0;
}