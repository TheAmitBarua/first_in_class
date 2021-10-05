#include <stdio.h>
int main(){
    float m,t,p,l;
    printf("Cost of food: ");
    scanf("%f", &m);
    printf("Enter tax percent: ");
    scanf("%f",&t);
    printf("Enter tip percent: ");
    scanf("%f", &p);
    printf("\n******Bill******\n");
    printf("Cost: $%.2f\n",m);
    printf("Tax: $%.2f\n",(t/100)*m);
    printf("Tip: $%.2f\n", (p/100)*m);
    l = m + (t/100)*m + (p/100)*m;
    printf("Total: %.2f", l);
    return 0;

}

