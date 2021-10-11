#include<stdio.h>

#define CANDIDATE_COUNT

#define CANDIDATE1 "Noah Mutagobwa"
#define CANDIDATE2 "Guma Samuel"
#define CANDIDATE3 "Luka Eric"
#define CANDIDATE4 "Irene Amooti"

int votesCount1=0, votesCount2=0, votesCount3=0, votesCount4=0, spoiledtvotes=0;

void castVote(){
int choice;
// we do the selection of a candidate in this setion.
printf("\n\n------Please choose your Candidate-------\n\n");
printf("\n 1. %s", CANDIDATE1);
printf("\n 2. %s", CANDIDATE2);
printf("\n 3. %s", CANDIDATE3);
printf("\n 4. %s", CANDIDATE4);
printf("\n 5. %s", "None of These");

printf("\n\n Input your choice (1 - 4) : ");
scanf("%d",&choice);
//the voter will cast a vote to whoever they wish to vote
switch(choice){
    case 1: votesCount1++; break;
    case 2: votesCount2++; break;
    case 3: votesCount3++; break;
    case 4: votesCount4++; break;
    case 5: spoiledtvotes++; break;
    default: printf("\n Error: Wrong Choice !! Please retry");
             //hold the screen
             getchar();
}
printf("\n Thanks for your vote !!");
}

//shows us which and how many a candidate has.
void votesCount(){
printf("\n\n _____________Voting Statics______________");
printf("\n %s - %d ", CANDIDATE1, votesCount1);
printf("\n %s - %d ", CANDIDATE2, votesCount2);
printf("\n %s - %d ", CANDIDATE3, votesCount3);
printf("\n %s - %d ", CANDIDATE4, votesCount4);
printf("\n %s - %d ", "Spoiled Votes", spoiledtvotes);
}
//this will tell us who is winning
void getLeadingCandidate(){
    printf("\n\n-------Leading Candiate------------\n\n");
    if(votesCount1>votesCount2 && votesCount1>votesCount3 && votesCount1 >votesCount4)
    printf("[%s]",CANDIDATE1);
    else if (votesCount2>votesCount3 && votesCount2>votesCount4 && votesCount2 >votesCount1)
    printf("[%s]",CANDIDATE2);
    else if(votesCount3>votesCount4 && votesCount3>votesCount2 && votesCount3 >votesCount1)
    printf("[%s]",CANDIDATE3);
    else if(votesCount4>votesCount1 && votesCount4>votesCount2 && votesCount4 >votesCount3)
    printf("[%s]",CANDIDATE4);
    else
    printf("----- Warning !!! No-win detected.----");



}

int main()
{
int i;
int choice;
//give us the go ahead of the election system
do{
printf("\n\n------------Welcome to Election/Voting System 2021-------------");
printf("\n\n 1. Cast the Vote");
printf("\n 2. Find Vote Count");
printf("\n 3. Find leading Candidate");
printf("\n 0. Exit");

printf("\n\n Please enter your choice : ");
scanf("%d", &choice);

switch(choice)
{
case 1: castVote();break;
case 2: votesCount();break;
case 3: getLeadingCandidate();break;
default: printf("\n Error: Invalid Choice");
}
}while(choice!=0);

//hold the screen
getchar();

return 0;
}


