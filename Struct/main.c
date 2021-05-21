#include <stdio.h>
#include <stdlib.h>

struct Student{
char name[50];
char major[50];
int age;
double gpa;
};

int main(){

   struct Student student1;
   student1.age = 22;
   student1.gpa = 3.2;
   strcpy(student1.name, "Mark");
   strcpy(student1.major, "Web Development");

   struct Student student2;
   student2.age = 21;
   student2.gpa = 3.0;
   strcpy(student2.name, "Jayziol");
   strcpy(student2.major, "Web Development");

   printf(" %s", student1.name);



    return 0;
}
