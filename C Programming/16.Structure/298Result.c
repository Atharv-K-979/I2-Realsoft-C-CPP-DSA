#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "298Result.h"
int main() {
    MRK p;
    RES q;
    input(&p);
    display(&p);
    convert(&q,&p);
    displayRES(&q);
    return 0;
}