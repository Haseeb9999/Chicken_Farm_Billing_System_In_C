#include <stdio.h>
#include <conio.h>
#include <windows.h>
int main()
{
	char pw,yn;
	int pq, dcf, dcpk, dcoe, fcf, fcpk, fcoe, ta=0;
	FILE *fptr;
	fptr = fopen("main.bin","wb+");
	start:
		system("COLOR f0");
	printf("=================================================\n");
	fprintf(fptr,"=================================================\n");
	printf("========== WELCOME TO HAN CHICKEN FARM ==========\n");
	fprintf(fptr,"========== WELCOME TO HAN CHICKEN FARM ==========\n");
	printf("=================================================\n");
	fprintf(fptr,"=================================================\n");
	printf("==================== WE HAVE ====================\n");
	fprintf(fptr,"==================== WE HAVE ====================\n");
	printf("(1) DESI CHICKEN FULL ******************* 1500 Rs\n");
	fprintf(fptr,"(1) DESI CHICKEN FULL ******************* 1500 Rs\n");
	printf("(2) DESI CHICKEN PER KG ***************** 900- Rs\n");
	fprintf(fptr,"(2) DESI CHICKEN PER KG ***************** 900- Rs\n");
	printf("(3) DESI CHICKEN ONE EGG **************** 50-- Rs\n");
	fprintf(fptr,"(3) DESI CHICKEN ONE EGG **************** 50-- Rs\n");
	printf("(4) FARMI CHICKEN FULL ****************** 800- Rs\n");
	fprintf(fptr,"(4) FARMI CHICKEN FULL ****************** 800- Rs\n");
	printf("(5) FARMI CHICKEN PER KG **************** 600- Rs\n");
	fprintf(fptr,"(5) FARMI CHICKEN PER KG **************** 600- Rs\n");
	printf("(6) FARMI CHICKEN ONE EGG *************** 30-- Rs\n");
	fprintf(fptr,"(6) FARMI CHICKEN ONE EGG *************** 30-- Rs\n");
	printf("=================================================\n");
	fprintf(fptr,"=================================================\n");
	printf("Enter a product number you want to buy (1 To 6)\n");
	scanf("\n%c",&pw);
	fprintf(fptr,"Enter a product number you want to buy (1 To 6)\n");
	fprintf(fptr,"%c",pw);
	printf("=================================================\n");
	fprintf(fptr,"\n=================================================\n");
	printf("Enter a quantity of product ou want to buy\n");
	scanf("\n%d",&pq);
	fprintf(fptr,"Enter a quantity of product ou want to buy\n");
	fprintf(fptr,"%d",pq);
	printf("=================================================\n");
	fprintf(fptr,"\n=================================================\n");
	switch (pw)
	{
		case '1':
			dcf=pq*1500;
			ta=ta+dcf;
			printf("Sir your bill= %d\n", dcf);
			fprintf(fptr,"Sir your bill= %d\n", dcf);
			break;
		case '2':
			dcpk=pq*900;
			ta=ta+dcpk;
			printf("Sir your bill= %d\n", dcpk);
			fprintf(fptr,"Sir your bill= %d\n", dcpk);
			break;
		case '3':
			dcoe=pq*50;
			ta=ta+dcoe;
			printf("Sir your bill= %d\n", dcoe);
			fprintf(fptr,"Sir your bill= %d\n", dcoe);
			break;
		case '4':
			fcf=pq*1500;
			ta=ta+fcf;
			printf("Sir your bill= %d\n", fcf);
			fprintf(fptr,"Sir your bill= %d\n", fcf);
			break;
		case '5':
			fcpk=pq*600;
			ta=ta+fcpk;
			printf("Sir your bill= %d\n", fcpk);
			fprintf(fptr,"Sir your bill= %d\n", fcpk);
			break;
		case '6':
			fcoe=pq*30;
			ta=ta+fcoe;
			printf("Sir your bill= %d\n", fcoe);
			fprintf(fptr,"Sir your bill= %d\n", fcoe);
			break;
		default:
			printf("Error Please Enter a Valid Number\n");
			fprintf(fptr,"Error Please Enter a Valid Number\n");
	}
	printf("\n=================================================\n");
	fprintf(fptr,"\n=================================================\n");
	printf("Do you want to more shopping (y/n)\n");
	fprintf(fptr,"Do you want to more shopping (y/n)\n");
	scanf("\n%c",&yn);
	fprintf(fptr,"%c",yn);
	printf("=================================================\n");
	fprintf(fptr,"\n=================================================\n");
	system("cls");
	switch (yn)
	{
		case 'y':
			goto start;
			break;
		case 'Y':
			goto start;
			break;
		default:
			goto end;
			break;
	}
	end:
//		printf("%d",ta);
	printf("Sir Your Total Amount= %d\n", ta);
	fprintf(fptr,"Sir Your Total Amount= %d\n", ta);
	printf("Thank You For Shopping");
	fprintf(fptr,"Thank You For Shopping");
	fclose(fptr);
	return 0;
}