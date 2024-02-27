#include<stdio.h>

#include<stdlib.h>
#include<string.h>

char f(char *str,int n,int i)
{
    if(n/2==0)    
        return str;
    char temp;
    temp=str[i];
    str[i]=str[(n-(i+1))];
    str[(n-(i+1))]=temp;
    f(str,n/2,i+1);
}
int main()
{
    char str[100];
    int n,i=0;
    gets(str);
    n=strlen(str);
    printf("Enter a string:\n");
    printf("The reverse of the string is %s:\n",f(str,n,i));
    return 0;

}