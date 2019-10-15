#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//enum choice{Write=1, ViewDay, ViewWeek, Modify, Delete, Search, Quit};

int menuChoice() 
{
	printf("\n1.Enter the who/what/when/where information\n");
	printf("2.View Day\n");
	printf("3.View Week\n");
	printf("4.Modify the record\n");
	printf("5.Delete the record\n");
	printf("6.Search the record\n");
	printf("7.Quit the system\n\n");
	
	int ChoiceNumber;
	scanf("%d", &ChoiceNumber);
//	printf("%d\n", ChoiceNumber);
	return ChoiceNumber;
}

void WriteFile()//寫入資料 
{
        FILE *fptr;
        fptr = fopen("DFD.txt", "a+");
        struct Person
		{
			int date;
			char name[10];
			char place[15];
			char thing[20];
		};
		struct Person Data;
        
        printf("Enter the Date: ");
        scanf("%d", &Data.date);
        fprintf(fptr, "%4d", Data.date);
        
        printf("Enter the Name: ");
        scanf("%s", &Data.name);
        fprintf(fptr, "%10s", Data.name);
        
        printf("Enter the place: ");
        scanf("%s", &Data.place);
        fprintf(fptr, "%15s", Data.place);
        
       	printf("Enter the Things: ");
        scanf("%s", &Data.thing);
        fprintf(fptr, "%20s\n", Data.thing);
        
        printf("\n------Success!!------\n");
        fclose(fptr);
//        printf("Enter the Things:\n");
//        scanf("%c", &ch);
//        do
//        {
//        	fprintf(fptr, "%c", ch);
//            scanf("%c", &ch);
//        } while(ch != '\n');
}

void Display(int date, char name[10], char place[15], char thing[20])//展示人事時地 
{	
        printf("\n%15s", "Date --> ");
        printf("%d", date);
        printf("\n%15s", "Name --> ");
        printf("%s", name);
        printf("\n%15s", "Place --> ");
        printf("%s", place);
        printf("\n%15s", "Things --> ");
        printf("%s\n", thing);
}
void ViewWeek()//以週搜尋 
{
		FILE *fptr;
        int date, day, i=0, week=0;
        char name[10], place[15], thing[20];
        fptr = fopen("DFD.txt", "r");
        
        printf("Enter the day(1-31): ");
        scanf("%d", &day);
		for(i=0;week < 7;week++,day++)
    	{
       		while(!feof(fptr))
       		{
       			fseek(fptr, i, 0);
       			fscanf(fptr, "%d", &date);
       			if(day == date)
       			{
   	 				fscanf(fptr, "%s", &name);
     	  			fscanf(fptr, "%s", &place);
    	 			fscanf(fptr, "%s", &thing);
     				printf("\n------------------------------------\n");
					Display(date, name, place, thing);
					break;
				}
       			else	
       				i+=52;	
			}
      	  	if(day != date)
			{
				printf("\n------------------------------------\n");
				printf("\n%15s", "Date --> ");
				printf("%d\n", day);
				printf("       The day have Nothing!!       \n");
			}
		}
		printf("\n------------------------------------");
}
void ViewDay()//以日期搜尋 
{
		FILE *fptr;
        int date, day, i=0;
        char name[10], place[15], thing[20];
        fptr = fopen("DFD.txt", "r");
        
        printf("Enter the day(1-31): ");
        scanf("%d", &day);
        while(!feof(fptr))
        {
        	fseek(fptr, i, 0);
        	fscanf(fptr, "%d", &date);
        	if(day == date)
        	{
       	 		fscanf(fptr, "%s", &name);
        		fscanf(fptr, "%s", &place);
        		fscanf(fptr, "%s", &thing);
				Display(date, name, place, thing);
        		break;
			}
			else
				i+=52;
		}
		
		if(day != date)
		printf("\n-----The day have Nothing!!-----\n");
}

void SearchFile()//搜尋 
{
		FILE *fptr;
        int day, date, i=0;
        char name[10], place[15], thing[20], searchdata[20];
        fptr = fopen("DFD.txt", "r");
        
        printf("Enter any data by one of when/what/who/where: ");
        scanf("%s", &searchdata);
		day = atoi(searchdata);
        while(!feof(fptr))
        {
        	fseek(fptr, i, 0);
        	fscanf(fptr, "%d", &date);
        	fscanf(fptr, "%s", &name);
        	fscanf(fptr, "%s", &place);
        	fscanf(fptr, "%s", &thing);
        	if((day == date) || (strcmp(searchdata, name) == 0) || (strcmp(searchdata, place) == 0) || (strcmp(searchdata, thing) == 0))
        	{
        		Display(date, name, place, thing);
        		break;
			}
			else
				i+=52;
		}
}

void main() 
{
	FILE *f;
	if((f=fopen("DFD.txt", "a+")) == NULL)
	{
		printf("Open file error!!\n");
        exit(0);
	}
	
	int choice;
	while((choice=menuChoice()) != 7)
	{
		switch(choice)
		{
			case 1:
				WriteFile();
				break;
			case 2:
				ViewDay();
				break;
			case 3:
				ViewWeek();
				break;
			case 4:
				printf("D\n");
				break;
			case 5:
				printf("E\n");
				break;
			case 6:
				SearchFile();
				break;
			default:
				printf("Incorrect choice\n");
				break;
		}
	}
}
