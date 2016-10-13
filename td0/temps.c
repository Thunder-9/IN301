



#include <stdio.h>




int main()

{
	int input = 7271;
	int heures=input/3600;
	int x=input%3600;
	int minutes=x/60;
	int secondes=x%60;
	if (heures==1)
		printf("%d heure \n",heures);
	else
		printf("%d heures \n",heures);
	if (minutes==1)
		printf ("%d minute \n", minutes);
	else 
		printf ("%d minutes \n", secondes);
	if (secondes==1)
		printf("%d seconde \n", secondes);
	else
		printf("%d secondes \n",secondes);
	
		


return (0);
	
}

