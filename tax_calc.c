
#include <stdio.h>
#include <math.h>

int main()
{
//Declare Variables
float NetIncome, Income, taxes;
int selection, TaxRate;

//Get selction from user
printf("\nTax Calculator ");
printf("\nFiling Status: ");
printf("\n (1) Single");
printf("\n (2) Married");
printf("\n (3) Head of household");
printf("\n (0) Quit Program");
printf("\n Please make selection: ");
scanf("%d", &selection);

//While statement to make program loop unless 0 is entered
while (selection != 0)
{	
//Switch to find selection
	switch (selection)
	{	//Single case
		case 1:
		{//Check annual income
			printf("Enter your annual income: ");
			scanf("%f", &Income);
//Check upper and lower bound of annual income
			if (Income <= 0)
				TaxRate=0;
			else if (Income >0 && Income <= 9000)
				TaxRate=10;
			else if (Income >9000 && Income <= 36000)
                                TaxRate=15;
			else if (Income >36000 && Income <= 87000)
                                TaxRate=25;
			else if (Income >87000 && Income <= 183000)
                                TaxRate=27;
			else if (Income >183000 && Income <= 397000)
                                TaxRate=30;
			else if (Income >397000 && Income <= 500000)
                                TaxRate=35;
			else
				TaxRate=40;

			printf("-------------------");
			printf("\n Your tax rate is: %d%%", TaxRate);
//Calculate taxes and NetIncome			
			taxes= Income * TaxRate / 100;
			NetIncome = Income - taxes;
			
			printf("\n You pay $%.2f in taxes", taxes);
			printf("\n After taxes your net income is: $%.2f \n", NetIncome);
//Loop again			
			printf("\nFiling Status: ");
			printf("\n (1) Single");
			printf("\n (2) Married");
			printf("\n (3) Head of household");
			printf("\n (0) Quit Program");
			printf("\n Please make selection: ");
			scanf("%d", &selection);

			
			break;
 		}	
//Married case			
		case 2:
		{//Check annual income
			printf("Enter your annual income: ");
			scanf("%f", &Income);
//Check upper and lower bound of annual income
                        if (Income <= 0)
                                TaxRate=0;
                        else if (Income >0 && Income <= 17000)
                                TaxRate=10;
                        else if (Income >17000 && Income <= 72000)
                                TaxRate=15;
                        else if (Income >72000 && Income <= 147000)
                                TaxRate=25;
                        else if (Income >147000 && Income <= 225000)
                                TaxRate=27;
                        else if (Income >225000 && Income <= 400000)
                                TaxRate=30;
                        else if (Income >400000 && Income <= 550000)
                                TaxRate=35;
                        else
                                TaxRate=40;

			printf("-------------------");
                        printf("\n Your tax rate is: %d%%", TaxRate);
//Calculate taxes and netincome
                        taxes= Income * TaxRate / 100;
                        NetIncome = Income - taxes;

                        printf("\n You pay $%.2f in taxes", taxes);
                        printf("\n After taxes your net income is: $%.2f \n", NetIncome);
//Loop again			
			printf("\nFiling Status: ");
			printf("\n (1) Single");
			printf("\n (2) Married");
			printf("\n (3) Head of household");
			printf("\n (0) Quit Program");
			printf("\n Please make selection: ");
			scanf("%d", &selection);


			break;
		}		
//Head of Household case	
		case 3:
		{//Check annual income
			printf("Enter your annual income: ");
			scanf("%f", &Income);
//Check upper and lower bounds of annual income
                        if (Income <= 0)
                                TaxRate=0;
                        else if (Income >0 && Income <= 12000)
                                TaxRate=10;
                        else if (Income >12000 && Income <= 47000)
                                TaxRate=15;
                        else if (Income >47000 && Income <= 125000)
                                TaxRate=25;
                        else if (Income >125000 && Income <= 205000)
                                TaxRate=27;
                        else if (Income >205000 && Income <= 390000)
                                TaxRate=30;
                        else if (Income >390000 && Income <= 450000)
                                TaxRate=35;
                        else
                                TaxRate=40;

			printf("-------------------");
                        printf("\n Your tax rate is: %d%%", TaxRate);
//Calculate taxes and netincome
                        taxes= Income * TaxRate / 100;
                        NetIncome = Income - taxes;

                        printf("\n You pay $%.2f in taxes", taxes);
                        printf("\n After taxes your net income is: $%.2f \n", NetIncome);
//Loop again			
			printf("\nFiling Status: ");
			printf("\n (1) Single");
			printf("\n (2) Married");
			printf("\n (3) Head of household");
			printf("\n (0) Quit Program");
			printf("\n Please make selection: ");
			scanf("%d", &selection);


			break;
		}			
//If anything besides 1,2,3, or 0 is entered, shows prompt of inccorect selection
		default:
		{
			printf("Incorrect selection.\n");
			
			printf("\nFiling Status: ");
			printf("\n (1) Single");
			printf("\n (2) Married");
			printf("\n (3) Head of household");
			printf("\n (0) Quit Program");
			printf("\n Please make selection: ");
			scanf("%d", &selection);

			
			break;
		}	

	}

}


return 0;

}
