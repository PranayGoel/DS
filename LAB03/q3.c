#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct{
    int day, month, year;
}dob;

typedef struct{
    int hno;
    int zip;
    char state[20];
}address;

typedef struct
{
    char name[20];
    dob d;
    address add;
}emp;


void reademp(emp *);

int main(){
    int n;
    printf("Enter no. of employees: ");
    scanf("%d", &n);
    emp *e = (emp *)malloc(n*sizeof(emp));
    for(int i = 0; i< n; i++) reademp(&e[i]);
    return 0;
}

void reademp(emp *e){
    printf("Enter name: ");
    scanf("%s", e->name);
    printf("enter dob: ");
    scanf("%d %d %d", &e->d.day, &e->d.month, &e->d.year);
    printf("Enter address: ");
    scanf("%d %d %s", &e->add.hno, &e->add.zip, e->add.state);
}



