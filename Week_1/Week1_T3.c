//
// Created by vitun on 26/01/2026.
//

#include <stdio.h>
#include <stdbool.h>
#include "Week1_T3.h"
int main_T3(void){

  bool tof = true;
  int student_no;
  while(tof) {
    printf("Enter the number of students: \n");
    if (scanf("%d", &student_no) != 1){
      while(getchar() != '\n');
      printf("Invalid input, enter a positive number\n");
    }
    else if(student_no > 0){
      printf("%d students\n", student_no);
      tof = false;
    }
    else{
      printf("The number must be positive since your student count can't be negative you idiot, try again\n");
    }
  }
  int grades[student_no];
  for (int i = 0; i < student_no; i++) {
    grades[i] = -1;
  }
  enter_grades(grades, student_no);
  display_grades(grades, student_no);
  return 0;

}




void enter_grades(int grades[], int students) {
  int response;
  int grade;
  bool check = true;
  while (check) {
    printf("Enter student number (1 – %d) or 0 to stop:\n", students);
    //scanf("%d", &response);

    if (scanf("%d", &response) != 1) {    //virheen tarkistus
      while(getchar() != '\n');
      printf("invalid input\n");
    }
    else if (response == 0) {   //lopetus merkin tarkistus
      check = false;
    }

    //onnistunut oppilasnumeron syöttö, otetaan seuraavaksi arvosana
    else if (response >= 1 && response <= students) {
      bool loop = true;
      while (loop) {
        printf("Enter grade (0 – 5) for student %d or -1 to cancel:\n", response);
        //scanf("%d", &grade);

        if (scanf("%d", &grade) != 1) {   //virheen tarkistus
          while(getchar() != '\n');
          printf("invalid input\n");
        }
        else if (grade == -1) {
          loop = false; //break out of this loop and go back to asking which student
        }
        else if (grade >=0 && grade <= 5) { //onnistunut syöte, lisätään arvosana valitulle oppilaalle
          grades[response-1] = grade;
          loop = false;
        }
        else {
          printf("Grades must be a number 0-5, do you even have a degree to teach?\n");
          while(getchar() != '\n');
        }
      }
    }

    else {    //jäljelle jää vaihtoehto liian pieni tai iso oppilasnumero, tyhmä käyttäjä
      printf("You only have %d students you moron, try again\n", students);
      while(getchar() != '\n');
    }
  }
}

void display_grades(int grades[], int students) {
  printf("Student no.      Grade\n");
  for (int i = 0; i < students; i++) {
    if (grades[i] == -1) {
      printf("%d %*s \n", i+1, 18, "N/A");
    }
    else {
      printf("%d %*.d \n", i+1, 16, grades[i]);
    }
  }
}
