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
#include "structs.h"


int main(void) {
    
    struct rational a;
    a.denominator=5;
    a.numerator=5;
    printf("%d / %d\n", a.numerator, a.denominator);
    return 0;
}
