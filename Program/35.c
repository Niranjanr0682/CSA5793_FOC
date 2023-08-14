// A student wants to know his grade point average for the semester. The grades are given in letter grades with numeric equivalents. Develop a solution to calculate a grade point average given the letter grades. (Remember, the grade point average is figured per unit of credit, not per course.) An A = 4.0, B = 3.0, C = 2.0, D = 1.0, F = 0.0. Write the algorithm to test the solution with the following data and draw flowchart and write pseudocode:

// History	B	3 units
// Economics	A	3 units
// PE	A	1 unit
// Chemistry	C	4 units
// Art	B	3 units

// (Hint: Use a trip value to stop the processing of the loop and a case structure to find the grade points.)

#include <stdio.h>
#include <ctype.h>

int main() 
{
    char continue_or_stop;
    double total_units = 0;
    double total_grade_points = 0;
    do {
        char course_name[100];
        char grade_letter;
        double units, grade_points;
        printf("Enter course name: ");
        scanf("%s", course_name);
        printf("Enter grade letter: ");
        scanf(" %c", &grade_letter);  // Notice the space before %c to consume the newline character
        grade_letter = toupper(grade_letter);
        printf("Enter units: ");
        scanf("%lf", &units);

        switch (grade_letter) 
        {
            case 'A':
                grade_points = 4.0;
                break;
            case 'B':
                grade_points = 3.0;
                break;
            case 'C':
                grade_points = 2.0;
                break;
            case 'D':
                grade_points = 1.0;
                break;
            case 'F':
                grade_points = 0.0;
                break;
            default:
                printf("Invalid grade letter\n");
                continue;
        }

        total_grade_points += grade_points * units;
        total_units += units;
        printf("Enter 'stop' to finish, or any other key to continue: ");
        scanf(" %c", &continue_or_stop);} 
    while (tolower(continue_or_stop) != 'stop');
    if (total_units > 0) 
        {double GPA = total_grade_points / total_units;
        printf("Your GPA for the semester is: %.2lf\n", GPA);} 
    else 
        {printf("No data entered.\n");}

    return 0;
}
