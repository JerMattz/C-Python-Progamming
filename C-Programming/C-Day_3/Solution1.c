// create 5 students with marks 
// 77.0, 99.0, 85.8, 75.3, 66.0 -> 
// find 1 , 2 and 3 rd rank students

#include <stdio.h>

typedef struct std {
    char name[10];
    int rollno;
    float mark;
} Student;

void printstudent(Student std) {
    printf("name: %s rollno : %d mark : %.1f\n", std.name, std.rollno,
std.mark);
}

int main() {
    Student arrstudent[5] = {
        {"Ajay", 20, 77.0},
        {"Rahul", 21, 99.0},
        {"Vijay", 22, 85.8},
        {"Bala", 22, 75.3},
        {"Kumar", 22, 66.0}
    };

    for (int i = 0; i < 5 - 1; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (arrstudent[i].mark < arrstudent[j].mark) {
                Student temp = arrstudent[i];
                arrstudent[i] = arrstudent[j];
                arrstudent[j] = temp;
            }
        }
    }

    printf("\nTop 3 students:\n");
    for (int i = 0; i < 3; i++) {
        printstudent(arrstudent[i]);
    }

    return 0;
}


// #define STUDENT_STRUCT \
//     char name[10]; \
//     int rollno; \
//     float mark;

// struct Student
// {
//     STUDENT_STRUCT
// };
