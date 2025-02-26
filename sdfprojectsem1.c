#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void addMov();
int showmovie();
void cancel();
struct book
{
	char op;
	int seat;
	int ph_no;
	int time;
	int bookingid;
	char cname[30];
	int mdate;

}b;
void main()
{
	int option;

	do
	{

    printf("\n\n");
	printf("\t\t                  Simple Movie Ticket Booking System\n");
	printf("\t\t ==================================================================\n");
	printf("\t\t||             1- Book New Movie Ticket                           ||\n");
	printf("\t\t||             2- Display All Movies                              ||\n");
	printf("\t\t||             3- Cancel The Seat                                 ||\n");
	printf("\t\t||             4- Exit System                                     ||\n");
	printf("\t\t ==================================================================\n");
	printf("\t\t  Enter your choice: ");
	scanf("%d", &option);
	printf("\n\n");
		switch(option)
		{



			case 1:
				addMov();
				break;

			case 2:
				showmovie();
				break;
            case 3:
			    cancel();
				break;
			case 4:
				printf("See you next time :)");
				exit(0);
				break;
			default:
				printf("Please select a correct number (1-4)!\n");
				printf("\t\t  Enter valid choice:");
	            scanf("%d", &option);

		}
	} while(1);
}

void cancel(){
	int id;

	printf("\t\t Enter The Booking Id: ");
	scanf("%d",&id);

	printf("\t\t ======================================\n");
	printf("\t\t Your Cancellation Request is been processed\n");
	printf("\t\t ===========================================\n");
	printf("\t\t Your Ticket With Booking id %d is Successfully Cancelled\n",id);
	printf("\n\n");

    main();

}

void addMov()
{
    struct book b;
	char op;
	int seat;
	int ph_no;
	int time;
	int bookingid;
	char cname[30];
	int mdate;




    showmovie();


	printf("\t\tEnter Name of Customer: ");
	scanf("%s",&b.cname);
	printf("\t\tEnter booking id: ");
	scanf("%d",&b.bookingid);

	printf("\t\tEnter Movie Schedule (DDMMYYYY): ");
	scanf("%d", &b.mdate);
	printf("\t\tEnter your phone number: ");
	scanf("%d",&ph_no);
    printf("\t\tWhich seat number you want(1-100) :  ");
	scanf("%d",&seat);
		while (seat>100||seat<1)
			{
				printf("\t\tseat1 number is unavailable in this theater\n");
				printf("\t\tPlease re-enter seat number: ");
				scanf("%d",&seat);
			}

	printf("\t\tEnter Time (XXXX): ");
	scanf("%d",&time);
	while(time<1000||time>2300)
	{
		printf("\t\tRe-enter Time! It should be in 24-hour format and between 1000 to 2300!: ");
		printf("\t\tEnter valid Time (XXXX): ");
		scanf("%d",&time);
	};

	printf("\n\n");

        printf("\t-------------------------------THEATER BOOKING TICKET-----------------------------\n");

        printf("\t =================================================================================\n");
        printf("\t            Customer's Name : %s                                                    \n",b.cname);
        printf("\t                        Booking ID : %d                                               \n",b.bookingid);
        printf("\t                          Date      : %d                                    \n",b.mdate);
        printf("\t                          Time      : %d                                       \n",time);
        printf("\t                          Hall      : Audi 02                                    \n");

        printf("\t                          Seats No. : %d                                            \n ",seat);

        printf("\t            Price . : 450/- Rs                                                     \n");
	    printf("\t ================================================================================= \n");


	printf("\n");

	do
	{
		printf("\t\tBook another ticket (y/n)?");
		scanf("%s",&op);
		switch(op)
		{
			case 'y':
				printf("\n");
				addMov();
			case 'n':
				printf("\n");
				main();
			default:
				printf("\t\tPlease select (y) or (n)!\n");
				scanf("%s",&op);
		}
	} while(1);
}


