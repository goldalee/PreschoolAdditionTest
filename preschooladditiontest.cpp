/*Purpose: Preschool Addition Program*/
//Golda-Lee Sawyers
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int num1, num2,sum, response, correctResponses, count;
	double percentage;
	correctResponses=0;
	srand(time(NULL));
	printf("\t\tWELCOME TO THE ADDITION GAME\n\t\tWHERE MATH IS FUN\n\n"
	"Answer the questions by typing in the correct response:\n\n");
	for(count=0;count<5; count++){
		num1 = 1 + rand()% 19;
		num2 = 1 + rand()%19;
		sum = num1+num2;
		
		printf("%d.\t%2d + %2d = ",count+1,num1, num2);
		scanf("%d", &response);
	
		if(response==sum){
			correctResponses++;
		}
		
}
	printf("Your score is: %d/%d\n",correctResponses,count);
	percentage = (float(correctResponses)/5.00)*100;
	printf("\nThat's: %.0f%%\n",percentage);
	return 0;
}
