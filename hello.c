#include<stdio.h>

void microkernel_sendmsg(char *);

int main (){
    printf("Hello World!\n");
    microkernel_sendmsg("is more portable");
}

void microkernel_sendmsg(char *a){
    printf("microkernel: %s\n", a);
}
