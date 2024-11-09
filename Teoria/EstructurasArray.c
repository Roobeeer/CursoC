#include <stdio.h>
#include <string.h>


typedef struct  {
    char name[20];
    float gpa;
    int age;
}Student;
int main() {
     Student student1 = {"Uno",20,21};
     Student student2= {"Dos",3,12};
    Student student3= {"Tres",12,154};
    Student student4= {"Cuatro",4,1135};

    Student students[] = {student1, student2,student3,student4};
     for (int i = 0; i < sizeof(students)/sizeof(students[0]); ++i) {
         printf("%-12s",students[i].name);
         printf("%.2f\n",students[i].gpa);

     }





    return 0;




}



