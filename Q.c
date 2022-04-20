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
        printf("How to play Quiz GAME!!!\n");
        printf("1.There are 3 modes in this game, Easy, Normal and Hard.\n2.When entering the game, there will be 10 questions per category, 4 choices each.\n3.When more than 6 correct answers or less than 4 wrong answers do a promotion Proceed to the next level starting with Easy Normal and ending with Hard.\n4.If answering 4 questions incorrectly will be downgraded.(in case of Easy, questions will be reset.)\n");
        printf("\"Y\" Continous\n");
        if (toupper(getch())=='Y')
        {
            goto Easy;
        }
        else
        {
            goto mainhome;
        }
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
		printf("\n\n1.If Thailand is divided into 6 regions Which region has the most provinces?");
		printf("\n\nA.Central\t\tB.Sourthern\n\nC.Northern\t\tD.Northeast");
		if (toupper(getch())=='D')
		{
		    printf("\n\nCorrect!!!");
		    getch();
		    break;
        }
		else
		{
		    printf("\n\nWrong!!! Northeast\n");
            printf("%d", hp);
            hp--;
            if(hp == 0){
        goto mainhome;
    }
    
		    getch();
            
		    break;
            
		}
        case 2:
		printf("\n\n2.If Thailand is divided into 6 regions Which region has the most provinces?");
		printf("\n\nA.Central\t\tB.Sourthern\n\nC.Northern\t\tD.Northeast");
		if (toupper(getch())=='D')
		{
		    printf("\n\nCorrect!!!");
		    getch();
		    break;
        }
		else
		{
		    printf("\n\nWrong!!! Northeast\n");
            printf("%d", hp);
            hp--;
		    getch();
            if(hp == 0){
        goto mainhome;
    }
		    break;
		}
        case 3:
		printf("\n\n3.If Thailand is divided into 6 regions Which region has the most provinces?");
		printf("\n\nA.Central\t\tB.Sourthern\n\nC.Northern\t\tD.Northeast");
		if (toupper(getch())=='D')
		{
		    printf("\n\nCorrect!!!");
		    getch();
		    break;
        }
		else
		{
		    printf("\n\nWrong!!! Northeast\n");
            printf("%d", hp);
            hp--;
		    getch();
            if(hp == 0){
        goto mainhome;
    }
		    break;
		}
    }
    }

    Normal:
    system("cls");
    printf("hhhdfgfdgfdgfdgdfgfdgdfgdf");
}