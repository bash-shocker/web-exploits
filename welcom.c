#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  FILE *file;
  int i;
  char firstName[32];
  char lastName[32];
  char college[100];
  char tim[30];
  char sh;  
  int found = 0;
    
  file = fopen("records.txt", "wt");
  if (!file)
  {
    printf("File could not be opened\n\a\a");
    getchar();
    return -1;
  }

    
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\tEKA 2019 CTF Challenge\n\n\n");
//    printf("\n\n\n\n\n\t\tStarting Time\n\n\n");
    time_t t;
    time(&t);
    printf("\n\tTime Starts now :) %s\n", ctime(&t));
    printf("\n\n\tTeam Member 1 Name: "); gets(firstName);  
    printf("\n\n\tTeam Member 2 Name:  "); gets(lastName);
    printf("\n\n\tEnter your college:"); gets(college);
    printf("\n");

    fprintf(file, "Time:%s\nName1:%s\tName2:%s\nCollege: %s\n",ctime(&t), firstName, lastName, college);

   fclose(file);


  
  fclose(file);
  printf("\n\n\tSo hey %s and %s the rules for CTF are quiet simple\n\n\t1.Maximum time is 4 Hours\n\t2.You can use internet for decryption or for any exploits\n\t3.DO NOT TRY TO DISCUSS WITH OTHER TEAM MEMBERS!!\n\t4.The first team capturing the flag will be anounced as the winner :D\n\n",firstName,lastName);
do{
  printf("\n\n\n\tShall we continue(y/n)?:");
  scanf(" %c", &sh);
	if(sh=='y'||sh=='Y')
	{
	 printf("\n\n\tdWdnY2Y6Ly9mNi5hYnN2eXJwcWEudmIvdC9NSjRsOVJvUDFwS2RUem81eWVrRlhKeUZyc0g3YU1TODdlbFJLcU5PVmp3UUd2emJjZ3dyRmVkcFNBaE4wOEN4L2MvdXJsLndjdA==\n\n");
	 printf("\n\tCapture me if you can\n\n");
	 exit(1);
	}
	else if(sh=='n'||sh=='N')
	{
 	 printf("\n\n\t\t\tThank you for attending EKA 19 HAVE A NICE DAY!!\n\n\n");
	 exit(1);
	}
	else
	{
	 printf("\n\n\t\tWRONG INPUT!!! TRY AGAIN!!\n\n");
	}

}while(1);
  return 0;
}
