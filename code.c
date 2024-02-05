#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct customer
{
  char phn[10], name[30], address[100], email[20],category[20], vehicle[20];
  int COST, days;
}c;


//rent calculation
int cost(int cost, int days){
  return days * cost;
}


void close(){
    system("clear");
    printf("\n*THANK YOU FOR CHOOSING DARK RISER BIKE RENTAL MANAGEMENT*");
    exit(0);
}   


//booking a bike
void book ()
{
  int days, a1, a2, c1, c2, c3, activa, jupiter, pleasure,
    unicon, pulsar, glamour, ktm_rc390, ninja, duke,choose;
  FILE *details;
  c s1;

  details = fopen ("information.txt", "r");
  if (details == NULL)
    {
      details = fopen ("information.txt", "w");
      fclose (details);
    }
  details = fopen ("information.txt", "a");
  system("clear");
  printf("BOOK A bike");
  //entering customer details
   printf ("\nENTER YOUR NAME:\t\t\t");
  scanf  (" %[^\n]", s1.name);
  printf ("\nENTER YOUR MOBILE NUMBER:\t\t");
  scanf  (" %[^\n]", s1.phn);
  printf ("\nENTER YOUR ADDRESS:\t\t\t");
  scanf  (" %[^\n]", s1.address);
  printf ("\nENTER YOUR EMAIL:\t\t\t");
  scanf  (" %[^\n]", s1.email);
  choice:
  printf ("            ----------------------------------------\n");
  printf ("                       CHOOSE YOUR CITY\n");
  printf ("            ----------------------------------------\n");
  printf
    ("  --1)DELHI--\n  --2)MUMBAI--\n  --3)CALUCATTA--\n  --4)OTHERS--\n");
  scanf ("%d", &a2);
  switch (a2)
    {
    case 1:
      activa = 500;
      jupiter = 400;
      pleasure = 300;
      unicon = 800;
      pulsar = 700;
      glamour = 600;
      ktm_rc390 = 1100;
      ninja = 1000;
      duke = 900;
      break;

    case 2:
      activa = 600;
      jupiter = 500;
      pleasure = 400;
      unicon = 900;
      pulsar = 800;
      glamour = 700;
      ktm_rc390 = 1200;
      ninja = 1100;
      duke = 1000;
      break;

    case 3:
      activa = 550;
      jupiter = 450;
      pleasure = 350;
      unicon = 650;
      pulsar = 750;
      glamour = 850;
      ktm_rc390 = 950;
      ninja = 1050;
      duke = 1150;
      break;
    
    case 4:
      printf("\nBIKE CANNOT BE RENTED IN CHOOSEN CITY\n");
      choice2:
      printf("\nCHOOSE AN OPTION:\n1) CHOOSE ANOTHER CITY \n2) EXIT");
      scanf("%d",&choose);
      if(choose==1) goto choice;
      else if(choose==2) {
          close();
          
      }
      else {
          system("clear");
          printf("\nINVALID\n");
          goto choice2;
      }
      break;
      
      default:
         system("clear");
         printf("\nINVALID\n");
         goto choice;
    }

  if (a2 != 4)
    {
      system("clear");
      printf ("NUMBER OF DAYS HIRING:\t\t\t");
      scanf ("%d", &s1.days);
      days = s1.days;
    category:
            //choosing category of vehicles
      printf ("\n            ----------------------------------------\n");
      printf ("                 CHOOSE THE CATEGORY OF VEHICLE\n");
      printf ("            ----------------------------------------\n");
      printf
	("  --1) SCOOTY--\n  --2) BIKES--\n  --3) SPORTS BIKES--\n");
      scanf ("%d", &a1);
      switch (a1)
	{
	case 1:
	  strcpy(s1.category,"SCOOTY");
	  system("clear");
	  printf ("            ----------------------------------------\n");
	  printf ("                            --SCOOTY--\n");
	  printf ("            ----------------------------------------\n");
	bike1:
	  printf ("  --1) ACTIVA - %d --\n  --2) JUPITER - %d --\n  --3) PLEASURE - %d --\n",activa,jupiter,pleasure);	//choosing bike
	  scanf ("%d", &c1);
	  switch (c1)
	    {
	    case 1:
	      s1.COST = cost (activa, days);
	      // s1.vehicle ="activa";
	      strcpy (s1.vehicle, "activa");
	      break;

	    case 2:
	      s1.COST = cost (jupiter, days);
	      //s1.vehicle ="jupiter";
	      strcpy (s1.vehicle, "jupiter");
	      break;

	    case 3:
	      s1.COST = cost (pleasure, days);
	      //s1.vehicle ="pleasure";
	      strcpy (s1.vehicle, "pleasure");
	      break;

	    default:
	      {
	          system("clear"); 
		printf ("\nINVALID\n");
		goto bike1;
	      }
	    }
	  break;

	case 2:
	  strcpy(s1.category,"bike");
	  system("clear");
	  printf ("            ----------------------------------------\n");
	  printf ("                   --BIKES--\n");
	  printf ("            ----------------------------------------\n");
	bike2:
	  printf ("  --1) UNICON - %d --\n  --2) PULSAR - %d --\n  --3) GLAMOUR - %d --\n",unicon,pulsar,glamour);	//choosing bike
	  scanf ("%d", &c2);
	  switch (c2)
	    {
	    case 1:
	      s1.COST = cost (unicon, days);
	      //s1.vehicle= "unicon";
	      strcpy (s1.vehicle, "unicon");
	      break;

	    case 2:
	      s1.COST = cost (pulsar, days);
	      //s1.vehicle= "pulsar";
	      strcpy (s1.vehicle, "pulsar");
	      break;

	    case 3:
	      s1.COST = cost (glamour, days);
	      //s1.vehicle= "glamour";
	      strcpy (s1.vehicle, "glamour");
	      break;

	    default:
	      {
	          system("clear");
		printf ("\nINVALID\n");
		goto bike2;
	      }
	    }
	  break;

	case 3:
	  strcpy(s1.category,"");
	  system("clear");
	  printf ("            ----------------------------------------\n");
	  printf ("                            --SPORTS BIKES--\n");
	  printf ("            ----------------------------------------\n");
	bike3:
	  printf ("  --1) ktm rc390 - %d --\n  --2) ninja - %d --\n  --3) DUKE - %d --\n",ktm_rc390,ninja,duke);	//choosing bike
	  scanf ("%d", &c3);
	  switch (c3)
	    {
	    case 1:
	      s1.COST = cost (ktm_rc390, days);
	      //s1.vehicle= "ktm_rc390";
	      strcpy (s1.vehicle, "ktm rc390");
	      break;

	    case 2:
	      s1.COST = cost (ninja, days);
	      //s1.vehicle= "ninja";
	      strcpy (s1.vehicle, "ninja");
	      break;

	    case 3:
	      s1.COST = cost (duke, days);
	      //s1.vehicle= "duke";
	      strcpy (s1.vehicle, "duke");
	      break;

	    default:
	      {
	          system("clear");
		printf ("\nINVALID\n");
		goto bike3;
	      }
	    }
	  break;
	default:
	  {
	    printf ("\n INVALID \n");
	    goto category;
	  }
	}
       system("clear");

      //printing customer details
       printf ("\n                         ----RECIEPT----");
      printf ("\n            ----------------------------------------");
      printf ("\n                  DARK RISER BIKE RENTAK MANAGEMENT");
      printf ("\n            ----------------------------------------");
      printf ("\n  CUSTOMER's NAME:                  %s", s1.name);
      printf ("\n  CUSTOMER's CONTACT NUMBER:        %s", s1.phn);
      printf ("\n  CUSTOMER's EMAIL:                 %s", s1.email);
      printf ("\n  CUSTOMER's ADDRESS:               %s", s1.address);
      printf ("\n  VEHICLE SELECTED:                 %s", s1.vehicle);
      printf ("\n  NUMBER OF DAYS OF HIRING:         %d", s1.days);
      printf ("\n  COST FOR HIRING THE bike:          %d", s1.COST);

      fwrite (&s1, sizeof (struct customer), 1, details);
      fclose (details);
    }
  else
    {
      printf ("BIKE CANNOT BE RENTED IN CHOOSEN CITY");
    }
    
}

