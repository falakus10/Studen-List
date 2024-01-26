#include <stdio.h>
#include <string.h>

typedef enum Gender{Female,Male} genus;
typedef struct STUDENT {
    char name[50];
    int std_number;
    float grade;
    genus which_gender;

}student;


void writeGender(genus gndr);
void writeInfo(student mek_student[], int arraySize);

int main () {

        student mek_student[3] = {"Ahmet", 1234, 85.50, Male,
                              "Ayse",3456,67.98,Female,
                              "Emre",7646,45.76,Male};
    writeInfo(mek_student, sizeof(mek_student)/sizeof(student));

    return 0;
}

void writeGender (genus gndr){
    switch (gndr) {
        case Female:
            printf("FEMALE\n");
            break;
        case Male:
            printf("MALE\n");
            break;
    }
}

void writeInfo(student mek_student[], int arraySize) {
    for (int i = 0; i < 3; i++) {
        printf("Name:%s\n", mek_student[i].name);
        printf("Student Number:%d\n", mek_student[i].std_number);
        printf("Grade:%2f\n", mek_student[i].grade);
        printf("Gender:");
        writeGender(mek_student[i].which_gender);
        printf("\n-------------------\n");
    }
}