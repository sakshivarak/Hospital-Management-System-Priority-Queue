#include<stdio.h>
#include<malloc.h>
#include<conio.h>
void drinfo();

struct node
{
    char *name[100];
    int age;
    char *address[100];
    int phone;
    char bloodgroup[100];
    int reg;
    int priority;
    struct node *next;
};
struct node *start= NULL;
struct node *insert(struct node *);
struct node *delete(struct node *);
int main()
{

    int option;


    do{
            //system("COLOR 46");
         printf("\t\t\t-------------------------------\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\n");
        printf("\t\t\t\t\t\t\t\t\t\t\n");
        printf("\t\t\t WELCOME TO CITY HOSPITAL!\n");
        printf("\t\t\t\t\t\t\t\t\t\t\n");
        printf("\t\t\t\t\t\t\t\t\t\t\n");
        printf("\t\t\t-------------------------------\n");
        printf("\t\t\t1.ADD A PATIENT\n");
        printf("\t\t\t2.DELETE A RECORD\n");
        printf("\t\t\t3.DISPLAY ALL APPOINTMENTS\n");
        printf("\t\t\t4.DOCTOR INFORMATION\n");
        printf("\t\t\t5.EXIT\n");
        printf("\t\t\tEnter your choice:");
        scanf("%d",&option);
    switch(option)
    {
    case 1:
        start= insert(start);
        getchar();
        break;
    case 2:
        start= delete(start);
        getchar();
        break;
    case 3:
        display(start);
        getchar();
        break;

    case 4:
          drinfo();
          break;

    case 5:
         exit(0);
         break;
    }
}while(option!=5);
}
struct node *insert(struct node *start)
{
    int val2,val4,val6,pri;
    char val1,val3,val5;
    struct node *ptr,*p;
    char* name[100];
    char* address[100];
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter patient Name:");
    scanf(" %s",ptr-> name);
    printf("Enter the patient's age:");
    scanf("%d",&val2);
    printf("Enter your home address:");
    scanf(" %s",ptr->address);
    printf("Enter your phone number:");
    scanf("%d",&val4);
    printf("Enter the blood group of Patient:");
    scanf(" %s",ptr->bloodgroup);
    printf("Enter the reg no:");
    scanf("%d",&val6);
    table();
    scanf("%d",&pri);
    ptr->age=val2;
    ptr->phone=val4;
    ptr->reg=val6;
    ptr->priority=pri;
    if((start==NULL)||pri<start->priority)
    {
        ptr->next=start;
        start=ptr;
    }
    else
        {
            p=start;
            while(p->next!=NULL && p->next->priority <=pri)
                p=p->next;
            ptr->next=p->next;
            p->next=ptr;
        }
        return start;
};
struct node *delete(struct node *start)
{
    struct node *ptr;
    if(start==NULL)
    {
        printf("\n NO PATIENT RECORD TO DELETE\n");
        return;
    }
    else
    {
        ptr= start;
        printf("\n Deleted Record is : %d\n",ptr->reg);
        start=start->next;
        free(ptr);
    }
    return start;
};
void display(struct node *start)
{
    struct node *ptr;
    ptr=start;
    if(start==NULL)
        printf("\nTHERE IS NO PATIENT");
    else
    {
        printf("\Priority wise appointments are:\n");
        while(ptr!=NULL)
        {
            printf("\nThe name of patient is:%s\n",ptr->name);
                printf("The age of patient is:%d\n",ptr->age);
                printf("The address of patient is : %s\n",ptr->address);
                printf("Phone Number:%d\n",ptr->phone);
                printf("The blood group of patient is:%s\n",ptr->bloodgroup);
                printf("---------------------------------------------------\n");
                ptr=ptr->next;
        }
    }
    getchar();
    }
void table()
{
    printf("\nPLEASE REFER THIS TABLE FOR YOUR DISEASE NUMBER!\n");
    printf("1.Heart attack\n");
    printf("2.Severe wound/Bleeding\n");
    printf("3.Cancer\n");
    printf("4.Chest pain\n");
    printf("5.Fracture\n");
    printf("6.Diabetes Checkup\n");
    printf("7.Infection\n");
    printf("8.Viral Fever\n");
    printf("9.Common Cold/Head ache\n");
    printf(" ENTER YOUR DISEASE NUMBER\n");
}

 void drinfo()
{
    printf("DETAILS OF DOCTORS\n");
    printf("---------------------------------------------------\n");
    printf("Name : Dr.Anjali naik\n");
    printf("Specialisation : cardiology\n");
    printf("CONTACT INFORMATION\n");
    printf("Phone number : 2311678898\n");
    printf("Email id : anjali11@gmail.com\n");
    printf("CREDENTIALS\n");
    printf("MD(doctor of medicine\n");
    printf("AVAILABILITY\n");
    printf("monday-friday\n 10 am - 5 pm\n");
    printf("---------------------------------------------------\n");


    printf("\n---------------------------------------------------\n");
    printf("Name : Dr.Vrushali Sawant\n");
    printf("Specialisation : Neurology\n");
    printf("CONTACT INFORMATION\n");
    printf("Phone number : 1289035456\n");
    printf("Email id : vrushali123@gmail.com\n");
    printf("CREDENTIALS\n");
    printf("MD ,board certification(American Board of Psychiatry and Neurology in the U.S)\n");
    printf("AVAILABILITY\n");
    printf("monday-wednesday\n 11 am - 4 pm\n");
    printf("---------------------------------------------------\n");

    printf("\n---------------------------------------------------\n");
    printf("Name : Dr.Sneha Prabhu\n");
    printf("Specialisation : Oncologist(treating Cancer)\n");
    printf("CONTACT INFORMATION\n");
    printf("Phone number : 1823545690\n");
    printf("Email id : prabhu@gmail.com\n");
    printf("CREDENTIALS\n");
    printf("MD\n");
    printf("AVAILABILITY\n");
    printf("wednesday\n 10 am - 4 pm\n");
    printf("---------------------------------------------------\n");

    printf("\n---------------------------------------------------\n");
    printf("Name : Dr.Shreyash Raut\n");
    printf("Specialisation : Orthopedic surgeon\n");
    printf("CONTACT INFORMATION\n");
    printf("Phone number : 1234566690\n");
    printf("Email id : shreyash@gmail.com\n");
    printf("CREDENTIALS\n");
    printf("MD\n");
    printf("AVAILABILITY\n");
    printf("thurday-saturday\n 10 am - 4 pm\n");
    printf("---------------------------------------------------\n");

    printf("\n---------------------------------------------------\n");
    printf("Name : Dr.Aaron D'souza\n");
    printf("Specialisation :Pediatrician\n");
    printf("CONTACT INFORMATION\n");
    printf("Phone number : 3788566690\n");
    printf("Email id : aarondsouza@gmail.com\n");
    printf("CREDENTIALS\n");
    printf("MD\n");
    printf("AVAILABILITY\n");
    printf("tuesday-saturday\n 12 am - 3 pm\n");
    printf("---------------------------------------------------\n");

    printf("\n---------------------------------------------------\n");
    printf("Name : Dr.Sam Narohna\n");
    printf("Specialisation :Dermatologist\n");
    printf("CONTACT INFORMATION\n");
    printf("Phone number : 3788542320\n");
    printf("Email id : sam1234@gmail.com\n");
    printf("CREDENTIALS\n");
    printf("MD\n");
    printf("AVAILABILITY\n");
    printf("monday\n 12 am - 3 pm\n");
    printf("---------------------------------------------------\n");

}
