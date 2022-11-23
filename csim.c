https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include "cachelab.h"
#include <getopt.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


typedef struct {
    unsigned long int v;
    unsigned long int tag;
    int position;
}line;


typedef struct{
     line* lines; 
}set ;    
         
typedef struct {
     set* sets;
     int setnum;
     int linenum;
}cache;      

int miss;
int hits;
int evictions;

int main()
{
    printSummary(0, 0, 0);
    return 0;
}
                                                              