int display(){
    FILE *fp;
    c s1;
    fp=fopen("information.txt","rb");
    if(fp==NULL){
        system("clear");
        printf("no previous bookings found");
        return 0;
    }
    printf("booking details are\n");
    while(fread(&s1,sizeof(c),1,fp))
    {
          
      printf ("\n  CUSTOMER's NAME:                  %s", s1.name);
      printf ("\n  CUSTOMER's CONTACT NUMBER:        %s", s1.phn);
      printf ("\n  CUSTOMER's EMAIL:                 %s", s1.email);
      printf ("\n  CUSTOMER's ADDRESS:               %s", s1.address);
      printf ("\n  VEHICLE SELECTED:                 %s", s1.vehicle);
      printf ("\n  NUMBER OF DAYS OF HIRING:         %d", s1.days);
      printf ("\n  COST FOR HIRING THE bike:          %d", s1.COST);
      printf("\n\n\n");
    }
    fclose(fp);

    return 0;
}


//owner
void search ()
{
    int count=0;
    char phn[10];
    FILE *fp;
    c s1;
    fp=fopen("information.txt","r");
    printf("Enter the mobile number of customer to search\n");
    scanf(" %[^\n]",phn);
    while(fread(&s1,sizeof(c),1,fp))
    {
        if(strcmp(phn,s1.phn)==0){
            printf ("\n                         ---RECIEPT---");
            printf ("\n            ----------------------------------------");
            printf ("\n                  DARK RISERS BIKE RENTAL MANAGEMENT");
            printf ("\n            ----------------------------------------");
            printf ("\n  CUSTOMER's NAME:                  %s", s1.name);
            printf ("\n  CUSTOMER's CONTACT NUMBER:        %s", s1.phn);
            printf ("\n  CUSTOMER's EMAIL:                 %s", s1.email);
            printf ("\n  CUSTOMER's ADDRESS:               %s", s1.address);
            printf ("\n  VEHICLE SELECTED:                 %s", s1.vehicle);
            printf ("\n  NUMBER OF DAYS OF HIRING:         %d", s1.days);
            printf ("\n  COST FOR HIRING THE bike:          %d", s1.COST);
            count=1;
            break;
        }
    }
    fclose(fp);
    if(count!=1)
    {
        printf("Deatils are not found\nplease,check the mobile number you have entered\n");
    }
    
} 

 void cancel(){
     c s1;
     char phn[10];
     FILE *fp1,*fp2;
     printf ("Enter the customer mobile number to delete booking");
     scanf(" %[^\n]",phn);
     fp1=fopen("information.txt","r+");
     fp2=fopen( "copy.txt","a+");
     if(fp1==NULL){
         printf("Can't open file");
         exit(0); 
     }
     while(fread(&s1,sizeof(c),1,fp1)){
         if(strcmp(phn,s1.phn)!=0)
        {

          fwrite(&s1, sizeof(c), 1, fp2);
        }
     } 
    fclose(fp1);
    fclose(fp2);

    remove("information.txt");
    rename("copy.txt","information.txt");
    printf("booking cancelled successfully");
 }   
    

//main
int main () 
{

  int choice;
  printf ("\n            ----------------------------------------- \n");
  printf ("              WELCOME DARK RISER BIKE RENTAL MANAGEMENT \n");
  printf ("            ----------------------------------------- \n");
choice:
  while(1)
    {
        printf("\nCHOOSE AN OPTION: \n1) BOOK A bike\n2) DISPLAY ALL PREVIOUS BOOKINGS\n3) SEARCH PREVIOUS BOOKINGS \n4) CANCEL BOOKING\n5) Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            book();
                    break;
            case 2:
            display();
                    break;
            case 3:
            search();
                    break;
            case 4:
            cancel();
                    break;
            case 5:
            close();
                    break;
            default:
            system("clear");
            printf("Entered wrong choise\n");
            goto choice;
        }
    }
}
