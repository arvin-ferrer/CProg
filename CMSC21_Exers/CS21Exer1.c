#include <stdio.h>
#include <math.h>


int main(void){
//bmi formula weight (kg) / height^2 (m) 
double height, weight, inches;
double bmi;
int choice;
double underWeight = 18.5;
double normalWeight = 25;
double overWeight = 30;
double obese = 30;


do {
printf("=====Menu=====\n");
printf("[1] Metric\n");
printf("[2] Standard\n");
printf("[3] Exit\n");
printf("Please enter your choice: ");
scanf("%d", &choice);
if (choice == 1){
	printf("Enter your weight in kilograms: "); //getting the user input in kilograms
	scanf("%lf", &weight);
	printf("Enter your height in centimeters: ");
	scanf("%lf", &height);
	bmi = weight/(pow((height/100), 2.0));
	printf("BMI: %0.2lf\n", bmi);	
	if (bmi < underWeight){
		printf("BMI Category: Underweight\n");
	}
	else if (bmi >= underWeight && bmi < normalWeight){
		printf("BMI Category: Normal weight\n");
	
		
	}
	else if (bmi >= normalWeight && bmi < obese){
		printf("BMI Category: Overweight\n");
	
		
	}
	else{
		printf("BMI Category: Obese\n");
	
		
	}

}

else if (choice == 2){
	
	printf("Enter your weight in pounds: ");
	scanf("%lf", &weight);
	printf("Enter your height in feet: ");
	scanf("%lf", &height);
	printf("Enter your height in inches: ");
	scanf("%lf", &inches);
  bmi = (weight/pow(((height*12)+inches), 2.0))*703;
	printf("BMI: %0.2lf\n", bmi);	
	
	if (bmi == underWeight){
		printf("BMI Category: Underweight\n");
	}
	else if (bmi >= underWeight && bmi < normalWeight){
		printf("BMI Category: Normal weight\n");
	
		
	}
	else if (bmi >= normalWeight && bmi < obese){
		printf("BMI Category: Overweight\n");
	
		
	}
	else{
		printf("BMI Category: Obese\n");
	
		
	}

}


else if (choice == 3){
printf("Program Terminated.\n");
}

else {printf("Invalid choice\n");}

}



while (choice != 3); //while the choice of the user is not yet 3 then continue the do statement

	











}







