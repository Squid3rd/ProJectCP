#include <stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

void gamerule(){

}

int main(){
    int i;
    float score;
    char choose;
    mainhome:
    system("cls");
    printf("\t\t\t-----------------------------------------\n");
    printf("\t\t\t|       Project ComputerProgramming     |\n");
    printf("\t\t\t|========================================\n");
    printf("\t\t\t|          Quiz==Game==Worldwide        |\n");
    printf("\t\t\t|========================================\n");
    printf("\t\t\t|\t\t\"S\" Start\t\t|\n");
    printf("\t\t\t|\t\t\"H\" High Score\t\t|\n");
    printf("\t\t\t|\t\t\"Q\" Quit\t\t|\n");
    printf("\t\t\t|\t\t\"G\" Github\t\t|\n");
    printf("\t\t\t|_______________________________________|\n");
    choose = toupper(getch());
    if(choose == 'G')
        {
            system("start https://github.com/Squid3rd/ProJectCP");
            system("cls");
            goto mainhome;
        }
    else if(choose == 'S'){
        system("cls");
        goto Rule;
    }
    else{
        goto mainhome;
    }
   Rule:
        system("cls");
        printf("\n\n\t\t\t.----------------------------.\n");
        printf("\t\t\t|  How to play Quiz GAME!!!  |\n");
        printf("\t\t\t'----------------------------'\n\n");
        printf("\t1.There are 3 modes in this game, Easy, Normal and Hard.\n\
        2.When entering the game, there will be 10 questions per category, 4 choices each.\n\
        3.When more than 6 correct answers or less than 4 wrong answers do a promotion Proceed to the next level \n\
        starting with Easy Normal and ending with Hard.\n\
        4.If answering 4 questions incorrectly will be downgraded.(in case of Easy, questions will be reset.)\n");
        printf("\n\n\t\t\t\"Y\" To begin this Quiz\n");
        if (toupper(getch())=='Y')
        {
            goto Easy;
        }
        else if(toupper(getch())=='N')
        {
            goto mainhome;
        }
        else
        {
            goto Rule;
        }
    

    Retry:
    system("cls");
    printf("   ______________________________\n\
 / \\                             \\.\n\
|   |      -----------------     |.\n\
 \\_ |      | YOU FAIL QUIZ |     |.\n\
    |      -----------------     |.\n\
    |                            |.\n\
    |                            |.\n\
    |     Press \"Y\" to Retry     |.\n\
    |     Press \"N\" to Menu      |.\n\
    |                            |.\n\
    |                            |.\n\
    |                            |.\n\
    |                            |.\n\
    |                            |.\n\
    |                            |.\n\
    |   _________________________|___\n\
    |  /                            /.\n\
    \\_/____________________________/.");
    
    if (toupper(getch())=='Y')
        {
            goto Easy;
        }
    else if(toupper(getch())=='N')
        {
            goto mainhome;
        }
    else
    {
        goto Retry;
        
    }

    Easy:
    system("cls");
    int hp = 2;
    for (i=0; i<=3; i++)
    {
        system("cls");
        int question = i;


    switch(question)
    {
        case 1:
        printf("\n\n\t\t+-------------------------+\n");
        printf("\t\t|   Your current HP: %d    |\n", hp);
        printf("\t\t+-------------------------+\n");
		printf("\n\n\t1.If Thailand is divided into 6 regions Which region has the most provinces?");
		printf("\n\n\t\tA.Central\t\tB.Sourthern\n\n\t\tC.Northern\t\tD.Northeast");
		if (toupper(getch())=='D')
		{
		    printf("\n\nCorrect!!!");
		    getch();
		    break;
        }
		else
		{
		    printf("\n\nWrong!!! Northeast\n");
            
            hp--;
            if(hp == 0){
        goto Retry;
    }
    
		    getch();
            
		    break;
            
		}
        case 2:
        printf("\n\n\t\t+-------------------------+\n");
        printf("\t\t|   Your current HP: %d    |\n", hp);
        printf("\t\t+-------------------------+\n");
		printf("\n\n2.If Thailand is divided into 6 regions Which region has the most provinces?");
		printf("\n\n\tA.Central\t\tB.Sourthern\n\n\tC.Northern\t\tD.Northeast");
		if (toupper(getch())=='D')
		{
		    printf("\n\nCorrect!!!");
		    getch();
		    break;
        }
		else
		{
		    printf("\n\nWrong!!! Northeast\n");
            
            hp--;
		    getch();
            if(hp == 0){
        goto Retry;
    }
		    break;
		}
        case 3:
        printf("\n\n\t\t+-------------------------+\n");
        printf("\t\t|   Your current HP: %d    |\n", hp);
        printf("\t\t+-------------------------+\n");
		printf("\n\n3.If Thailand is divided into 6 regions Which region has the most provinces?");
		printf("\n\n\tA.Central\t\tB.Sourthern\n\n\tC.Northern\t\tD.Northeast");
		if (toupper(getch())=='D')
		{
		    printf("\n\nCorrect!!!");
		    getch();
		    break;
        }
		else
		{
		    printf("\n\nWrong!!! Northeast\n");
            
            hp--;
		    getch();
            if(hp == 0){
        goto Retry;
    }
		    break;
		}
    }
    }

    Normal:
    system("cls");
    printf("Welcome to Normal!\t");
    printf("");
}