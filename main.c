#include <stdio.h>
#include<string.h>
#include<stdlib.h>
struct players{
   char name[50];
   char position[50];
   int age;
   int salary;

};

int main()
{
    char pass[20];

    int mainmenu;
    int mmc,smc;

    //File opening closing about
    FILE *about;
      about=fopen("text/about.txt","r");
      char chabout[1000];
      fgets(chabout,1000,about);
      fclose(about);
      //File opening closing past records
    FILE *pastrecords;
      pastrecords=fopen("text/pastrecords.txt","r");
      char chpr1[100];
      char chpr2[100];
      char chpr3[100];
      char chpr4[100];
      char chpr5[100];
      char chpr6[100];
      char chpr7[100];
      char chpr8[100];
      char chpr9[100];
      char chpr10[100];
      char chpr11[100];
      char chpr12[100];
      char chpr13[100];
      char chpr14[100];
      char chpr15[100];
      char chpr16[100];
      char chpr17[100];
      char chpr18[100];
      char chpr19[100];
      char chpr20[100];
      char chpr21[100];
      char chpr22[100];
      fgets(chpr1,100,pastrecords);
      fgets(chpr2,100,pastrecords);
      fgets(chpr3,100,pastrecords);
      fgets(chpr4,100,pastrecords);
      fgets(chpr5,100,pastrecords);
      fgets(chpr6,100,pastrecords);
      fgets(chpr7,100,pastrecords);
      fgets(chpr8,100,pastrecords);
      fgets(chpr9,100,pastrecords);
      fgets(chpr10,100,pastrecords);
      fgets(chpr11,100,pastrecords);
      fgets(chpr12,100,pastrecords);
      fgets(chpr13,100,pastrecords);
      fgets(chpr14,100,pastrecords);
      fgets(chpr15,100,pastrecords);
      fgets(chpr16,100,pastrecords);
      fgets(chpr17,100,pastrecords);
      fgets(chpr18,100,pastrecords);
      fgets(chpr19,100,pastrecords);
      fgets(chpr20,100,pastrecords);
      fgets(chpr21,100,pastrecords);
      fgets(chpr22,100,pastrecords);
      fclose(pastrecords);
      //File opening closing for number of players
       FILE *numberofplayers;
      numberofplayers=fopen("text/Numberofplayers.txt","r");
      char chnop[1000];
      fgets(chnop,1000,numberofplayers);
      fclose(numberofplayers);
      //File opening closing for fan following
       FILE *fanfollowing;
      fanfollowing=fopen("text/FanFollowing.txt","r");
      char chff[10000];
      fgets(chff,10000,fanfollowing);
      fclose(fanfollowing);
      //File opening closing sponsor
    FILE *sponsor;
      sponsor=fopen("text/sponsor.txt","r");
      char chsp[100];
      fgets(chsp,1000,sponsor);
      fclose(sponsor);

    wp:

    printf("Enter Password: ");
    scanf("%s",pass);
    if (strcmp(pass, "admin") == 0){
    printf(" -------------------------------------------------------------------------\n");
	printf("|                                                                         |\n");
	printf("|                                                                         |\n");
	printf("|  ******   ****** ****** ****** ****** ****** *      * *******  ******   |\n");
	printf("|  *        *    * *      *        *      *    * *    * *        *        |\n");
	printf("|  *  ***** ****** *****  *****    *      *    *  *   * *  ***** ******   |\n");
	printf("|  *    *   *  *   *      *        *      *    *   *  * *    *        *   |\n");
	printf("|  ******   *   *  ****** ******   *    ****** *    * * ******   ******   |\n");
	printf("|                                                                         |\n");
	printf(" -------------------------------------------------------------------------\n");
 	printf("\t\t*************************************************\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*     -----------------------------             *\n");
	printf("\t\t*             WELCOME TO BCB                    *\n");
	printf("\t\t*     -----------------------------             *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*  This Project is made by Nodee,Tithi,Fahim    *\n");
	printf("\t\t*                 EWU,CSE                       *\n");
	printf("\t\t*    CONTACT US:fahad.com66.fk@gmail.com        *\n");
	printf("\t\t*************************************************\n\n\n");

    mm:
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");

    printf(" 1:Team related informations\n ");
    printf("2:Player informations\n ");
    printf("3:Match related informations\n ");
    printf("4:About\n");
    printf(" 5:Exit\n");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");

    printf("\nPlease select your choice: ");

    scanf("%d",&mmc);

    if(mmc==1){
        sm:
        printf(" 1:Past records\n ");
        printf("2:Number of players\n ");
        printf("\nPlease select your choice: ");
        scanf("%d",&smc);
        if(smc==1){

               printf("Past Records: %s", chpr1);
               printf(" %s", chpr2);
               printf(" %s", chpr3);
               printf(" %s", chpr4);
               printf(" %s", chpr5);
               printf(" %s", chpr6);
               printf(" %s", chpr7);
               printf(" %s", chpr8);
               printf(" %s", chpr9);
               printf(" %s", chpr10);
               printf(" %s", chpr11);
               printf(" %s", chpr12);
               printf(" %s", chpr13);
               printf(" %s", chpr14);
               printf(" %s", chpr15);
               printf(" %s", chpr16);
               printf(" %s", chpr17);
               printf(" %s", chpr18);
               printf(" %s", chpr19);
               printf(" %s", chpr20);
               printf(" %s", chpr21);
               printf(" %s\n", chpr22);
        }
        else if(smc==2){
            printf(" %s\n", chnop);
            int nop;
            printf("Enter 1 to edit or anything to skip: ");
        scanf("%d",&nop);
    if(nop==1){
        FILE *numberofplayers;
      numberofplayers=fopen("text/Numberofplayers.txt","w");
      char chanop[1000];
      printf("Enter new info: ");
      scanf("%s",chanop);
      fputs(chanop,numberofplayers);
      fclose(numberofplayers);
      printf("\nInformation Updated\n");
    }

    }
        else{
            printf("Wrong Input\n");
            goto sm;
        }

        printf("Enter 10 to go to main menu or enter any thing to exit: ");
        scanf("%d",&mainmenu);
        if(mainmenu==10){
            goto mm;
        }
        else{
            goto exit;
        }
}
    else if(mmc==2){
        FILE *playersinfo;
    int i,e;
    pr:
    playersinfo=fopen("text/pi.txt","r");
    char chpi[1000000];
    for(i=0;i<11;i++){
    fscanf(playersinfo,"%s",chpi);
    printf("Player %d Name: %s\n",i+1,chpi);
    fscanf(playersinfo,"%s",chpi);
    printf("Player %d Position: %s\n",i+1,chpi);
    fscanf(playersinfo,"%s",chpi);
    printf("Player %d Age: %s\n",i+1,chpi);
    fscanf(playersinfo,"%s",chpi);
    printf("Player %d Salary: %s\n",i+1,chpi);
    printf("\n");
    }
     fclose(playersinfo);
     printf("Enter 1 to edit or anything to skip: ");
     scanf("%d",&e);
     if(e==1){
    struct players players[100];
    playersinfo=fopen("text/pi.txt","w+");
    for(i=0;i<11;i++){
        printf("Enter player %d name: ",i+1);
        scanf("%s",players[i].name);
        printf("Enter player %d position: ",i+1);
        scanf("%s",&players[i].position);
        printf("Enter player %d age: ",i+1);
        scanf("%d",&players[i].age);
        printf("Enter player %d salary: ",i+1);
        scanf("%d",&players[i].salary);
        fprintf(playersinfo," %s %s %d %d ",players[i].name,players[i].position,players[i].age,players[i].salary);
    }
    fclose(playersinfo);
    printf("\nInformation Updated\n");
    goto pr;
     }



        printf("Enter 10 to go to main menu or enter any thing to exit: ");
        scanf("%d",&mainmenu);
        if(mainmenu==10){
            goto mm;
        }
        else{
            goto exit;
        }
    }
     else if(mmc==3){
        sm3:
        printf(" 1:Sponsorship\n ");
        printf("2:Fan Following\n ");
        printf("\nPlease select your choice: ");
        scanf("%d",&smc);
        if(smc==1){

            printf("Bangladesh's current sponsor is %s\n",chsp);
            int css;
            printf("Enter 1 to edit or anything to skip: ");
        scanf("%d",&css);
    if(css==1){
        FILE *sponsor;
      sponsor=fopen("text/sponsor.txt","w");
      char chaspo[1000];
      printf("Enter new info: ");
      scanf("%s",chaspo);
      fputs(chaspo,sponsor);
      fclose(sponsor);
      printf("\nInformation Updated\n");
    }
        }
        else if(smc==2){
            printf("%s\n", chff);
            int ff;
            printf("Enter 1 to edit or anything to skip: ");
        scanf("%d",&ff);
    if(ff==1){
        FILE *fanfollowing;
      fanfollowing=fopen("text/FanFollowing.txt","w");
      char chaff[1000];
      printf("Enter new info: ");
      scanf("%s",chaff);
      fputs(chaff,fanfollowing);
      fclose(fanfollowing);
      printf("\nInformation Updated\n");
    }

        }
        else{
            printf("Wrong Input\n");
            goto sm3;
        }


        printf("Enter 10 to go to main menu or enter any thing to exit: ");
        scanf("%d",&mainmenu);
        if(mainmenu==10){
            goto mm;
        }
        else{
            goto exit;
        }
    }
    else if(mmc==4){
            int ea;
        printf("About: %s\n", chabout);
        printf("Enter 1 to edit or anything to skip: ");
        scanf("%d",&ea);
    if(ea==1){
        FILE *about;
      about=fopen("text/about.txt","w");
      char chabout[1000];
      printf("Enter new about: ");
      scanf("%s",chabout);
      fputs(chabout,about);
      fclose(about);
      printf("\nInformation Updated\n");
    }
        printf("Enter 10 to go to main menu or enter any thing to exit: ");
        scanf("%d",&mainmenu);
        if(mainmenu==10){
        goto mm;
        }
        else{
            goto exit;
        }

    }
    else if(mmc==5){
        exit:
        printf("Thanks for using");
        return 0;
    }
    else{
        printf("wrong Input\n");
        goto mm;
    }
    }


    else{
    printf("Wrong Password \n");
    goto wp;
    }
}
