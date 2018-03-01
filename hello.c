#include<stdio.h>

void microkernel_sendmsg(char *);

int main (){
    printf("Hello World!\n");
    printf("This must be a monolithic design\n");
    microkernel_sendmsg("is more portable");
}

void microkernel_sendmsg(char *a){
    printf("microkernel: %s\n", a);
}

void microkernel_getmsg(char *b){
//TODO: getmsg feature
}
