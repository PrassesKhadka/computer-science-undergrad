//To calculate the HCF of two numbers using recursion
//GCD-Greatest common divisor

#include <stdio.h>
int hcf(int n1, int n2);
int main() {
    int n1, n2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    printf("G.C.D of %d and %d is %d.", n1, n2, hcf(n1, n2));
    return 0;
}

int hcf(int n1, int n2) {
    if (n2 != 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
}




// #include<stdio.h>

// #include<stdlib.h>

// int f(int a,int b,int i)
// {
//     static int hcf;
//     if(a==1 || b==1)
//         return 1;
//     if(a%i==0 && b%i==0)
//     {
//         hcf=i;
//     }
//     else if(i>a && i>b)
//     {
//         return hcf;
//     }
//     f(a,b,i+1);
// }
// int main()
// {
//     int a,b,i=1,hcf;
//     printf("Enter two numbers:\n");
//     scanf("%d %d",&a,&b);
//     hcf=f(a,b,i);
//     printf("The HCF of two numbers is: %d",hcf);
//     return 0;
// }