//
//  stack.c
//  Data structures
//
//  Created by Francisco Gonzalez  on 1/14/18.
//  Copyright © 2018 Francisco  Gonzalez . All rights reserved.
//

#include "stack.h"
#include <stdbool.h>
#define STACKSIZE 100
#define INTGR 1
#define FLT 2
#define STRING 2

struct stack {
	int top;
	int items[STACKSIZE];
};


struct stackelement {
	int etype;

	union {
		int ival;
		float fval;
		char *pval; /* points to a string */
	} element;
};
struct stack {
	int top;
	struct stackelement items[STACKSIZE];
};


//switch (se.etype) {
//	case INTGR: printf("% d\n", se.ival);
//	case FLT: printf("% f\n", se.fval);
//	case STRING: printf("% s\n", se.pval);
//}

empty(ps) struct stack *ps; {
	if (ps->top == -1)
		return(true); 
	else
		return(false); 
	/* alternatively, return(ps->top == -1);*/
}

pop(ps) struct stack *ps; {
	if (empty(ps)) {
		printf("%s\n", "Stack underflow.");
		exit(1);
	}
	else (ps->items[ps->top--]);
	return 0;
}

//popandtest(ps, px, pund) 
//struct stack *ps;
//int *pund, *px; {
//	
//	if (empty(ps)) {
//		*pund = true;
//		return;
//	}
//	*pund = false;
//	*px = ps->items[ps->top--];
//	return;
//}

push(ps, x) struct stack *ps;
int x; {
	if (ps->top == STACKSIZE-1) {
		printf("%s \n", "Stack overflow");
		exit(1);
	} else 
		ps->items[++(ps->top)] = x;
	return;
}

stacktop(ps) struct stack *ps; {
	if (empty(ps)) {
		printf("%s\n", "Stack underflow.");
		exit(1);
	}
	else (ps->items[ps->top]);
	return 0;
}

void bar()
{
	printf("n");
}