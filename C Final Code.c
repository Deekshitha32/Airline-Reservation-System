#include <stdio.h>
#include <windows.h>



int main()
{
   int choice;char fname[100];char lname[100];char from[100];char to[100];int number;char Alpha[10];int d;int m;int y;int choice3;int type;
printf("\n\n\t\t ***********************************************************************************************");
		printf("\n\t\t                                 welcome to airline system                                          ");
printf("\n\t\t *************************************************************************************************");
		printf("\n\n\n\t\t Please enter your choice from below (1-4):");
		printf("\n\n\t\t 1. Reservation");
		printf("\n\n\t\t 2. Cancel");
		printf("\n\n\t\t 3. DISPLAY RECORDS");
		printf("\n\n\t\t 4. EXIT");
		printf("\n\n\t\t feel free to contact ");
		printf("\n\n\t\t Enter your choice :");
		scanf("%d",&choice);
		if(choice ==  1)
        {
            booking(choice);
        }
        if(choice == 2)
        {
            char passport[100];
            system("cls");
            printf("******CANCELLATION*********\n\n");
            printf("ENTER YOUR PASSPORT NUMBER :- ");
            scanf("%s",&passport);
            printf("\nplease, wait for 3 seconds..");
            sleep(3);
            printf("\n\nYOUR TICKET HASS BEEN CANCELLED\n.");
            sleep(2);int rtext;
            printf("\nDO YOU WANT TO RETURN TO MAIN OR EXIT : 1.RETURN   2.EXIT\n");
            scanf("%d",&rtext);
            if(rtext == 1)
            {
                system("cls");
               main();
            }
        if(choice == 3)
        {
            Record(fname,lname,from,to,number,Alpha,d,m,y,choice3,type);
        }
    }
    }


