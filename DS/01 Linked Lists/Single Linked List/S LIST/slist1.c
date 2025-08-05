#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>
#include "slist1.h" // to demonstrate functions
int main() {
    addEnd(10);
    addEnd(20);
    addEnd(30);
    display();
    addBeg(40);
    display();
    return 0;
}