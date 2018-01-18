//
//  main.c
//  structs
//
//  Created by Francisco Gonzalez  on 1/18/18.
//  Copyright © 2018 Francisco  Gonzalez . All rights reserved.
//

#include <stdio.h>
#include <string.h> // for functions such as strncpy
#include "structs.c"


int main(void) {
    // insert code here...
    
    struct rational a;
    a.denominator=5;
    a.numerator=5;
    printf("%d / %d\n", a.numerator, a.denominator);
    return 0;
}
