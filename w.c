#include<stdio.h>
#include<unistd.h>
int main(){
int n = write(1,"Hello",5);
printf("\nvalue of n is %d", n);
}
