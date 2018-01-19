#include <stdio.h>
#include "structs.h"

struct nametype{
    char first[10];
    char midinit;
    char last[20];
};

struct addrtype{
    char straddr[40];
    char city[10];
    char state[2];
    char zip[5];
};
// total size in bytes: 88

struct nmadtype {
    struct nametype name;
    struct addrtype address;
};

struct position{
    char deptno[2];
    char jobtitle[20];
};

struct date{
    int month;
    int day;
    int year;
};

struct employee{
    struct nmadtype nameaddr;
    struct position job;
    float salary;
    int numpdep;
    short int hplan;
    struct date datehired;
    int sindex;
};

struct student{
    struct nmadtype nmad;
    float gpindx;
    int credits;
    struct date dateadm;
};

//example for company's policies
struct addr{
    char street[50];
    char city[10];
    char state[2];
    char zip[5];
};


struct policy{
    int polnumber;
    char name[30];
    struct addr address;
    int amount;
    float premium;
    int kind; /* either LIFE, AUTOMOBILE or HOME */
    union{
        struct{
            char beneficiary[30];
            struct date birthday;
        } life;
        struct{
            int autodeduct;
            char license[10];
            char state[2];
            char model[15];
            int year;
        }  automobile;
        struct {
            int homededuct;
            int yearbuilt;
        } home;
    } policyinfo;
};

struct policy p;

struct stint{
    int f3, f4;
};

struct stfloat{
    float f5, f6;
};

struct sample{
    int f1;
    float f2;
    int utype;
    union{
        struct stint x;
        struct stfloat y;
    } funion;
};

int writename(name) struct nametype *name;{
    int count, i;
    
    printf("\n");
    count = 0;
    for (i=0; (i < 10) && (name->first[i] != '\0'); i++){
        printf("%c", name->first[i]);
        count++;
    }
    printf("%c", ' ');
    count++;
    if(name->midinit != ' '){
        printf("%c%s", name->midinit, ". ");
        count += 3;
    }
    for (i = 0; (i < 20) && (name->last[i] != '\0'); i++){
        printf("%c", name->last[i]);
        count++;
    }
    printf("\n");
    return(count);
}

struct employee e[100];
struct student s[100];

struct employee empset[100];
/*
raise(e) struct nametype *e;{
    if ((strcmp(e.nameaddr.name.first, s.nmad.name.first)==0) && (e.nameaddr.name.midinit == s.nmad.name.midinit) && (strcmp(e.nameaddr.name.last. s.nmad.name.last) == 0))
        if(s.gpindx > 3.0)
        e.salary *= 1.10;
}
*/
#define THISYEAR 2000
/*raise(e) struct employee e[];{
    int i;
    
    for(i = 0; i < 100; i++)
        if(e[i].datehired.year < THISYEAR - 10)
            e[i].salary *= 1.10;
        else
            e[i].salary *=1.05;
}*/


/*
 struct nametype name;
strncpy(name.first, "Sara", 10);
name.midinit = 'M';
strncpy(name.last, "Binder", 10);


writename(&name);*/

int returnSeven(void) {

	printf("%lu\n", sizeof(p));
	return 7;
}

struct rational {
    int numerator;
    int denominator;
};

void reduce (inrat, outrat) struct rational *inrat, *outrat;{
    int a, b, rem;
    
    if(inrat->numerator > inrat->denominator){
        a = inrat->numerator;
        b = inrat->denominator;
    }
    else {
        a = inrat->denominator;
        b = inrat->numerator;
    }
    while (b != 0){
        rem = a % b;
        a = b;
        b = rem;
    }
    outrat->numerator /= a;
    outrat->denominator /= a;
}

#define TRUE 1
#define FALSE 0

equal(rat1, rat2) struct rational *rat1, *rat2; {
    struct rational r1, r2;
    
    reduce(rat1, &r1);
    reduce(rat2, &r2);
    if (r1.numerator == r2.numerator && r1.denominator == r2.denominator)
        return(TRUE);
    return(FALSE);
}

void multiply(r1, r2, r3) struct rational *r1, *r2, *r3;{
    struct rational rat3;
    
    rat3.numerator =  r1->numerator * r2->numerator;
    rat3.denominator = r1->denominator * r2->denominator;
    reduce(&rat3,r3);
}
