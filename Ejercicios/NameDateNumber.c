#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main() {
    /*Write a C program to print your name, date of birth, and mobile number.
    Expected Output:

    Name   : Alexandra Abramov
    DOB    : July 14, 1975
    Mobile : 99-9999999999*/

    char name [25];
    char date[20];
    char mobile[20];

    printf("Whats your name?\n");
    fgets(name,25,stdin);
    name[strlen(name)-1] = '\0';

    printf("Whats your date? (Format --> DAY/MONTH/YR)\n");
    scanf("%s",date);

    printf("Whats your mobile number?(Format 9 DIG)\n");
    scanf("%s",mobile);

    printf("Name : %s\nDOB : %s\nMobile : %s",name,date,mobile);
}