int booking(int choice)
{
    system("cls");char fname[100],lname[100],me[100];int age;
    printf("*********USER-PROFILE*********\n\n");
    printf("ENTER YOUR FIRST NAME : ");
    scanf("%s",fname);
    printf("\nENTER YOUR LAST NAME :  ");
    scanf("%s",&lname);
    printf("\nENTER YOUR MOBILE NUMBER / EMAIL : ");
    scanf("%s",&me);
    printf("\nENTER YOUR AGE :  ");
    scanf("%d",&age);
    if(age < 12)
    {
    	int w;
        printf("\nUNACCOMPANIED MINORS SHALL NOT BE ACCEPTED FOR TRAVEL ON AIR INDIA FLIGHTS");
        printf("\n\nDo you want to return or exit 1-RETURN   2-EXIT \nENTER YOUR CHOICE: ");
		scanf("%d",&w);
		if(w==1)
		{
			system("cls");
			main();
		}
	
	
    }
    else
    {

    }
    char from[100],to[100];int d,m,y,d1,m1,y1;
    printf("\n\n*********JOURNEY-DETAILS*************\n\n");
    printf("\nENTER YOUR BOARDING POINT :  ");
    scanf("%s",&from);
    printf("\nENTER YOUR DEPARTING POINT :   ");
    scanf("%s",&to);
    printf("\nENTER YOUR DATE OF JOURNEY :                                       ""FORMAT[DD-MM-YYYY]\n");
    scanf("%d-%d-%d",&d,&m,&y);


    system("cls");int choice3;int type;int number;char Alpha[10];char passnum[100];int payment;long long int card;
    printf("************RESERVATIOON-SYSTEM************\n\n");
    printf("1-INDIGO(9:00 AM)            2-AIR INDIA EXPRESS(3:00 PM)    \n");
    printf("\nSELECT THE CHOICE :  ");
    scanf("%d",&choice3);
    printf("CHOOSE YOUR CLASS TYPE  \n1-FIRST CLASS  \n2-ECONOMY\nENTER YOUR CLASS TYPE :  ");
    scanf("%d",&type);
    system("cls");
    printf("********SEATS**********\n\n");
    if(type == 1 && choice3==1 )
    {

        printf("\t""1    2    3    4    5    6    7    8     9      \n");
        printf("\t""A    B    C    D    E    F    G    H     I     \n");
        printf("\t""A1   B1   C1   D1   E1   F1   G1   H1   I1     \n");
        printf("PLEASE ENTER YOUR SEAT COLUMN :             ""     [NUMBER OF THE COLUMN]\n");
        scanf("%d",&number);

        printf("PLEASE SELECT YOUR SEAT  :             ""     [ALPHABET OF THE ROW]\n");
        scanf("%s",&Alpha);
        sleep(1);
        printf("YOUR SEAT IS RESERVED : %d%s\n\n",number,Alpha);
        printf("TOTAL AMOUNT = 15780 /-\n");
        printf("\nENTER YOUR PASSPORT NUMBER :  \n");
        scanf("%s",&passnum);

        printf("\n\n********PAYMENT********");
        printf("\n1-DEBIT/CREDIT CARD  2-UPI PAYMENTS\n");
        printf("ENTER YOUR PAYMENT TYPE : \n");
        scanf("%d",&payment);
        if(payment == 1)
        {
            char hname[100];int m2,y2,c;
            printf("\nENTER YOUR CARD NUMBER :  ");
            scanf("%lld",&card);
            printf("\nENTER CARD HOLDER NAME :  ");
            scanf("%s",&hname);
            printf("\nENTER EXPIRY DATE :                                   FORMAT[MM-YY]\n");
            scanf("%d-%d",&m2,&y2);
            printf("\nENTER CVV :   ");
            scanf("%d",&c);
            printf("\nYOUR PAYMENT IS SUCCESFULLY CONFIRMED.");
            printf("\nHAVE A SAFE JOURNEY");
        }
        else if(payment == 2)
        {
            char Id[90];int pin;
            printf("ENTER YOUR UPI ID :  \n");
            scanf("%s",&Id);
            printf("ENTER YOUR UPI PIN:  \n");
            scanf("%d",&pin);
            printf("\nYOUR PAYMENT IS SUCCESFULLY CONFIRMED.");
            printf("\nHAVE A SAFE JOURNEY");
        }
    }
        system("cls");
        if(type == 2 && choice3==1 )
    {
        printf("\t"" 1    2    3    4    5    6    7    8    9      \n");
        printf("\t""A1   B1   C1   D1   E1   F1   G1   H1   I1     \n");
        printf("\t""A2   B2   C2   D2   E2   F2   G2   H2   I2     \n");
        printf("\t""A3   B3   C3   D3   E3   F3   G3   H3   I3    \n");
        printf("\t""A4   B4   C4   D4   E4   F4   G4   H4   I4     \n");
        printf("\t""A5   B5   C5   D5   E5   F5   G5   H5   I5     \n");

        printf("PLEASE ENTER YOUR SEAT COLUMN :             ""     [NUMBER OF THE COLUMN]\n");
        scanf("%d",&number);

        printf("PLEASE SELECT YOUR SEAT  :             ""     [ALPHABET OF THE ROW]\n");
        scanf("%s",&Alpha);
        sleep(1);
        printf("YOUR SEAT IS RESERVED : %d%s\n\n",number,Alpha);
        printf("TOTAL AMOUNT = 12780 /-\n");
        printf("\nENTER YOUR PASSPORT NUMBER :  \n");
        scanf("%s",&passnum);
        
        printf("\n\n******PAYMENT******");
        printf("\n1-DEBIT/CREDIT CARD  2-UPI PAYMENTS");
        printf("\nENTER YOUR PAYMENT TYPE : ");
        scanf("%d",&payment);
        if(payment == 1)
        {
            char hname[100];int m2,y2,c;
            printf("\nENTER YOUR CARD NUMBER :  ");
            scanf("%lld",&card);
            printf("\nENTER CARD HOLDER NAME :  ");
            scanf("%s",&hname);
            printf("\nENTER EXPIRY DATE :                                   FORMAT[MM-YY]\n");
            scanf("%d-%d",&m2,&y2);
            printf("\nENTER CVV :   ");
            scanf("%d",&c);
            printf("\nYOUR PAYMENT IS SUCCESFULLY CONFIRMED.");
            printf("\nHAVE A SAFE JOURNEY");
        }
        else if(payment == 2)
        {
            char Id[90];int pin;
            printf("ENTER YOUR UPI ID :  \n");
            scanf("%s",&Id);
            printf("ENTER YOUR UPI PIN:  \n");
            scanf("%d",&pin);
            printf("\nYOUR PAYMENT IS SUCCESFULLY CONFIRMED.");
            printf("\nHAVE A SAFE JOURNEY");
        }
    }
        if(type == 2 && choice3 == 2)
        {
        printf("\t"" 1    2    3    4    5    6    7    8    9      \n");
        printf("\t""A1   B1   C1   D1   E1   F1   G1   H1   I1     \n");
        printf("\t""A2   B2   C2   D2   E2   F2   G2   H2   I2     \n");
        printf("\t""A3   B3   C3   D3   E3   F3   G3   H3   I3     \n");
        printf("\t""A4   B4   C4   D4   E4   F4   G4   H4   I4     \n");
        printf("\t""A5   B5   C5   D5   E5   F5   G5   H5   I5     \n");

        printf("PLEASE ENTER YOUR SEAT COLUMN :             ""     [NUMBER OF THE COLUMN]\n");
        scanf("%d",&number);

        printf("PLEASE SELECT YOUR SEAT  :             ""     [ALPHABET OF THE ROW]\n");
        scanf("%s",&Alpha);
        printf("YOUR SEAT IS RESERVED : %d%s\n\n",number,Alpha);
        printf("TOTAL AMOUNT = 31560 /-\n");
        printf("ENTER YOUR PASSPORT NUMBER :  \n");
        scanf("%s",&passnum);
        
        printf("\n\n******PAYMENT******");
        printf("1-DEBIT/CREDIT CARD  2-UPI PAYMENTS\n");
        printf("ENTER YOUR PAYMENT TYPE : ");
        scanf("%d",&payment);
        if(payment == 1)
        {
            char hname[100];int m2,y2,c;
            printf("\nENTER YOUR CARD NUMBER :  ");
            scanf("%lld",&card);
            printf("\nENTER CARD HOLDER NAME :  ");
            scanf("%s",&hname);
            printf("\nENTER EXPIRY DATE :                                   FORMAT[MM-YY]\n");
            scanf("%d-%d",&m2,&y2);
            printf("\nENTER CVV :   ");
            scanf("%d",&c);
            printf("\nYOUR PAYMENT IS SUCCESFULLY CONFIRMED.");
            printf("\nHAVE A SAFE JOURNEY");
        }
        else if(payment == 2)
        {
            char Id[90];int pin;
            printf("ENTER YOUR UPI ID :  \n");
            scanf("%s",&Id);
            printf("ENTER YOUR UPI PIN:  \n");
            scanf("%d",&pin);
            printf("\nYOUR PAYMENT IS SUCCESFULLY CONFIRMED.");
            printf("\nHAVE A SAFE JOURNEY");
        }
        }
        system("cls");
        if(type == 1 && choice3==2 )
    {
        printf("\t"" 1    2    3    4    5    6    7    8   9      \n");
        printf("\t"" A    B    C    D    E    F    G    H   I     \n");
        printf("\t""A1   B1   C1   D1   E1   F1   G1   H1   I     \n");
        printf("PLEASE ENTER YOUR SEAT COLUMN :             ""     [NUMBER OF THE COLUMN]\n");
        scanf("%d",&number);

        printf("PLEASE SELECT YOUR SEAT  :             ""     [ALPHABET OF THE ROW]\n");
        scanf("%s",&Alpha);
        printf("YOUR SEAT IS RESERVED : %d%s\n\n",number,Alpha);
        printf("TOTAL AMOUNT = 15780 /-\n");
        printf("ENTER YOUR PASSPORT NUMBER :  \n");
        scanf("%s",&passnum);
        
        printf("\n\n******PAYMENT******");
        printf("\n1-DEBIT/CREDIT CARD  2-UPI PAYMENTS\n");
        printf("ENTER YOUR PAYMENT TYPE : \n");
        scanf("%d",&payment);
        if(payment == 1)
        {
            char hname[100];int m2,y2,c;
            printf("\nENTER YOUR CARD NUMBER :  ");
            scanf("%lld",&card);
            printf("\nENTER CARD HOLDER NAME :  ");
            scanf("%s",&hname);
            printf("\nENTER EXPIRY DATE :                                   FORMAT[MM-YY]\n");
            scanf("%d-%d",&m2,&y2);
            printf("\nENTER CVV :   ");
            scanf("%d",&c);
            printf("\nYOUR PAYMENT IS SUCCESFULLY CONFIRMED.");
            printf("\nHAVE A SAFE JOURNEY");
        }
        else if(payment == 2)
        {
            char Id[90];int pin;
            printf("ENTER YOUR UPI ID :  \n");
            scanf("%s",&Id);
            printf("ENTER YOUR UPI PIN:  \n");
            scanf("%d",&pin);
            printf("\nYOUR PAYMENT IS SUCCESFULLY CONFIRMED.");
            printf("\nHAVE A SAFE JOURNEY");
        }
    }
    system("cls");

        if(choice3 == 2 && type == 1 )
        {
        printf("--------------------TICKET-DETAILS---------------------\n\n");
        printf("                     BOARDING PASS                     \n");
        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("                    PASSENGER NAME                                      \n");
        printf("                    %s %s                                           \n",fname,lname);
        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("  FLIGHT NO          FROM         TO          class        \n");
        printf("  AP-2345            %s          %s       FIRST-CLASS \n",from,to);
        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("  GATE NO          TIME          SEAT      DATE        \n");
        printf("  A204             9:00 AM       %d%s    %d-%d-%d     \n",number,Alpha,d,m,y);
        printf("---------------------------------------------------------\n");
        }
        if(choice3 == 2 && type == 2 )
        {
        printf("--------------------TICKET-DETAILS---------------------\n\n");
        printf("                     BOARDING PASS                     \n");
        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("                    PASSENGER NAME                                      \n");
        printf("                    %s %s                                           \n",fname,lname);
        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("  FLIGHT NO          FROM         TO          class        \n");
        printf("  AP-2345            %s          %s       ECONOMY-CLASS \n",from,to);
        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("  GATE NO          TIME          SEAT      DATE        \n");
        printf("  A204             9:00 AM       %d%s    %d-%d-%d     \n",number,Alpha,d,m,y);
        printf("---------------------------------------------------------\n");
        }if(choice3 == 1 && type == 1 )
        {
        printf("--------------------TICKET-DETAILS---------------------\n\n");
        printf("                     BOARDING PASS                     \n");
        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("                    PASSENGER NAME                                      \n");
        printf("                    %s %s                                           \n",fname,lname);
        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("  FLIGHT NO          FROM         TO          class        \n");
        printf("  AP-2345            %s          %s       FIRST-CLASS \n",from,to);
        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("  GATE NO          TIME          SEAT      DATE        \n");
        printf("  A204             9:00 AM       %d%s    %d-%d-%d     \n",number,Alpha,d,m,y);
        printf("---------------------------------------------------------\n");
        }
		if(choice3 == 1 && type == 2 )
        {
        printf("--------------------TICKET-DETAILS---------------------\n\n");
        printf("                     BOARDING PASS                     \n");
        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("                    PASSENGER NAME                                      \n");
        printf("                    %s %s                                           \n",fname,lname);
        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("  FLIGHT NO          FROM         TO          class        \n");
        printf("  AP-2345            %s          %s       ECONOMY-CLASS \n",from,to);
        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("  GATE NO          TIME          SEAT      DATE        \n");
        printf("  A204             9:00 AM       %d%s    %d-%d-%d     \n",number,Alpha,d,m,y);
        printf("---------------------------------------------------------\n");
    
}
        printf("DP YOU WANT TO FRETURN TO MAIN : 1-YES  2-NO");int yn;
        scanf("%d",&yn);
        if(yn == 1)
        {
            Record(fname,lname,from,to,number,Alpha,d,m,y,choice3,type);
        }
}






