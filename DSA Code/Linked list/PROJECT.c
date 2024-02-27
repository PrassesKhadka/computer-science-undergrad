#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node
{
    char name[30];
    char gender;
    int age;
    struct node* next;
}node;

node*head=NULL;
char source[30],destination[30],bus[30],class[30];
int seatarray[20];
void details(int);
int calculation(int,int);
void seat(int);
void bill(int,int);
int main()
{
    int j,cost,totalcost,no,x=0;
    printf("Enter the number of passengers:\n");
    scanf("%d",&no);
    fflush(stdin);
    details(no);
    printf("Enter the source place:\n");
    gets(source);
    printf("Enter the destination:\n");
    gets(destination);
    printf("These are the available buses:\n");
    printf("\t1.Annapurna Express\n");
    printf("\t2.KTM Express\n");
    printf("\t3.Pokhara Travels\n");
    printf("Enter the prefered bus:\t");
    scanf("%d",&j);
    do
    {
        switch(j)
        {
            case 1:
            {
                strcpy(bus,"Annapurna Express");
                cost=1000;
                totalcost=calculation(cost,no);
            };break;
            case 2:
            {
                strcpy(bus,"KTM Express");
                cost=2500;
                totalcost=calculation(cost,no);
            };break;
            case 3:
            {
                strcpy(bus,"Pokhara Travels");
                cost=1800;
                totalcost=calculation(cost,no);
            };break;
            default:
            {
                printf("Enter either 1/2/3\n");
                x=1;
                break;
            }
        }
    }while(x);
    seat(no);
    bill(totalcost,no);
    return 0;
}

void details(int no)
{
    char name[30],gender;
    int age;
    for(int i=0;i<no;i++)
    {
        printf("Name:");
        gets(name);
        printf("Gender(M/F):");
        scanf("%c",&gender);
        fflush(stdin);
        printf("Age:");
        scanf("%d",&age);
        addnode(name,gender,age);
    }
}

void addnode(char name[30],char gender,int age)
{
    node*ptr=NULL;
    node*ptr1;  //So that while traversing the head node will not get lost
    //character array cannot be declared directly this way #string copy function used ptr->name=name;             
    ptr=(node*)malloc(sizeof(node));
    strcpy(ptr->name,name);
    ptr->gender=gender;
    ptr->age=age;
    ptr->next=NULL;
    if(head==NULL)
        head=ptr;
    else 
    {
        ptr1=head;
        while(ptr1->next!=NULL)
        {
            ptr1=ptr1->next;
        }
        ptr1->next=ptr;
    }
}

int calculation(int cost,int no)
{
    int k,totalcost,ac=500;
    printf("Enter which class you prefer:\n");
    printf("\t1.A/C\n");
    printf("\t2.Non A/C\n");
    scanf("%d",&k);
    switch(k)
    {
        case 1:
        {
            strcpy(class,"A/C");  
            totalcost=(cost+ac)*no; 
            break;               
        }
        case 2:
        {
            strcpy(class,"Non A/C"); 
            totalcost=(cost)*no;
            break;
        }
    }
    return totalcost;
}

void seat(int no)
{
    printf("Seat Matrix:\n");
    printf("\t01  02\t11  12\n");
    printf("\t03  04\t13  14\n");
    printf("\t05  06\t15  16\n");
    printf("\t07  08\t17  18\n");
    printf("\t09  10\t19  20\n");
    printf("Enter your prefered seats:\n");
    for(int i=0;i<no;i++)
    {
        scanf("%d",seatarray[i]);
    }
}

void bill(int totalcost,int no)
{
    node*ptr=head;
    for(int i=0;i<no;i++)
    {
        printf("Passenger %d name is:\t",i+1);
        puts(ptr->name);
        printf("Passenger %d gender is:\t",i+1);
        printf("%c",ptr->gender);
        printf("Passenger %d age is:\t",i+1);
        printf("%d",ptr->age);
        ptr=ptr->next;
    }
    printf("\n");
    printf("Source Place:\t");
    puts(source);
    printf("Destination:\t");
    puts(destination);
    printf("Bus:\t");
    puts(bus);
    printf("Class:\t");
    puts(class);
    printf("Seats chosen:");
    for(int i=0;i<no;i++)
    {
        printf("%d\t",seatarray[i]);
    }
    printf("Total Bus fare:\t");
    printf("%d",totalcost);
    printf("Thank You!!!");
}