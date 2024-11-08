#include <stdio.h>
#include <string.h>
void birthday(char name[],int day, int month) {

    printf("Hi %s\nYour birthday is on %d/%d of 2024",name,day,month);
}
int main() {
    birthday("Rober",2,12);
    return 0;
}