int showmovie()
{
    int option;

	printf("\n\t\tChoose a type of movie:\n\n");
	printf("\t\t1.Action movie\n");
	printf("\t\t2.War movie\n");
	printf("\t\t3.Sci-fi movie\n");
	printf("\t\t4.Horror movie\n");
	printf("\t\t5.Animated movie\n");
	printf("\t\t6.Back to main menu\n");
	printf("\n\t\tWhat is your option (1-6)? ");
	scanf("%d", &option);
	do switch(option)
	{
		case 1:
			printf("\n\t\t1.The Equalizer\n");
			printf("\t\t2.Mad Max: Fury Road\n");
			printf("\t\t3.John Wick 3\n");
			printf("\n\t\tBack to main menu (4)\n");
			printf("\t\tChoose another type of movie select (5)\n");
			printf("\t\tYour Option : ");
			scanf("%d",&option);
            do {switch(option)
			{
				case 1:
					printf("\t\tMovie Name: The Equalizer\n");
					return 0;
				case 2:
					printf("\t\tMovie Name: Mad Max: Fury Road\n");
					return 0;
                case 3:
					printf("\t\tMovie Name: John Wick 3\n");
					return 0;
                case 4:
					printf("\t\t\n");
					main();
				case 5:
					printf("\t\t\n");
					showmovie();

				default:
					printf("\t\tPlease press the valid number\n");
					printf("\t\tYour Option : ");
			        scanf("%d",&option);
			}

			} while(1);
			break;

		case 2:
			printf("\n\t\t1.Saving Private Ryan\n");
			printf("\t\t2.Un long dimanche de fiancailles\n");
			printf("\t\t3.Braveheart\n");
			printf("\n\t\tBack to main menu select (4)\n");
			printf("\t\tChoose another type of movie select (5)\n");
			scanf("%d",&option);
			do {switch(option)
			{
				case 1:
					printf("\t\tMovie Name: Saving Private Ryan\n");
					return 0;
				case 2:
					printf("\t\tMovie Name: Un long dimanche de fiancailles\n");
					return 0;
                case 3:
                    printf("\t\tMovie Name: Braveheart\n");
					return 0;
                case 4:
					printf("\n");
					main();
				case 5:
					printf("\n");
					showmovie();
				default:
					printf("\t\tPlease press the valid number\n");
					printf("\t\tYour Option : ");
			        scanf("%d",&option);
			}
			} while(1);
			break;

		case 3:
			printf("\n\t\t1.Avengers:EndGame\n");
			printf("\t\t2.Captain Marvel\n");
			printf("\t\t3.Spider-Man:Far From Home\n");
			printf("\n\t\tBack to main menu select (4)\n");
			printf("\t\tChoose another type of movie select (5)\n");
			scanf("%d",&option);
			do {switch(option)
           {
				case 1:
					printf("\t\tMovie Name: Avengers:EndGame\n");
					return 0;
				case 2:
					printf("\t\tMovie Name: Captain Marvel\n");
					return 0;
                case 3:
                    printf("\t\tMovie Name: Spider-Man Far From Home\n");
					return 0;
                case 4:
					printf("\n");
					main();
				case 5:
					printf("\n");
					showmovie();
				default:
					printf("\t\tPlease press the valid number\n");
					printf("\t\tYour Option : ");
			        scanf("%d",&option);
           }
			} while(1);
			break;

		case 4:
			printf("\n\t\t1.IT\n");
			printf("\t\t2.Get Out\n");
			printf("\t\t3.The Witch\n");
			printf("\n\t\tBack to main menu select (4)\n");
			printf("\t\tChoose another type of movie select (5)\n");
			scanf("%d",&option);
			do {switch(option)
                {

				case 1:
					printf("\t\tMovie Name: IT\n");
					return 0;
				case 2:
					printf("\t\tMovie Name: Get Out\n");
					return 0;
                case 3:
                    printf("\t\tMovie Name: The Witch\n");
					return 0;;
                case 4:
					printf("\t\t\n");
					main();
				case 5:
					printf("\t\t\n");
					showmovie();
				default:
					printf("\t\tPlease press the valid number\n");
					printf("\t\tYour Option : ");
			        scanf("%d",&option);
                }
			} while(1);
			break;

		case 5:
			printf("\n\t\t1.Inside Out\n");
			printf("\t\t2.Zootopia\n");
			printf("\t\t3.Finding Nemo\n");
			printf("\n\t\tBack to main menu select (4)\n");
			printf("\t\tChoose another type of movie select (5)\n");
			scanf("%d",&option);
			do {switch(option)
			{
				case 1:
					printf("\t\tMovie Name: Inside Out\n");
					return 0;
				case 2:
					printf("\t\tMovie Name: Zootopia\n");
					return 0;
                case 3:
                    printf("\t\tMovie Name: Finding Nemo\n");
					return 0;
                case 4:
                    printf("\n\t\t");
					main();
				case 5:
					printf("\n\t\t");
					showmovie();
				default:
					printf("\t\tPlease press the valid number\n");
					printf("\t\tYour Option : ");
			        scanf("%d",&option);
			}
			} while(1);
			break;

		case 6:
			main();
		default:
			printf("\t\tPlease select a correct number (1-6)!");
			printf("\n\t\tWhat is your option (1-6)? ");
	        scanf("%d", &option);

	} while(1);

}