int cancel(int passnum)
{
    system("cls");
    main();
    system("cls");int pass;
    printf("Enter your Passport number :- \n");
    scanf("%s",&pass);
    if(pass = passnum)
    {
        printf("YOUR TICKET HAS BEEN CANCELLED\n");
    }
    else
    {
        printf("YOU HAVEN'T BOOKED TICKET TO CANCEL\n");
    }
}

int Record(char fname[100],char lname[100],char from[100],char to[100],int number,char Alpha[10],int d,int m,int y,int choice3,int type)
{
    system("cls");
    main();
    system("cls");
    if(choice3 == 2 && type == 1 )
        {
        printf("--------------------TICKET-DETAILS---------------------\n\n");
        printf("                     BOARDING PASS                     \n");
        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("                    PASSENGER NAME                                      \n");
        printf("                    %s %s                                           \n",fname,lname);
        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("  FLIGHT NO          FROM         TO          class        \n");
        printf("  AP-2345            %s          %s       FIRST-CLASS \n",from,to);
        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("  GATE NO          TIME          SEAT      DATE        \n");
        printf("  A204             9:00 AM       %d%s    %d-%d-%d     \n",number,Alpha,d,m,y);
        printf("---------------------------------------------------------\n");
        }
        if(choice3 == 2 && type == 2 )
        {
        printf("--------------------TICKET-DETAILS---------------------\n\n");
        printf("                     BOARDING PASS                     \n");
        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("                    PASSENGER NAME                                      \n");
        printf("                    %s %s                                           \n",fname,lname);
        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("  FLIGHT NO          FROM         TO          class        \n");
        printf("  AP-2345            %s          %s       ECONOMY-CLASS \n",from,to);
        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("  GATE NO          TIME          SEAT      DATE        \n");
        printf("  A204             9:00 AM       %d%s    %d-%d-%d     \n",number,Alpha,d,m,y);
        printf("---------------------------------------------------------\n");
        }if(choice3 == 1 && type == 1 )
        {
        printf("--------------------TICKET-DETAILS---------------------\n\n");
        printf("                     BOARDING PASS                     \n");
        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("                    PASSENGER NAME                                      \n");
        printf("                    %s %s                                           \n",fname,lname);
        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("  FLIGHT NO          FROM         TO          class        \n");
        printf("  AP-2345            %s          %s       FIRST-CLASS \n",from,to);
        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("  GATE NO          TIME          SEAT      DATE        \n");
        printf("  A204             9:00 AM       %d%s    %d-%d-%d     \n",number,Alpha,d,m,y);
        printf("---------------------------------------------------------\n");
        }if(choice3 == 1 && type == 2 )
        {
        printf("--------------------TICKET-DETAILS---------------------\n\n");
        printf("                     BOARDING PASS                     \n");
        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("                    PASSENGER NAME                                      \n");
        printf("                    %s %s                                           \n",fname,lname);
        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("  FLIGHT NO          FROM         TO          class        \n");
        printf("  AP-2345            %s          %s       ECONOMY-CLASS \n",from,to);
        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("  GATE NO          TIME          SEAT      DATE        \n");
        printf("  A204             9:00 AM       %d%s    %d-%d-%d     \n",number,Alpha,d,m,y);
        printf("---------------------------------------------------------\n");
}
}
