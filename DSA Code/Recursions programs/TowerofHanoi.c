// Tower of Hanoi->Mathematical puzzle/Game Using recursion
#include<stdio.h>

#include<stdlib.h>

void TowerofHanoi(int n,char from,char to ,char aux)
{
    if(n==0)
        return;
    TowerofHanoi(n-1,from,aux,to);
    printf("Transfer disk %d from %c to %c\n",n-1,from,to);
    TowerofHanoi(n-1,aux,to,from);
}

int main()
{
    int n;
    char from='A';
    char to='C';
    char aux='B';
    printf("Enter the number of disks:\n");
    scanf("%d",&n);
    // There are three sticks A,B,C we have to put disks from A To C
    //The rules are:using B(auxillary stick),1 disk at a time,the larger disk cannot be below smaller disks
    TowerofHanoi(n,from,to,aux);
    return 0;
}