#include <stdio.h>

int main () {

    float english, history , physics, average;
    char grade;

    printf("enter the grade for english");
    scanf(" %f ", &english );
    
    printf("enter the grade for history");
    scanf(" %f ", &history );

    printf("enter the grade for physics");
    scanf(" %f ", &physics );

    average = (english +  history +  physics  ) / 3;
    
    if (grade >= 90 );{
    grade = 'A+';
    } if  (average >= 80) {
    grade = 'A';
    } else if  (average >= 70) {
    grade = 'B';
    } else if (average >= 60) {
        grade = 'C';
    } else {
        grade = 'D';
    }

    printf("Average Marks ; %.2lf , average");
    printf("Grade:  %c\n", grade);

    return 0;
}