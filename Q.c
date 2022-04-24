#include <stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>


int main(){
    int moneyshop = 0;
    int ownhp= 200;
    int money = 100000;
    int streak = 0;
    int i;
    int counteasy = 0, countnormal = 0, counthard = 0;
    int moneyeasy = 0, moneynormal = 0, moneyhard = 0;
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
    else if (choose=='Q'){
        exit(1);
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
        printf("\t\t\t\"N\" To Return to Menu\n");
        char chomain = toupper(getch());
        if (chomain=='Y')
        {
            goto Easy;
        }
        else if(chomain=='N')
        {
            goto mainhome;
        }
        
        else
        {
            goto Rule;
        }
    

    Retry:
    system("cls");
    counteasy=0;
    money=0;
    printf("\t\t   ______________________________\n\
\t\t / \\                             \\.\n\
\t\t|   |      -----------------     |.\n\
\t\t \\_ |      | YOU FAIL QUIZ |     |.\n\
\t\t    |      -----------------     |.\n\
\t\t    |                            |.\n\
\t\t    |                            |.\n\
\t\t    |     Press \"Y\" to Retry     |.\n\
\t\t    |     Press \"N\" to Menu      |.\n\
\t\t    |                            |.\n\
\t\t    |                            |.\n\
\t\t    |                            |.\n\
\t\t    |   _________________________|___\n\
\t\t    |  /                            /.\n\
\t\t    \\_/____________________________/.");
    
    char faile=toupper(getch());
    if (faile=='Y')
        {
            goto Easy;
        }
    else if(faile=='N')
        {
            goto mainhome;
        }
    else
    {
        goto Retry;
        
    }

    Retry1:
    system("cls");
    counteasy= 0;
    countnormal=0;
    printf("\t\t   ______________________________\n\
\t\t / \\                             \\.\n\
\t\t|   |      -----------------     |.\n\
\t\t \\_ |      | YOU FAIL QUIZ |     |.\n\
\t\t    |      -----------------     |.\n\
\t\t    |                            |.\n\
\t\t    |                            |.\n\
\t\t    |     Press \"Y\" to Easy      |.\n\
\t\t    |     Press \"N\" to Menu      |.\n\
\t\t    |                            |.\n\
\t\t    |                            |.\n\
\t\t    |                            |.\n\
\t\t    |   _________________________|___\n\
\t\t    |  /                            /.\n\
\t\t    \\_/____________________________/.");
    char failn=toupper(getch());
    if (failn=='Y')
        {
            goto Easy;
        }
    else if(failn=='N')
        {
            goto mainhome;
        }
    else
    {
        goto Retry;
        
    }


    Retry2:
    system("cls");
    countnormal = 0;
    counthard=0;
    printf("\t\t   ______________________________\n\
\t\t / \\                             \\.\n\
\t\t|   |      -----------------     |.\n\
\t\t \\_ |      | YOU FAIL QUIZ |     |.\n\
\t\t    |      -----------------     |.\n\
\t\t    |                            |.\n\
\t\t    |                            |.\n\
\t\t    |     Press \"Y\" to Normal    |.\n\
\t\t    |     Press \"N\" to Menu      |.\n\
\t\t    |                            |.\n\
\t\t    |                            |.\n\
\t\t    |                            |.\n\
\t\t    |   _________________________|___\n\
\t\t    |  /                            /.\n\
\t\t    \\_/____________________________/.");
    char failh=toupper(getch());
    if (failh=='Y')
        {
            goto Normal;
        }
    else if(failh=='N')
        {
            goto mainhome;
        }
    else
    {
        goto Retry;
        
    }

    Easy:
    system("cls");
    
    int score = 0;
    int hp = ownhp;
    for (i=counteasy; i<=16; i++)
    {
        system("cls");
        int question = counteasy;
        counteasy++;
        printf("\n\n\t\t\t\t\tIn the stage of EASY");
        

    switch(question)
    {
        
        case 1:
        printf("\n\n\t\t+--------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+--------------------+\n");
		printf("\n\n\t1.If Thailand is divided into 6 regions Which region has the most provinces?");
		printf("\n\n\t\tA.Central\t\tB.Sourthern\n\n\t\tC.Northern\t\tD.Northeast");

       
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
       char gete1= toupper(getch());

		if (gete1=='D')
		{
		    printf("\n\n\tCorrect!!!");
            score++;
            streak++;
            money += 1000;
            if (streak%2 ==  0){
                goto Bonus;
            }
            else if (score >= 8){
                goto Normal;
            }
		    break;
        }
        else if (gete1=='P'){
            printf("\n\n\tGo to shop!");
            getch();
            goto ShopEasy;
            break;
        }
		else if (gete1 == 'A' || gete1 == 'B' || gete1 == 'C')
		{
		    printf("\n\n\tWrong!!! Northeast\n");
            getch();
            streak = 0;
            hp--;
            ownhp--;
            if(hp == 0){
            goto Retry;
    }        
		    break;
            
		}
        else{
            counteasy = 1;
            goto Easy;
            break;
        }
        case 2:
        printf("\n\n\t\t+--------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+--------------------+\n");
		printf("\n\n\t2.Phu Kradueng is in which province?");
		printf("\n\n\t\tA.Loei\t\t\tB.Khon Kaen\n\n\t\tC.Phitsanulok\t\tD.Phetchabun");

    
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char gete2=toupper(getch());
		if (gete2=='A')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1000;
            if (streak%2 ==  0){
                goto Bonus;
            }
            else if (score >= 8){
                goto Normal;
            }
		    break;
        }
        else if (gete2=='P'){
            getch();
            goto ShopEasy;
            break;
        }
		else if (gete2 == 'D' || gete2 == 'B' || gete2 == 'C')
		{
		    printf("\n\n\tWrong!!! Loei\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        else{
            counteasy = 2;
            goto Easy;
            break;
        }
        case 3:
        printf("\n\n\t\t+--------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+--------------------+\n");
		printf("\n\n\t3.What is the northernmost province of Thailand?");
		printf("\n\n\t\tA.Chiang Mai\t\tB.Rai Chiang\n\n\t\tC.Tak\t\t\tD.Kamphaeng Phet");

        
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char gete3 = toupper(getch());
		if (gete3=='B')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1000;
            if (streak%2 ==  0){
                goto Bonus;
            }
            else if (score >= 8){
                goto Normal;
            }
		    break;
        }
        else if (gete3=='P'){
            getch();
            goto ShopEasy;
            break;
        }
		else if (gete3 == 'A' || gete3 == 'D' || gete3 == 'C')
		{
		    printf("\n\n\tWrong!!! Rai Chiang\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        else{
            counteasy = 3;
            goto Easy;
            break;
        }
        case 4:
        printf("\n\n\t\t+--------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+--------------------+\n");
		printf("\n\n\t4.Which province is next to the sea?");
		printf("\n\n\t\tA.Prachin Buri\t\tB.Nakhon Nayok\n\n\t\tC.Nakhon Pathom\t\tD.Chonburi");

        
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char gete4 = toupper(getch());
		if (gete4=='D')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1000;
            if (streak%2 ==  0){
                goto Bonus;
            }
            else if (score >= 8){
                goto Normal;
            }
		    break;
        }
        else if (gete4=='P'){
            getch();
            goto ShopEasy;
            break;
        }
		else if (gete4 == 'A' || gete4 == 'B' || gete4 == 'C')
		{
		    printf("\n\n\tWrong!!! Chonburi\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        else{
            counteasy = 4;
            goto Easy;
            break;
        }
        case 5:
        printf("\n\n\t\t+--------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+--------------------+\n");
		printf("\n\n\t5.Which province is not close to the sea?");
		printf("\n\n\t\tA.Chonburi\t\tB.Rayong\n\n\t\tC.Suphan Buri\t\tD.Prachuap Khiri Khan");

        
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char gete5 = toupper(getch());
		if (gete5=='C')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1000;
            if (streak%2 ==  0){
                goto Bonus;
            }
            else if (score >= 8){
                goto Normal;
            }
		    break;
        }
        else if (gete5=='P'){
            getch();
            goto ShopEasy;
            break;
        }
		else if (gete5 == 'A' || gete5 == 'B' || gete5 == 'D')
		{
		    printf("\n\n\tWrong!!! Suphan Buri\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        else{
            counteasy = 5;
            goto Easy;
            break;
        }
        case 6:
        printf("\n\n\t\t+--------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+--------------------+\n");
		printf("\n\n\t6.What is the northernmost province of Thailand?");
		printf("\n\n\t\tA.Chiang Mai\t\tB.Chiang Rai\n\n\t\tC.Mae Hong Son\t\tD.Narathiwat");

        
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char gete6 = toupper(getch());
		if (gete6=='B')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1000;
            if (streak%2 ==  0){
                goto Bonus;
            }
            else if (score >= 8){
                goto Normal;
            }
		    break;
        }
        else if (gete6=='P'){
            getch();
            goto ShopEasy;
            break;
        }
		else if (gete6 == 'A' || gete6 == 'D' || gete6 == 'C')
		{
		    printf("\n\n\tWrong!!! Northeast\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        else{
            counteasy = 6;
            goto Easy;
            break;
        }
        case 7:
        printf("\n\n\t\t+--------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+--------------------+\n");
		printf("\n\n\t7.How many Provinces are there in the South?");
		printf("\n\n\t\tA.9\t\tB.10\n\n\t\tC.11\t\tD.12");
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char gete7 = toupper(getch());
		if (gete7=='A')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1000;
            if (streak%2 ==  0){
                goto Bonus;
            }
            else if (score >= 8){
                goto Normal;
            }
		    break;
        }
        else if (gete7=='P'){
            getch();
            goto ShopEasy;
            break;
        }
		else if (gete7 == 'D' || gete7 == 'B' || gete7 == 'C')
		{
		    printf("\n\n\tWrong!!! Northeast\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        else{
            counteasy = 7;
            goto Easy;
            break;
        }
        case 8:
        printf("\n\n\t\t+--------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+--------------------+\n");
		printf("\n\n\t8.What is the most populous province in Thailand?");
		printf("\n\n\t\tA.Chiang Mai\t\tB.Chiang Rai\n\n\t\tC.Bangkok\t\tD.Nakhon Pathom");

        
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char gete8 = toupper(getch());
		if (gete8=='C')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1000;
            if (streak%2 ==  0){
                goto Bonus;
            }
            else if (score >= 8){
                goto Normal;
            }
		    break;
        }
        else if (gete8=='P'){
            getch();
            goto ShopEasy;
            break;
        }
		else if (gete8 == 'A' || gete8 == 'B' || gete8 == 'D')
		{
		    printf("\n\n\tWrong!!! Northeast\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        else{
            counteasy = 8;
            goto Easy;
            break;
        }
        case 9:
        printf("\n\n\t\t+--------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+--------------------+\n");
		printf("\n\n\t9.Which region in Thailand has the most provinces?");
		printf("\n\n\t\tA.Central\t\tB.Sourthern\n\n\t\tC.Northern\t\tD.Northeast");

        
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char gete9 = toupper(getch());
		if (gete9=='A')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1000;
            if (streak%2 ==  0){
                goto Bonus;
            }
            else if (score >= 8){
                goto Normal;
            }
		    break;
        } 
        else if (gete9=='P'){
            getch();
            goto ShopEasy;
            break;
        }
		else if (gete9 == 'D' || gete9 == 'B' || gete9 == 'C')
		{
		    printf("\n\n\tWrong!!! Northeast\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        else{
            counteasy = 9;
            goto Easy;
            break;
        }
        case 10:
        printf("\n\n\t\t+--------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+--------------------+\n");
		printf("\n\n\t10.Where is the capital city of Thailand?");
		printf("\n\n\t\tA.Chiang Rai\t\tB.Chiang Mai\n\n\t\tC.Bangkok\t\tD.Nakhon Pathom");

        
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char gete10 = toupper(getch());
		if (gete10=='C')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1000;
            if (streak%2 ==  0){
                goto Bonus;
            }
            else if (score >= 8){
                goto Normal;
            }
		    break;
        }
        else if (gete10=='P'){
            getch();
            goto ShopEasy;
            break;
        }
		else if (gete10 == 'A' || gete10 == 'B' || gete10 == 'D')
		{
		    printf("\n\n\tWrong!!! Northeast\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        else{
            counteasy = 10;
            goto Easy;
            break;
        }
        case 11:
        printf("\n\n\t\t+--------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+--------------------+\n");
		printf("\n\n\t11.Which one is the province in the North Region?");
		printf("\n\n\t\tA.Nakhon Sawan\t\tB.Trat\n\n\t\tC.Roi Et\t\tD.Phayao");

        
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char gete11 = toupper(getch());
		if (gete11=='D')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1000;
            if (streak%2 ==  0){
                goto Bonus;
            }
            else if (score >= 8){
                goto Normal;
            }
		    break;
        }
        else if (gete11=='P'){
            getch();
            goto ShopEasy;
            break;
        }
		else if (gete11 == 'A' || gete11 == 'B' || gete11 == 'C')
		{
		    printf("\n\n\tWrong!!! Phayao\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        else{
            counteasy = 11;
            goto Easy;
            break;
        }
        case 12:
        printf("\n\n\t\t+--------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+--------------------+\n");
		printf("\n\n\t12.How many Provinces are there in the North?");
		printf("\n\n\t\tA.17\t\tB.8\n\n\t\tC.14\t\tD.20");

        
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char gete12 = toupper(getch());
		if (gete12=='A')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1000;
            if (streak%2 ==  0){
                goto Bonus;
            }
            else if (score >= 8){
                goto Normal;
            }
		    break;
        }
        else if (gete12=='P'){
            getch();
            goto ShopEasy;
            break;
        }
		else if (gete12 == 'D' || gete12 == 'B' || gete12 == 'C')
		{
		    printf("\n\n\tWrong!!! 17\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        else{
            counteasy = 12;
            goto Easy;
            break;
        }
        case 13:
        printf("\n\n\t\t+--------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+--------------------+\n");
		printf("\n\n\t13.What color does not appear in the falg of Thailand?");
		printf("\n\n\t\tA.Red\t\tB.Blue\n\n\t\tC.White\t\tD.Green");

        
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char gete13 = toupper(getch());
		if (gete13=='D')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1000;
            if (streak%2 ==  0){
                goto Bonus;
            }
            else if (score >= 8){
                goto Normal;
            }
		    break;
        }
        else if (gete13=='P'){
            getch();
            goto ShopEasy;
            break;
        }
		else if (gete13 == 'A' || gete13 == 'B' || gete13 == 'C')
		{
		    printf("\n\n\tWrong!!! Green\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        else{
            counteasy = 13;
            goto Easy;
            break;
        }
        case 14:
        printf("\n\n\t\t+--------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+--------------------+\n");
		printf("\n\n\t14.What region is Buriram Province in Thailand?");
		printf("\n\n\t\tA.South\t\t\tB.Wastern region\n\n\t\tC.Eastern region\tD.Northeast");

        
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char gete14 = toupper(getch());
		if (gete14=='D')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1000;
            if (streak%2 ==  0){
                goto Bonus;
            }
            else if (score >= 8){
                goto Normal;
            }
		    break;
        }
        else if (gete14=='P'){
            getch();
            goto ShopEasy;
            break;
        }
		else if (gete14 == 'A' || gete14 == 'B' || gete14 == 'C')
		{
		    printf("\n\n\tWrong!!! Northeast\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        else{
            counteasy = 14;
            goto Easy;
            break;
        }
        case 15:
        printf("\n\n\t\t+--------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+--------------------+\n");
		printf("\n\n\t15.What region is Chonburi Province in Thailand?");
		printf("\n\n\t\tA. North\t\tB. Wastern region\n\n\t\tC. Eastern region\tD. South");

        
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char gete15 = toupper(getch());
		if (gete15=='C')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1000;
            if (streak%2 ==  0){
                goto Bonus;
            }
            else if (score >= 8){
                goto Normal;
            }
		    break;
        }
        else if (gete15=='P'){
            getch();
            goto ShopEasy;
            break;
        }
		else if (gete15 == 'A' || gete15 == 'B' || gete15 == 'D')
		{
		    printf("\n\n\tWrong!!! Eastern region\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        else{
            counteasy = 15;
            goto Easy;
            break;
        }
        
        
    }
    }

    Normal:
    system("cls");
    printf("Welcome to Normal!\t");
    
    hp = ownhp;

    for (i=countnormal; i<=11; i++)
    {
        system("cls");
        int question1 = countnormal;
        countnormal++;
        printf("\n\n\t\t\t\t\tIn the stage of Normal");
        switch(question1)
        {
            case 1:
        printf("\n\n\t\t+--------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+--------------------+\n");
		printf("\n\n\t1.How many provinces does Thailand currently have?");
		printf("\n\n\t\tA. 76\t\tB. 77\n\n\t\tC. 78\t\tD. 79");

        
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char getn1 = toupper(getch());
		if (getn1=='A')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1500;
            if (streak%2 ==  0){
                goto Bonus;
            }
            else if (score >= 14){
                goto Hard;
            }
		    break;
        }
        else if (getn1=='P'){
            getch();
            goto ShopNormal;
            break;
        }
		else if (getn1 == 'D' || getn1 == 'B' || getn1 == 'C')
		{
		    printf("\n\n\tWrong!!! 76\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        else{
            countnormal = 1;
            goto Normal;
            break;
        }
            case 2:
        printf("\n\n\t\t+--------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+--------------------+\n");
		printf("\n\n\t2.What is the latest province of Thailand?");
		printf("\n\n\t\tA. Bangkok\t\tB. Kalasin\n\n\t\tC. Bueng Kan\t\tD. Nong Bua Lamphu");

        
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char getn2 = toupper(getch());
		if (getn2=='C')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1500;
            if (streak%2 ==  0){
                goto Bonus;
            }
            else if (score >= 14){
                goto Hard;
            }
		    break;
        } 
        else if (getn2=='P'){
            getch();
            goto ShopNormal;
            break;
        }
		else if (getn2 == 'D' || getn2 == 'B' || getn2 == 'A')
		{
		    printf("\n\n\tWrong!!! Bueng Kan\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        else{
            countnormal = 2;
            goto Normal;
            break;
        }
        case 3:
        printf("\n\n\t\t+--------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+--------------------+\n");
		printf("\n\n\t3.What is the most populated continent in the world?");
		printf("\n\n\t\tA. Europe\t\tB. North America\n\n\t\tC. South America\tD. Asia");

        
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char getn3 = toupper(getch());
		if (getn3=='D')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1500;
            if (streak%2 ==  0){
                goto Bonus;
            }
            else if (score >= 14){
                goto Hard;
            }
		    break;
        }
        else if (getn3=='P'){
            getch();
            goto ShopNormal;
            break;
        }
		else if (getn3 == 'A' || getn3 == 'B' || getn3 == 'C')
		{
		    printf("\n\n\tWrong!!! Asia\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        else{
            countnormal = 3;
            goto Normal;
            break;
        }
        case 4:
        printf("\n\n\t\t+--------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+--------------------+\n");
		printf("\n\n\t4.What is the highest peak in the world?");
		printf("\n\n\t\tA. Godwin Austen\tB. Everest\n\n\t\tC. Lhotse\t\tD. Makalu");

        
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char getn4 = toupper(getch());
		if (getn4=='B')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1500;
            if (streak%2 ==  0){
                goto Bonus;
            }
            else if (score >= 14){
                goto Hard;
            }
		    break;
        }
        else if (getn4=='P'){
            getch();
            goto ShopNormal;
            break;
        }
		else if (getn4 == 'D' || getn4 == 'A' || getn4 == 'C')
		{
		    printf("\n\n\tWrong!!! Everest\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        else{
            countnormal = 4;
            goto Normal;
            break;
        }
        case 5:
        printf("\n\n\t\t+--------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+--------------------+\n");
		printf("\n\n\t5. What is the longest river in the world?");
		printf("\n\n\t\tA. Nile River\t\t\tB. Congo River\n\n\t\tC. Chao Phraya River\t\tD. Amazon River");

        
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char getn5 = toupper(getch());
		if (getn5=='A')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1500;
            if (streak%2 ==  0){
                goto Bonus;
            }
            else if (score >= 14){
                goto Hard;
            }
		    break;
        }
        else if (getn5=='P'){
            getch();
            goto ShopNormal;
            break;
        }
		else if (getn5 == 'D' || getn5 == 'B' || getn5 == 'C')
		{
		    printf("\n\n\tWrong!!! Nile River\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        else{
            countnormal = 5;
            goto Normal;
            break;
        }
        case 6:
        printf("\n\n\t\t+--------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+--------------------+\n");
		printf("\n\n\t6.What is ingredients should not be in minced pork basil?");
		printf("\n\n\t\tA. Pork \t\tB. Chilli\n\n\t\tC. tomatoes\t\tD. Basil");

        
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char getn6 = toupper(getch());
		if (getn6=='C')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1500;
            if (streak%2 ==  0){
                goto Bonus;
            }
            else if (score >= 14){
                goto Hard;
            }
		    break;
        }
        else if (getn6=='P'){
            getch();
            goto ShopNormal;
            break;
        }
		else if (getn6 == 'D' || getn6 == 'B' || getn6 == 'A')
		{
		    printf("\n\n\tWrong!!! tomatoes\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        else{
            countnormal = 6;
            goto Normal;
            break;
        }
        case 7:
        printf("\n\n\t\t+--------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+--------------------+\n");
		printf("\n\n\t7.What is ingreddients should be in chicken green curry?");
		printf("\n\n\t\tA. tomatoes\t\tB. Shimp\n\n\t\tC. Pork\t\t\tD. Thai eggplant");

        
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char getn7 = toupper(getch());
		if (getn7=='D')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1500;
            if (streak%2 ==  0){
                goto Bonus;
            }
            else if (score >= 14){
                goto Hard;
            }
		    break;
        }
        else if (getn7=='P'){
            getch();
            goto ShopNormal;
            break;
        }
		else if (getn7 == 'A' || getn7 == 'B' || getn7 == 'C')
		{
		    printf("\n\n\tWrong!!! Thai eggplant\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        else{
            countnormal = 7;
            goto Normal;
            break;
        }
        case 8:
        printf("\n\n\t\t+--------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+--------------------+\n");
		printf("\n\n\t8.Which of the following countries is not in ASEAN?");
		printf("\n\n\t\tA. Japan\t\tB. Thailand\n\n\t\tC. Indonesia\t\tD. Singapore");

        
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char getn8 = toupper(getch());
		if (getn8=='A')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1500;
            if (streak%2 ==  0){
                goto Bonus;
            }
            else if (score >= 14){
                goto Hard;
            }
		    break;
        }
        else if (getn8=='P'){
            getch();
            goto ShopNormal;
            break;
        }
		else if (getn8 == 'D' || getn8 == 'B' || getn8 == 'C')
		{
		    printf("\n\n\tWrong!!! Japan\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        else{
            countnormal = 8;
            goto Normal;
            break;
        }
        case 9:
        printf("\n\n\t\t+--------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+--------------------+\n");
		printf("\n\n\t9.Which of the following is not classified as a city in Japan?");
		printf("\n\n\t\tA. Fukuoka\t\tB. Kansai\n\n\t\tC. Nikko region\t\tD. Sapporo");

        
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char getn9 = toupper(getch());
		if (getn9=='B')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1500;
            if (streak%2 ==  0){
                goto Bonus;
            }
            else if (score >= 14){
                goto Hard;
            }
		    break;
        }
        else if (getn9=='P'){
            getch();
            goto ShopNormal;
            break;
        }
		else if (getn9 == 'D' || getn9 == 'A' || getn9 == 'C')
		{
		    printf("\n\n\tWrong!!! Kansai\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        else{
            countnormal = 9;
            goto Normal;
            break;
        }
        case 10:
        printf("\n\n\t\t+--------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+--------------------+\n");
		printf("\n\n\t10.Which of the following has a capital city that does not match the country?");
		printf("\n\n\t\tA. Russia-Moscow\t\tB. Germany-Berlin\n\n\t\tC. Japan-Kyoto\t\t\tD. France-Paris");

        
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char getn10 = toupper(getch());
		if (getn10=='C')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1500;
            if (streak%2 ==  0){
                goto Bonus;
            }
            else if (score >= 14){
                goto Hard;
            }
		    break;
        }
        else if (getn10=='P'){
            getch();
            goto ShopNormal;
            break;
        }
		else if (getn10 == 'D' || getn10 == 'B' || getn10 == 'A')
		{
		    printf("\n\n\tWrong!!! Japan-Kyoto\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        else{
            countnormal = 10;
            goto Normal;
            break;
        }
        
        }
        
    }
    Hard:
    system("cls");
    printf("Welcometo  Hard!");
    hp=ownhp;
    for (i=counthard; i<=16; i++)
    {
        system("cls");
        int question3 = counthard;
        counthard++;
        printf("\n\n\t\t\t\t\tIn the stage of Hard");
        switch(question3)
        {
            case 1:
        printf("\n\n\t\t+--------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+--------------------+\n");
		printf("\n\n\t1.Which continent has 90% of the world's ice?");
		printf("\n\n\t\tA. Antarctica\t\tB. Australia\n\n\t\tC. Africa\t\tD. Europe");

        
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char geth1 = toupper(getch());
		if (geth1=='A')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 2000;
            if (streak%2 ==  0){
                goto Bonus;
            }
            else if (score >= 20){
                goto EndGame;
            }
		    break;
        }
        else if (geth1=='P'){
            getch();
            goto ShopHard;
            break;
        }
		else if (geth1 == 'D' || geth1 == 'B' || geth1 == 'C')
		{
		    printf("\n\n\tWrong!!! Antarctica\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        else{
            counthard = 1;
            goto Hard;
            break;
        }
            case 2:
        printf("\n\n\t\t+--------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+--------------------+\n");
		printf("\n\n\t2.Which continent has the most Christianity in the world?");
		printf("\n\n\t\tA. Europe\t\tB. Africa\n\n\t\tC. Australia\t\tD. Asia");

        
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char geth2 = toupper(getch());
		if (geth2=='A')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 2000;
            if (streak%2 ==  0){
                goto Bonus;
            }
            else if (score >= 20){
                goto EndGame;
            }
		    break;
        }
        else if (geth2=='P'){
            getch();
            goto ShopHard;
            break;
        }
		else if (geth2 == 'D' || geth2 == 'B' || geth2 == 'C')
		{
		    printf("\n\n\tWrong!!! Europe\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        else{
            counthard = 2;
            goto Hard;
            break;
        }
        case 3:
        printf("\n\n\t\t+--------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+--------------------+\n");
		printf("\n\n\t3.Which country has the most gold in the world?");
		printf("\n\n\t\tA. Thailand\t\tB. Russia\n\n\t\tC. U.S.A\t\tD. England");

        
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char geth3 = toupper(getch());
		if (geth3=='C')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 2000;
            if (streak%2 ==  0){
                goto Bonus;
            }
            else if (score >= 20){
                goto EndGame;
            }
		    break;
        }
        else if (geth3=='P'){
            getch();
            goto ShopHard;
            break;
        }
		else if (geth3 == 'D' || geth3 == 'B' || geth3 == 'A')
		{
		    printf("\n\n\tWrong!!! U.S.A\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        else{
            counthard = 3;
            goto Hard;
            break;
        }
        case 4:
        printf("\n\n\t\t+--------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+--------------------+\n");
		printf("\n\n\t4.What is the tallest skyscraper in the world?");
		printf("\n\n\t\tA. Burj Khalifa\t\t\tB. Shanghai tower\n\n\t\tC. One World Trade Center\tD. Taipei 101");

        
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char geth4 = toupper(getch());
		if (geth4=='A')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 2000;
            if (streak%2 ==  0){
                goto Bonus;
            }
            else if (score >= 20){
                goto EndGame;
            }
		    break;
        }
        else if (geth4=='P'){
            getch();
            goto ShopHard;
            break;
        }
		else if (geth4 == 'D' || geth4 == 'B' || geth4 == 'C')
		{
		    printf("\n\n\tWrong!!! Burj Khalifa\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        else{
            counthard = 4;
            goto Hard;
            break;
        }
        case 5:
        printf("\n\n\t\t+--------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+--------------------+\n");
		printf("\n\n\t5. What country has the most nuclear bombs?");
		printf("\n\n\t\tA. U.S.A\t\tB. Russia\n\n\t\tC. French\t\tD. North Korea");

        
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char geth5 = toupper(getch());
		if (geth5=='A')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 2000;
            if (streak%2 ==  0){
                goto Bonus;
            }
            else if (score >= 20){
                goto EndGame;
            }
		    break;
        }
        else if (geth5=='P'){
            getch();
            goto ShopHard;
            break;
        }
		else if (geth5 == 'D' || geth5 == 'B' || geth5 == 'C')
		{
		    printf("\n\n\tWrong!!! Eastern\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        else{
            counthard = 5;
            goto Hard;
            break;
        }
        case 6:
        printf("\n\n\t\t+--------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+--------------------+\n");
		printf("\n\n\t6.What is ingredients should not be in Rattatouille?");
		printf("\n\n\t\tA. eggplant \t\tB. Zucchini\n\n\t\tC. Squash\t\tD. Potato");

        
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char geth6 = toupper(getch());
		if (geth6=='D')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 2000;
            if (streak%2 ==  0){
                goto Bonus;
            }
            else if (score >= 20){
                goto EndGame;
            }
		    break;
        }
        else if (geth6=='P'){
            getch();
            goto ShopHard;
            break;
        }
		else if (geth6 == 'A' || geth6 == 'B' || geth6 == 'C')
		{
		    printf("\n\n\tWrong!!! Patato\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        else{
            counthard = 6;
            goto Hard;
            break;
        }
        case 7:
        printf("\n\n\t\t+--------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+--------------------+\n");
		printf("\n\n\t7.Who is not the Presidential Place of the Soviet Union? ");
		printf("\n\n\t\tA. Vladimir Il'ich Lenin\tB. Leonid Brezhnev\n\n\t\tC. Adolf Hitler\t\t\tD. Joseph Stalin");

        
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char geth7 = toupper(getch());
		if (geth7=='C')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 2000;
            if (streak%2 ==  0){
                goto Bonus;
            }
            else if (score >= 20){
                goto EndGame;
            }
		    break;
        }
        else if (geth7=='P'){
            getch();
            goto ShopHard;
            break;
        }
		else if (geth7 == 'D' || geth7 == 'B' || geth7 == 'A')
		{
		    printf("\n\n\tWrong!!! Adolf Hitler\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        else{
            counthard = 7;
            goto Hard;
            break;
        }
        case 8:
        printf("\n\n\t\t+--------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+--------------------+\n");
		printf("\n\n\t8.How many years have passed since the Titanic shipwrecked? (Now 2022)");
		printf("\n\n\t\tA. 110\t\tB. 109\n\n\t\tC. 108\t\tD. 107");

        
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char geth8 = toupper(getch());
		if (geth8=='A')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 2000;
            if (streak%2 ==  0){
                goto Bonus;
            }
            else if (score >= 20){
                goto EndGame;
            }
		    break;
        }
        else if (geth8=='P'){
            getch();
            goto ShopHard;
            break;
        }
		else if (geth8 == 'D' || geth8 == 'B' || geth8 == 'C')
		{
		    printf("\n\n\tWrong!!! 110\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        else{
            counthard = 8;
            goto Hard;
            break;
        }
        case 9:
        printf("\n\n\t\t+--------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+--------------------+\n");
		printf("\n\n\t9.Which of the following is not classified as a battleship?");
		printf("\n\n\t\tA. Fusō\t\tB. Bismarck\n\n\t\tC. Bayern\t\tD. Aoba");

        
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char geth9 = toupper(getch());
		if (geth9=='D')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 2000;
            if (streak%2 ==  0){
                goto Bonus;
            }
            else if (score >= 20){
                goto EndGame;
            }
		    break;
        }
        else if (geth9=='P'){
            getch();
            goto ShopHard;
            break;
        }
		else if (geth9 == 'A' || geth9 == 'B' || geth9 == 'C')
		{
		    printf("\n\n\tWrong!!! Aoba\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        else{
            counthard = 9;
            goto Hard;
            break;
        }
        case 10:
        printf("\n\n\t\t+--------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+--------------------+\n");
		printf("\n\n\t10.Which of the following is a wagashi (Japanese sweets) \n\t   that does not correspond to the history of the Japanese city?");
		printf("\n\n\t\tA. Hanabira Mochi, Kyoto\t\tB. Niwaka Senpei, Fukuoka\n\n\t\tC. Mizushingen Mochi, Yamanashi\t\tD. Unagi Pie, Tokyo");

        
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char geth10 = toupper(getch());
		if (geth10=='D')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 2000;
            if (streak%2 ==  0){
                goto Bonus;
            }
            else if (score >= 20){
                goto EndGame;
            }
		    break;
        }
        else if (geth10=='P'){
            getch();
            goto ShopHard;
            break;
        }
		else if (geth10 == 'A' || geth10 == 'B' || geth10 == 'C')
		{
		    printf("\n\n\tWrong!!! Unagi Pie, Tokyo\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
            }

		    break;
		}
        else{
            counthard = 10;
            goto Hard;
            break;
        }
        
        }
    }

    EndGame:
    system("cls");
    printf("\n\n\t\tYou current money = %d\n",money);
    printf("\n\t\tYou money spend to shop = %d\n",moneyshop);
    
    if(toupper(getch())=='Y'){
        goto mainhome;
    }
    else if (toupper(getch())=='N'){
        exit(1);
    }
    else{
        goto EndGame;
    }

    Bonus:
    system("cls");
    printf("\t\tThe God Blessing You!\n");
    printf("\n\tYou HP +1");
    printf("\n\n\t\t[Y] to continous your quiz!");
    if (toupper(getch())=='Y'){
        ownhp++;
        hp++;
        goto Easy;
    }
    else{
        goto Bonus;
    }

    ShopEasy:
    system("cls");
    printf("\n\n\t\t\tWelcome to Shop!\t\t|  money = %d  |", money);
    printf("\n\n\t\tA.Pay money 1000 to heart +1");
    printf("\n\t\tB.Pay money 2000 to skip your quiz.");
    printf("\n\t\tC.Pay money 3000 to heart +1 and skip your quiz.");
    printf("\n\n\t[Q] to go Quiz!\n\n");
    char choe = toupper(getch());
    if (choe=='A' && money >= 1000){
        printf("\n\thp +1");
        getch();
        
        money -= 1000;
        moneyshop += 1000;
        ownhp += 1;
        goto ShopEasy;
    }
    else if (choe=='B' && money >= 2000){
        printf("\n\tskip");
        getch();
        money -= 2000;
        moneyshop += 2000;
        goto Easy;
    }
    else if (choe=='C' && money >= 3000){
        printf("\n\thp +1 and skip");
        getch();
        money -= 3000;
        moneyshop += 3000;
        ownhp += 1;
        goto Easy;
    }
    else if (choe=='Q')
    {
        printf("\tBack to Easy!");
        getch();
        counteasy--;
        goto Easy;
    }
    else{
        goto ShopEasy;
    }

    ShopNormal:
    system("cls");
    printf("\n\n\t\t\tWelcome to Shop!\t\t|  money = %d  |", money);
    printf("\n\n\t\tA.Pay money 1000 to heart +1");
    printf("\n\t\tB.Pay money 2000 to skip your quiz.");
    printf("\n\t\tC.Pay money 3000 to heart +1 and skip your quiz.");
    printf("\n\n\t[Q] to go Quiz!\n\n");
    char chon = toupper(getch());
    if (chon=='A' && money >= 1000){
        printf("\n\thp +1");
        getch();
        
        money -= 1000;
        moneyshop += 1000;
        ownhp += 1;
        goto ShopNormal;
    }
    else if (chon=='B' && money >= 2000){
        printf("\n\tskip");
        getch();
        money -= 2000;
        moneyshop += 2000;
        goto Normal;
    }
    else if (chon=='C' && money >= 3000){
        printf("\n\thp +1 and skip");
        getch();
        money -= 3000;
        moneyshop += 3000;
        ownhp += 1;
        goto Normal;
    }
    else if (chon=='Q')
    {
        printf("\tBack to Normal!");
        getch();
        countnormal--;
        goto Normal;
    }
    else{
        goto ShopNormal;
    }

    ShopHard:
    system("cls");
    printf("\n\n\t\t\tWelcome to Shop!\t\t|  money = %d  |", money);
    printf("\n\n\t\tA.Pay money 1000 to heart +1");
    printf("\n\t\tB.Pay money 2000 to skip your quiz.");
    printf("\n\t\tC.Pay money 3000 to heart +1 and skip your quiz.");
    printf("\n\n\t[Q] to go Quiz!\n\n");
    char choh = toupper(getch());
    if (choh=='A' && money >= 1000){
        printf("\n\thp +1");
        getch();
        
        money -= 1000;
        moneyshop += 1000;
        ownhp += 1;
        goto ShopHard;
    }
    else if (choh=='B' && money >= 2000){
        printf("\n\tskip");
        getch();
        money -= 2000;
        moneyshop += 2000;
        goto Hard;
    }
    else if (choh=='C' && money >= 3000){
        printf("\n\thp +1 and skip");
        getch();
        money -= 3000;
        moneyshop += 3000;
        ownhp += 1;
        goto Hard;
    }
    else if (choh=='Q')
    {
        printf("\tBack to Hard!");
        getch();
        counthard--;
        goto Hard;
    }
    else{
        goto ShopHard;
    }
}