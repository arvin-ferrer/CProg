#include <stdio.h>

int main(void){
  int noPandemic = 15;
  int withPandemic = 12;
  int defaultAns = 1;

  double grade1;
  double grade2;
  double grade3;
  double grade4;
  double grade5;
  
  int unit1;
  int unit2;
  int unit3;
  int unit4;
  int unit5;
  int totalNoUnits;

  double gwa;

  int failedSub = 0;
  printf("What type of semester were the grades obtained? [1]Pandemic or [2]Pre/Post Pandemic: ");
  scanf("%d", &defaultAns);
  
  printf("Enter grade: ");
  scanf("%lf", &grade1);
  if (grade1 >= 4){
    failedSub += 1;
  }
  printf("Enter number of units: "); 
  scanf("%d", &unit1);
  totalNoUnits += unit1;

  printf("Enter grade: ");
  scanf("%lf", &grade2);
  if (grade2 >= 4){
    failedSub += 1;
  }

  printf("Enter number of units: ");
  scanf("%d", &unit2);
  totalNoUnits += unit2;

  printf("Enter grade: ");
  scanf("%lf", &grade3);
  if (grade3 >= 4){
    failedSub += 1;
  }


  printf("Enter number of units: ");
  scanf("%d", &unit3);
  totalNoUnits += unit3;

  printf("Enter grade: ");
  scanf("%lf", &grade4);
  if (grade4 >= 4){
    failedSub += 1;
  }

  printf("Enter number of units: ");
  scanf("%d", &unit4);
  totalNoUnits += unit4;


  printf("Enter grade: ");
  scanf("%lf", &grade5);
  if (grade5 >= 4){
    failedSub += 1;
  }

  printf("Enter number of units:");
  scanf("%d", &unit5);
  totalNoUnits += unit5;
  gwa = ((grade1*unit1) + (grade2*unit2) + (grade3*unit3) + (grade4*unit4) + (grade5*unit5))/totalNoUnits;
  char permit;
  char* summa = "If you can maintain your GWA you can graduate summa cum laude\n";
  char* magna = "If you can maintain your GWA you can graduate magna cum laude\n";
  char* laude = "If you can maintain your GWA you can graduate cum laude\n";


  printf("Your GWA is %.4f\n", gwa);
  if ((defaultAns == 1 && totalNoUnits < 12) || (defaultAns == 2 && totalNoUnits < 15)){
    //if pandemic era
        printf("Did you file for an underload permit? (y/n) ");
        scanf(" %c", &permit);    
        if ((permit == 'y' || permit == 'Y') && gwa <= 1.20){
          printf("%s", summa);
    
        }
        else if ((permit == 'y' || permit == 'Y') && 1.45 >= gwa && gwa > 1.20){
          printf("%s", magna);
        }
        else if ((permit == 'y' || permit == 'Y') && 1.75 >= gwa && gwa > 1.45){
          printf("%s", laude);
        }
        else if ((permit == 'y' || permit == 'Y') && gwa > 1.75){
          printf("Improve your GWA to receive latin honors\n");
        }
        else{
          printf("You are underloaded since your total number of units is only %d. This disqualifies you from having latin honors since you did not file an Underload permit.\n", totalNoUnits);
        }
        switch(failedSub){
          case 2:
            printf("Scholastic Deliquency: Warning\n");
            break;
          case 3:
            printf("Scholastic Deliquency: Probation\n");
            break;
          case 4:
            printf("Scholastic Deliquency: Dismissal\n");
            break;
          case 5:
            printf("Scholastic Deliquency: Disqualification\n");
            break;  
        }
        
      }

  else if (totalNoUnits > 18){
    char overloadPermit;
    printf("Did you file for an overload permit? (y/n)");
    scanf(" %c", &overloadPermit);
    if(overloadPermit == 'n' || overloadPermit == 'N'){
      printf("Some of your courses will be dropped.\n");
    }
    if (1.75 >= gwa && gwa > 1.45){
      printf("%s", laude);
    }
    else if(1.45 >= gwa && gwa > 1.20){
      printf("%s", magna);
    }
    else if(gwa <= 1.20){
      printf("%s", summa);
    }
    else{
      printf("Improve your GWA to receive latin honors\n");
    }
    switch(failedSub){
        case 2:
          printf("Scholastic Deliquency: Warning\n");
          break;
        case 3:
          printf("Scholastic Deliquency: Probation\n");
          break;
        case 4:
          printf("Scholastic Deliquency: Dismissal\n");
          break;
        case 5:
          printf("Scholastic Deliquency: Disqualification\n");
          break;  
      }
  }
  else{
    if (1.75 >= gwa && gwa > 1.45){
      printf("%s", laude);
    }
    else if(1.45 >= gwa && gwa > 1.20){
      printf("%s", magna);
    }
    else if(gwa <= 1.20){
      printf("%s", summa);
    }
    else{
      printf("Improve your GWA to receive latin honors\n");
    }
    switch(failedSub){
        case 2:
          printf("Scholastic Deliquency: Warning\n");
          break;
        case 3:
          printf("Scholastic Deliquency: Probation\n");
          break;
        case 4:
          printf("Scholastic Deliquency: Dismissal\n");
          break;
        case 5:
          printf("Scholastic Deliquency: Disqualification\n");
          break;    
    }

  }

}

  





