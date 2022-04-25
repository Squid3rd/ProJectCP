#include <stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>


int main(){
    
    char choose;
    mainhome:
    system("cls");
    printf("\n\n\t\t\t      ___   __ __  ____  _____       ____   ____  ___ ___    ___\
\n\t\t\t     /   \\ |  |  ||    ||     |     /    | /    ||   |   |  /  _]\
\n\t\t\t    |     ||  |  | |  | |__/  |    |   __||  o  || _   _ | /  [_\
\n\t\t\t    |  O  ||  |  | |  | |   __|    |  |  ||     ||  \\_/  ||    _]\
\n\t\t\t    |     ||  :  | |  | |  /  |    |  |_ ||  _  ||   |   ||   [_\
\n\t\t\t    |     ||     | |  | |     |    |     ||  |  ||   |   ||     |\
\n\t\t\t     \\__,_| \\__,_||____||_____|    |___,_||__|__||___|___||_____|\n\
\n\t\t\t  __    __   ___   ____   _      ___    __    __  ____  ___      ___\
\n\t\t\t |  |__|  | /   \\ |    \\ | |    |   \\  |  |__|  ||    ||   \\    /  _]\
\n\t\t\t |  |  |  ||     ||  D  )| |    |    \\ |  |  |  | |  | |    \\  /  [_\
\n\t\t\t |  |  |  ||  O  ||    / | |___ |  D  ||  |  |  | |  | |  D  ||    _]\
\n\t\t\t |  `  '  ||     ||    \\ |     ||     ||  `  '  | |  | |     ||   [_\
\n\t\t\t  \\      / |     ||  .  \\|     ||     | \\      /  |  | |     ||     |\
\n\t\t\t   \\_/\\_/   \\___/ |__|\\_||_____||_____|  \\_/\\_/  |____||_____||_____|\n");
    printf("\n\n\t\t\t\t\t-----------------------------------------\n");
    printf("\t\t\t\t\t|       Project ComputerProgramming     |\n");
    printf("\t\t\t\t\t|========================================\n");
    printf("\t\t\t\t\t|            Quiz Game Worldwide        |\n");
    printf("\t\t\t\t\t|========================================\n");
    printf("\t\t\t\t\t|\t\t\"S\" Start\t\t|\n");
    printf("\t\t\t\t\t|\t\t\"G\" Github\t\t|\n");
    printf("\t\t\t\t\t|\t\t\"Q\" Quit\t\t|\n");
    printf("\t\t\t\t\t|_______________________________________|\n");
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
        2.When entering the game, there will be 7 questions per category, 4 choices each.\n\
        3.When more than 7 correct answers do a promotion Proceed to the next level \n\
          starting with Easy Normal and ending with Hard.\n\
        4.If your HP = 0 you will be downgraded.(in case of Easy, questions will be reset.)\n");
        printf("\n\n\t\t\t\"Y\" To begin this Quiz\n");
        printf("\t\t\t\"N\" To Return to Menu\n");
        int hp=0;
        int ownhp = 7;
        int money = 3000;
        int streak = 0;
        int i;
        int counteasy = 0, countnormal = 0, counthard = 0;
        int moneyeasy = 0, moneynormal = 0, moneyhard = 0;
        int hpe = 7, hpn, hph;
        int mone = 1000, monn, monh;
        int totalm, totalh;
        char chomain = toupper(getch());
        if (chomain=='Y')
        {
            goto Story;
        }
        else if(chomain=='N')
        {
            goto mainhome;
        }
        
        else
        {
            goto Rule;
        }
    
    Story:
    system("cls");
    char yourname[100];
    printf("\n\n\t\tEnter your name : ");
    scanf("%[^\n]s", yourname);
    printf("\n\n\t\t\t\"Y\" To begin this Quiz\n");
    printf("\t\t\t\"N\" To Return to Menu\n");
    goto Story1;

    Story1:
    system("cls");
    printf("\n\n\t\tOnce upon a time, the story of Mr. %s Aspiring to be Quiz king taomen dynasty\n\
    \t\tIn the 4th Edo period So he came to answer questions at Workpoint in the FanPunThang program.\n\
    \t\tHow will his story end? Follow and play together in Quiz Game Worldwide\n", yourname);
    printf("\n\n\t\t\t\"Y\" To begin this Quiz\n");
    printf("\t\t\t\"N\" To Return to Menu\n");
    char sto1 = toupper(getch());
    if (sto1=='Y')
        {
            goto Easy;
        }
    else if(sto1=='N')
        {
            goto mainhome;
        }
    else
        {
            goto Story;
        }

    pausee1:
    system("cls");
    printf("\n\n\t\t____   ____  __ __  _____   ___\
\n\t\t|    \\ /    ||  |  |/ ___/  /  _]\
\n\t\t|  o  )  o  ||  |  (   \\_  /  [_ \
\n\t\t|   _/|     ||  |  |\\__  ||    _]\
\n\t\t|  |  |  _  ||  :  |/  \\ ||   [_ \
\n\t\t|  |  |  |  ||     |\\    ||     |\
\n\t\t|__|  |__|__| \\__,_| \\___||_____|\n");
    printf("\n\n\t[R] to Resume\n");
    printf("\n\t[M] to Menu\n");
    printf("\n\t[Q] to Quit\n");
    char pausee=toupper(getch());
    if (pausee=='R')
        {
            counteasy-=1;
            goto Easy;
        }
    else if(pausee=='M')
        {
            goto mainhome;
        }
    else if(pausee=='Q')
        {
            exit(1);
        }
    else
    {
        goto pausee1;
        
    }

    pausen1:
    system("cls");
    printf("\n\n\t\t____   ____  __ __  _____   ___\
\n\t\t|    \\ /    ||  |  |/ ___/  /  _]\
\n\t\t|  o  )  o  ||  |  (   \\_  /  [_ \
\n\t\t|   _/|     ||  |  |\\__  ||    _]\
\n\t\t|  |  |  _  ||  :  |/  \\ ||   [_ \
\n\t\t|  |  |  |  ||     |\\    ||     |\
\n\t\t|__|  |__|__| \\__,_| \\___||_____|\n");
    printf("\n\n\t[R] to Resume\n");
    printf("\n\t[M] to Menu\n");
    printf("\n\t[Q] to Quit\n");
    char pausen=toupper(getch());
    if (pausen=='R')
        {
            countnormal-=1;
            goto Normal;
        }
    else if(pausen=='M')
        {
            goto mainhome;
        }
    else if(pausen=='Q')
        {
            exit(1);
        }
    else
    {
        goto pausen1;
        
    }

    pauseh1:
    system("cls");
    printf("\n\n\t\t____   ____  __ __  _____   ___\
\n\t\t|    \\ /    ||  |  |/ ___/  /  _]\
\n\t\t|  o  )  o  ||  |  (   \\_  /  [_ \
\n\t\t|   _/|     ||  |  |\\__  ||    _]\
\n\t\t|  |  |  _  ||  :  |/  \\ ||   [_ \
\n\t\t|  |  |  |  ||     |\\    ||     |\
\n\t\t|__|  |__|__| \\__,_| \\___||_____|\n");
    printf("\n\n\t[R] to Resume\n");
    printf("\n\t[M] to Menu\n");
    printf("\n\t[Q] to Quit\n");
    char pauseh=toupper(getch());
    if (pauseh=='R')
        {
            counthard-=1;
            goto Hard;
        }
    else if(pauseh=='M')
        {
            goto mainhome;
        }
    else if(pauseh=='Q')
        {
            exit(1);
        }
    else
    {
        goto pauseh1;
        
    }

    Retry:
    system("cls");
    ownhp = 7;
    counteasy = 0;
    money = 3000;

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
    ownhp=7;
    counteasy= 0;
    money = 3000;
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
        goto Retry1;
        
    }


    Retry2:
    system("cls");
    ownhp = hpn;
    hp = hpn;
    countnormal = 0;
    money = monn;
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
        goto Retry2;
        
    }

    Easy:
    system("cls");
    
    int score = 0;
    hp += ownhp; 
    if (counteasy == 8){
        if (counthard>0){
            goto Hard;
        }
        else if (countnormal > 0)
        {
            goto Normal;
        }
        else{
            goto puzzle;
        }
    }
    for (i=counteasy; i<=8; i++)
    {
        system("cls");
        int question = counteasy;
        counteasy++;
        printf("\n\n\t\t\t\t\tIn the stage of EASY\t\t\t[R] Pause");
    switch(question)
    {
        
        case 1:
        printf("\n\n\t\t+--------------------------+\t\t+---------------------+\n");
        printf("\t\t|   Your current HP: %2d    |\t\t|   Quiz streak : %2d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+---------------------+\n");
		printf("\n\n\t1.If Thailand is divided into 6 regions Which region has the most provinces?");
		printf("\n\n\t\tA.Central\t\tB.Sourthern\n\n\t\tC.Northern\t\tD.Northeast");
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        
       char gete1= toupper(getch());

		if (gete1=='D')
		{
		    printf("\n\n\tCorrect!!!");
            getch();
            streak++;
            money += 500;
            if (streak%3 ==  0){
                goto B1;
            }
		    break;
        }
        else if (gete1=='R'){
            goto pausee1;
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
        printf("\n\n\t\t+--------------------------+\t\t+---------------------+\n");
        printf("\t\t|   Your current HP: %2d    |\t\t|   Quiz streak : %2d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+---------------------+\n");
		printf("\n\n\t2.Phu Kradueng is in which province?");
		printf("\n\n\t\tA.Loei\t\t\tB.Khon Kaen\n\n\t\tC.Phitsanulok\t\tD.Phetchabun");
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char gete2=toupper(getch());
		if (gete2=='A')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            
            streak++;
            money += 500;
            if (streak%3 ==  0){
                goto B1;
            }
		    break;
        }
        else if (gete2=='R'){
            goto pausee1;
            break;
        }
        else if (gete2=='P'){
            printf("\n\n\tGo to shop!");
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
        printf("\n\n\t\t+--------------------------+\t\t+---------------------+\n");
        printf("\t\t|   Your current HP: %2d    |\t\t|   Quiz streak : %2d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+---------------------+\n");
		printf("\n\n\t3.What is the northernmost province of Thailand?");
		printf("\n\n\t\tA.Chiang Mai\t\tB.Rai Chiang\n\n\t\tC.Tak\t\t\tD.Kamphaeng Phet");
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char gete3 = toupper(getch());
		if (gete3=='B')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            
            streak++;
            money += 500;
            if (streak%3 ==  0){
                goto B1;
            }
		    break;
        }
        else if (gete3=='R'){
            goto pausee1;
            break;
        }
        else if (gete3=='P'){
            printf("\n\n\tGo to shop!");
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
        printf("\n\n\t\t+--------------------------+\t\t+---------------------+\n");
        printf("\t\t|   Your current HP: %2d    |\t\t|   Quiz streak : %2d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+---------------------+\n");
		printf("\n\n\t4.What is the most populous province in Thailand?");
		printf("\n\n\t\tA.Chiang Mai\t\tB.Chiang Rai\n\n\t\tC.Bangkok\t\tD.Nakhon Pathom");
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char gete4 = toupper(getch());
		if (gete4=='C')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            
            streak++;
            money += 500;
            if (streak%3 ==  0){
                goto B1;
            }
		    break;
        }
        else if (gete4=='R'){
            goto pausee1;
            break;
        }
        else if (gete4=='P'){
            printf("\n\n\tGo to shop!");
            getch();
            goto ShopEasy;
            break;
        }
		else if (gete4 == 'A' || gete4 == 'B' || gete4 == 'D')
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
            counteasy = 4;
            goto Easy;
            break;
        }
        case 5:
        printf("\n\n\t\t+--------------------------+\t\t+---------------------+\n");
        printf("\t\t|   Your current HP: %2d    |\t\t|   Quiz streak : %2d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+---------------------+\n");
		printf("\n\n\t5.Which region in Thailand has the most provinces?");
		printf("\n\n\t\tA.Central\t\tB.Sourthern\n\n\t\tC.Northern\t\tD.Northeast");
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char gete5 = toupper(getch());
		if (gete5=='A')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            
            streak++;
            money += 500;
            if (streak%3 ==  0){
                goto B1;
            }
		    break;
        } 
        else if (gete5=='R'){
            goto pausee1;
            break;
        }
        else if (gete5=='P'){
            printf("\n\n\tGo to shop!");
            getch();
            goto ShopEasy;
            break;
        }
		else if (gete5 == 'D' || gete5 == 'B' || gete5 == 'C')
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
            counteasy = 5;
            goto Easy;
            break;
        }
        
        case 6:
        printf("\n\n\t\t+--------------------------+\t\t+---------------------+\n");
        printf("\t\t|   Your current HP: %2d    |\t\t|   Quiz streak : %2d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+---------------------+\n");
		printf("\n\n\t6.Which one is the province in the North Region?");
		printf("\n\n\t\tA.Nakhon Sawan\t\tB.Trat\n\n\t\tC.Roi Et\t\tD.Phayao");
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char gete6 = toupper(getch());
		if (gete6=='D')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            
            streak++;
            money += 500;
            if (streak%3 ==  0){
                goto B1;
            }
		    break;
        }
        else if (gete6=='R'){
            goto pausee1;
            break;
        }
        else if (gete6=='P'){
            printf("\n\n\tGo to shop!");
            getch();
            goto ShopEasy;
            break;
        }
		else if (gete6 == 'A' || gete6 == 'B' || gete6 == 'C')
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
            counteasy = 6;
            goto Easy;
            break;
        }
       
        case 7:
        printf("\n\n\t\t+--------------------------+\t\t+---------------------+\n");
        printf("\t\t|   Your current HP: %2d    |\t\t|   Quiz streak : %2d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+---------------------+\n");
		printf("\n\n\t7.What region is Chonburi Province in Thailand?");
		printf("\n\n\t\tA. North\t\tB. Wastern region\n\n\t\tC. Eastern region\tD. South");
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char gete7 = toupper(getch());
		if (gete7=='C')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            
            streak++;
            money += 500;
            monn = money;
            hpn = hp;
            if (streak%3 ==  0){
                counteasy = 7;
                goto Bonus;
                break;
            }
           goto puzzle;
		    break;
        }
        else if (gete7=='R'){
            goto pausee1;
            break;
        }
        else if (gete7=='P'){
            printf("\n\n\tGo to shop!");
            getch();
            goto ShopEasy;
            break;
        }
		else if (gete7 == 'A' || gete7 == 'B' || gete7 == 'D')
		{
		    printf("\n\n\tWrong!!! Eastern region\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            monn = money;
            hpn = hp;
            if(hp == 0){
            goto Retry;
    }
        goto puzzle;
		    break;
		}
        else{
            counteasy = 7;
            goto Easy;
            break;
        }
        
        
    }
    }

    Normal:
    system("cls");
    printf("Welcome to Normal!\t");

    for (i=countnormal; i<=8; i++)
    {
        system("cls");
        int question1 = countnormal;
        countnormal++;
        
        printf("\n\n\t\t\t\t\tIn the stage of Normal\t\t\t[R] Pause");
        switch(question1)
        {
        case 1:
        printf("\n\n\t\t+--------------------------+\t\t+---------------------+\n");
        printf("\t\t|   Your current HP: %2d    |\t\t|   Quiz streak : %2d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+---------------------+\n");
		printf("\n\n\t1.How many provinces does Thailand currently have?");
		printf("\n\n\t\tA. 76\t\tB. 77\n\n\t\tC. 78\t\tD. 79");
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char getn1 = toupper(getch());
		if (getn1=='A')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            
            streak++;
            money += 500;
            if (streak%3 ==  0){
                goto B2;
            }
		    break;
        }
        else if (getn1=='R'){
            goto pausen1;
            break;
        }
        else if (getn1=='P'){
            printf("\n\n\tGo to shop!");
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
            goto Retry1;
    }
		    break;
		}
        else{
            countnormal = 1;
            goto Normal;
            break;
        }
        case 2:
        printf("\n\n\t\t+--------------------------+\t\t+---------------------+\n");
        printf("\t\t|   Your current HP: %2d    |\t\t|   Quiz streak : %2d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+---------------------+\n");
		printf("\n\n\t2.What is the latest province of Thailand?");
		printf("\n\n\t\tA. Bangkok\t\tB. Kalasin\n\n\t\tC. Bueng Kan\t\tD. Nong Bua Lamphu");
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char getn2 = toupper(getch());
		if (getn2=='C')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            
            streak++;
            money += 500;
            if (streak%3 ==  0){
                goto B2;
            }
		    break;
        }
        else if (getn2=='R'){
            goto pausen1;
            break;
        }
        else if (getn2=='P'){
            printf("\n\n\tGo to shop!");
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
            goto Retry1;
    }
		    break;
		}
        else{
            countnormal = 2;
            goto Normal;
            break;
        }
       
        case 3:
        printf("\n\n\t\t+--------------------------+\t\t+---------------------+\n");
        printf("\t\t|   Your current HP: %2d    |\t\t|   Quiz streak : %2d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+---------------------+\n");
		printf("\n\n\t3.What is the highest peak in the world?");
		printf("\n\n\t\tA. Godwin Austen\tB. Everest\n\n\t\tC. Lhotse\t\tD. Makalu");
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char getn3 = toupper(getch());
		if (getn3=='B')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            
            streak++;
            money += 500;
            if (streak%3 ==  0){
                goto B2;
            }
		    break;
        }
        else if (getn3=='R'){
            goto pausen1;
            break;
        }
        else if (getn3=='P'){
            printf("\n\n\tGo to shop!");
            getch();
            goto ShopNormal;
            break;
        }
		else if (getn3 == 'D' || getn3 == 'A' || getn3 == 'C')
		{
		    printf("\n\n\tWrong!!! Everest\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry1;
    }
		    break;
		}
        else{
            countnormal = 3;
            goto Normal;
            break;
        }
        case 4:
        printf("\n\n\t\t+--------------------------+\t\t+---------------------+\n");
        printf("\t\t|   Your current HP: %2d    |\t\t|   Quiz streak : %2d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+---------------------+\n");
		printf("\n\n\t4. What is the longest river in the world?");
		printf("\n\n\t\tA. Nile River\t\t\tB. Congo River\n\n\t\tC. Chao Phraya River\t\tD. Amazon River");
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char getn4 = toupper(getch());
		if (getn4=='A')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            
            streak++;
            money += 500;
            if (streak%3 ==  0){
                goto B2;
            }
		    break;
        }
        else if (getn4=='R'){
            goto pausen1;
            break;
        }
        else if (getn4=='P'){
            printf("\n\n\tGo to shop!");
            getch();
            goto ShopNormal;
            break;
        }
		else if (getn4 == 'D' || getn4 == 'B' || getn4 == 'C')
		{
		    printf("\n\n\tWrong!!! Nile River\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry1;
    }
		    break;
		}
        else{
            countnormal = 4;
            goto Normal;
            break;
        }
        
        case 5:
        printf("\n\n\t\t+--------------------------+\t\t+---------------------+\n");
        printf("\t\t|   Your current HP: %2d    |\t\t|   Quiz streak : %2d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+---------------------+\n");
		printf("\n\n\t5.What is ingreddients should be in chicken green curry?");
		printf("\n\n\t\tA. tomatoes\t\tB. Shimp\n\n\t\tC. Pork\t\t\tD. Thai eggplant");
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char getn5 = toupper(getch());
		if (getn5=='D')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            
            streak++;
            money += 500;
            if (streak%3 ==  0){
                goto B2;
            }
		    break;
        }
        else if (getn5=='R'){
            goto pausen1;
            break;
        }
        else if (getn5=='P'){
            printf("\n\n\tGo to shop!");
            getch();
            goto ShopNormal;
            break;
        }
		else if (getn5 == 'A' || getn5 == 'B' || getn5 == 'C')
		{
		    printf("\n\n\tWrong!!! Thai eggplant\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry1;
    }
		    break;
		}
        else{
            countnormal = 5;
            goto Normal;
            break;
        }
        
        case 6:
        printf("\n\n\t\t+--------------------------+\t\t+---------------------+\n");
        printf("\t\t|   Your current HP: %2d    |\t\t|   Quiz streak : %2d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+---------------------+\n");
		printf("\n\n\t6.Which of the following is not classified as a city in Japan?");
		printf("\n\n\t\tA. Fukuoka\t\tB. Kansai\n\n\t\tC. Nikko region\t\tD. Sapporo");
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char getn6 = toupper(getch());
		if (getn6=='B')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            
            streak++;
            money += 500;
            if (streak%3 ==  0){
                goto B2;
            }
		    break;
        }
        else if (getn6=='R'){
            goto pausen1;
            break;
        }
        else if (getn6=='P'){
            printf("\n\n\tGo to shop!");
            getch();
            goto ShopNormal;
            break;
        }
		else if (getn6 == 'D' || getn6 == 'A' || getn6 == 'C')
		{
		    printf("\n\n\tWrong!!! Kansai\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry1;
    }
		    break;
		}
        else{
            countnormal = 6;
            goto Normal;
            break;
        }
        case 7:
        printf("\n\n\t\t+--------------------------+\t\t+---------------------+\n");
        printf("\t\t|   Your current HP: %2d    |\t\t|   Quiz streak : %2d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+---------------------+\n");
		printf("\n\n\t7.Which of the following has a capital city that does not match the country?");
		printf("\n\n\t\tA. Russia-Moscow\t\tB. Germany-Berlin\n\n\t\tC. Japan-Kyoto\t\t\tD. France-Paris");
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char getn7 = toupper(getch());
		if (getn7=='C')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            
            streak++;
            money += 500;
            monh = money;
            hph = hp;

            if (streak%3 ==  0){
                countnormal = 7;
                goto Bonus;
                break;
            }
            goto puzzle1;
		    break;
        }
        else if (getn7=='R'){
            goto pausen1;
            break;
        }
        else if (getn7=='P'){
            printf("\n\n\tGo to shop!");
            getch();
            goto ShopNormal;
            break;
        }
		else if (getn7 == 'D' || getn7 == 'B' || getn7 == 'A')
		{
		    printf("\n\n\tWrong!!! Japan-Kyoto\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry1;
    }
            goto puzzle1;
		    break;
		}
        else{
            countnormal = 7;
            goto Normal;
            break;
        }
        
        }
        
    }
    Hard:
    system("cls");
    printf("Welcometo  Hard!");
    hp=ownhp;
    for (i=counthard; i<=8; i++)
    {
        system("cls");
        int question3 = counthard;
        counthard++;
        printf("\n\n\t\t\t\t\tIn the stage of Hard\t\t\t[R] Pause");
        
        switch(question3)
        {
        case 1:
        printf("\n\n\t\t+--------------------------+\t\t+---------------------+\n");
        printf("\t\t|   Your current HP: %2d    |\t\t|   Quiz streak : %2d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+---------------------+\n");
		printf("\n\n\t1.Which continent has 90% of the world's ice?");
		printf("\n\n\t\tA. Antarctica\t\tB. Australia\n\n\t\tC. Africa\t\tD. Europe");
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char geth1 = toupper(getch());
		if (geth1=='A')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            
            streak++;
            money += 500;
            if (streak%3 ==  0){
                goto B3;
            }

		    break;
        }
        else if (geth1=='R'){
            goto pauseh1;
            break;
        }
        else if (geth1=='P'){
            printf("\n\n\tGo to shop!");
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
            goto Retry2;
    }
		    break;
		}
        else{
            counthard = 1;
            goto Hard;
            break;
        }
        case 2:
        printf("\n\n\t\t+--------------------------+\t\t+---------------------+\n");
        printf("\t\t|   Your current HP: %2d    |\t\t|   Quiz streak : %2d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+---------------------+\n");
		printf("\n\n\t2.Which continent has the most Christianity in the world?");
		printf("\n\n\t\tA. Europe\t\tB. Africa\n\n\t\tC. Australia\t\tD. Asia");
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char geth2 = toupper(getch());
		if (geth2=='A')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            
            streak++;
            money += 500;
            if (streak%3 ==  0){
                goto B3;
            }

		    break;
        }
        else if (geth2=='R'){
            goto pauseh1;
            break;
        }
        else if (geth2=='P'){
            printf("\n\n\tGo to shop!");
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
            goto Retry2;
    }
		    break;
		}
        else{
            counthard = 2;
            goto Hard;
            break;
        }
        case 3:
        printf("\n\n\t\t+--------------------------+\t\t+---------------------+\n");
        printf("\t\t|   Your current HP: %2d    |\t\t|   Quiz streak : %2d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+---------------------+\n");
		printf("\n\n\t3.Which country has the most gold in the world?");
		printf("\n\n\t\tA. Thailand\t\tB. Russia\n\n\t\tC. U.S.A\t\tD. England");
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char geth3 = toupper(getch());
		if (geth3=='C')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            
            streak++;
            money += 500;
            if (streak%3 ==  0){
                goto B3;
            }

		    break;
        }
        else if (geth3=='R'){
            goto pauseh1;
            break;
        }
        else if (geth3=='P'){
            printf("\n\n\tGo to shop!");
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
            goto Retry2;
    }
		    break;
		}
        else{
            counthard = 3;
            goto Hard;
            break;
        }
        case 4:
        printf("\n\n\t\t+--------------------------+\t\t+---------------------+\n");
        printf("\t\t|   Your current HP: %2d    |\t\t|   Quiz streak : %2d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+---------------------+\n");
		printf("\n\n\t4.What is the tallest skyscraper in the world?");
		printf("\n\n\t\tA. Burj Khalifa\t\t\tB. Shanghai tower\n\n\t\tC. One World Trade Center\tD. Taipei 101");
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char geth4 = toupper(getch());
		if (geth4=='A')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            
            streak++;
            money += 500;
            if (streak%3 ==  0){
                goto B3;
            }

		    break;
        }
        else if (geth4=='R'){
            goto pauseh1;
            break;
        }
        else if (geth4=='P'){
            printf("\n\n\tGo to shop!");
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
            goto Retry2;
    }
		    break;
		}
        else{
            counthard = 4;
            goto Hard;
            break;
        }

        case 5:
        printf("\n\n\t\t+--------------------------+\t\t+---------------------+\n");
        printf("\t\t|   Your current HP: %2d    |\t\t|   Quiz streak : %2d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+---------------------+\n");
		printf("\n\n\t5.Who is not the Presidential Place of the Soviet Union? ");
		printf("\n\n\t\tA. Vladimir Il'ich Lenin\tB. Leonid Brezhnev\n\n\t\tC. Dwight Eisenhower\t\tD. Joseph Stalin");
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char geth5 = toupper(getch());
		if (geth5=='C')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            
            streak++;
            money += 500;
            if (streak%3 ==  0){
                goto B3;
            }

		    break;
        }
        else if (geth5=='R'){
            goto pauseh1;
            break;
        }
        else if (geth5=='P'){
            printf("\n\n\tGo to shop!");
            getch();
            goto ShopHard;
            break;
        }
		else if (geth5 == 'D' || geth5 == 'B' || geth5 == 'A')
		{
		    printf("\n\n\tWrong!!! Dwight Eisenhower\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry2;
    }
		    break;
		}
        else{
            counthard = 5;
            goto Hard;
            break;
        }
        case 6:
        printf("\n\n\t\t+--------------------------+\t\t+---------------------+\n");
        printf("\t\t|   Your current HP: %2d    |\t\t|   Quiz streak : %2d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+---------------------+\n");
		printf("\n\n\t6.How many years have passed since the Titanic shipwrecked? (Now 2022)");
		printf("\n\n\t\tA. 110\t\tB. 109\n\n\t\tC. 108\t\tD. 107");
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char geth6 = toupper(getch());
		if (geth6=='A')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            
            streak++;
            money += 500;
            if (streak%3 ==  0){
                goto B3;
            }

		    break;
        }
        else if (geth6=='R'){
            goto pauseh1;
            break;
        }
        else if (geth6=='P'){
            printf("\n\n\tGo to shop!");
            getch();
            goto ShopHard;
            break;
        }
		else if (geth6 == 'D' || geth6 == 'B' || geth6 == 'C')
		{
		    printf("\n\n\tWrong!!! 110\n");
            
            hp--;
            ownhp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry2;
    }
		    break;
		}
        else{
            counthard = 6;
            goto Hard;
            break;
        }
        
        case 7:
        printf("\n\n\t\t+--------------------------+\t\t+---------------------+\n");
        printf("\t\t|   Your current HP: %2d    |\t\t|   Quiz streak : %2d  |\n", hp, streak);
        printf("\t\t+--------------------------+\t\t+---------------------+\n");
		printf("\n\n\t7.Which of the following is a wagashi (Japanese sweets) \n\t   that does not correspond to the history of the Japanese city?");
		printf("\n\n\t\tA. Hanabira Mochi, Kyoto\t\tB. Niwaka Senpei, Fukuoka\n\n\t\tC. Mizushingen Mochi, Yamanashi\t\tD. Unagi Pie, Tokyo");
        printf("\n\n\n\t\t|   Money : %d   |\t\t\t[P] Shop\n", money);
        char geth7 = toupper(getch());
		if (geth7=='D')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            
            streak++;
            money += 500;
            totalh = hp;
            totalm = money;
            if (streak%3 ==  0){
                counthard = 7;
                goto Bonus;
                break;
            }
            goto puzzle2;

		    break;
        }
        else if (geth7=='R'){
            goto pauseh1;
            break;
        }
        else if (geth7=='P'){
            printf("\n\n\tGo to shop!");
            getch();
            goto ShopHard;
            break;
        }
		else if (geth7 == 'A' || geth7 == 'B' || geth7 == 'C')
		{
		    printf("\n\n\tWrong!!! Unagi Pie, Tokyo\n");
            
            hp--;
            ownhp--;
            streak = 0;
            totalh = hp;
            totalm = money;
		    getch();
            if(hp == 0){
            goto Retry2;
            }
            goto puzzle2;

		    break;
		}
        else{
            counthard = 7;
            goto Hard;
            break;
        }
        
        }
    }

    B1:
    system("cls");
    printf("\t\tThe God Blessing You!\n");
    printf("\n\tYou Money +500");
    printf("\n\n\t\t[Y] to continous your quiz!");
    if (toupper(getch())=='Y'){
        money+=500;
        goto Easy;
    }
    else{
        goto Bonus;
    }

    B2:
    system("cls");
    printf("\t\tThe God Blessing You!\n");
    printf("\n\tYou Money +1000");
    printf("\n\n\t\t[Y] to continous your quiz!");
    if (toupper(getch())=='Y'){
        money+=1000;
        goto Normal;
    }
    else{
        goto Bonus;
    }

    B3:
    system("cls");
    printf("\t\tThe God Blessing You!\n");
    printf("\n\tYou Money +1500");
    printf("\n\n\t\t[Y] to continous your quiz!");
    if (toupper(getch())=='Y'){
        money+=1500;
        goto Hard;
    }
    else{
        goto Bonus;
    }

    Bonus:
    system("cls");
    printf("\t\tThe God Blessing You!\n");
    printf("\n\tYou HP +1");
    printf("\n\n\t\t[Y] to continous your quiz!");
    if (toupper(getch())=='Y'){
        ++ownhp;
        ++hp;
        if (counthard== 7){
            counthard = 8;
            goto Hard;
        }
        else if (countnormal== 7){
            countnormal++;
            goto Normal;
        }
        else if (counteasy== 7){
            counteasy++;
            goto Easy;
        }
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
        ownhp++;
        hp++;
        goto ShopEasy;
    }
    else if (choe=='B' && money >= 2000){
        printf("\n\tskip");
        getch();
        money -= 2000;
        goto Easy;
    }
    else if (choe=='C' && money >= 3000){
        printf("\n\thp +1 and skip");
        getch();
        money -= 3000;
        ownhp++;
        hp++;
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
        ownhp++;
        hp++;
        goto ShopNormal;
    }
    else if (chon=='B' && money >= 2000){
        printf("\n\tskip");
        getch();
        money -= 2000;
        goto Normal;
    }
    else if (chon=='C' && money >= 3000){
        printf("\n\thp +1 and skip");
        getch();
        money -= 3000;
        ownhp++;
        hp++;
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
        ownhp++;
        hp++;
        goto ShopHard;
    }
    else if (choh=='B' && money >= 2000){
        printf("\n\tskip");
        getch();
        money -= 2000;
        goto Hard;
    }
    else if (choh=='C' && money >= 3000){
        printf("\n\thp +1 and skip");
        getch();
        money -= 3000;
        ownhp++;
        hp++;
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

    win:
    system("cls");
    printf("\n\n\t\t __ __   ___   __ __      __    __      ____      ____       __ \n\
\t\t|  |  | /   \\ |  |  |    |  |__|  |    |    |    |    \\     |  |\n\
\t\t|  |  ||     ||  |  |    |  |  |  |     |  |     |  _  |    |  |\n\
\t\t|  ~  ||  O  ||  |  |    |  |  |  |     |  |     |  |  |    |__|\n\
\t\t|___, ||     ||  :  |    |  `  '  |     |  |     |  |  |     __ \n\
\t\t|     ||     ||     |     \\      /      |  |     |  |  |    |  |\n\
\t\t|____/  \\___/  \\__,_|      \\_/\\_/      |____|    |__|__|    |__|\n");
    printf("\n\n\t\t\tWith money = %d", totalm);
    printf("\n\t\t\tWith HP = %d", totalh);
    printf("\n\n\t\t[Y] to Menu");
    printf("\n\t\t[Q] to Exit Game");
    int chwin = toupper(getch());
    if (chwin=='Y'){
        goto mainhome;
    }
    else if (chwin=='Q'){
        exit(1);
    }
    else{
        goto win;
    }

    lose:
    system("cls");
    printf("\n\n\t\t __ __   ___   __ __      _       ___   _____   ___      __ \n\
\t\t|  |  | /   \\ |  |  |    | |     /   \\ / ___/  /  _]    |  |\n\
\t\t|  |  ||     ||  |  |    | |    |     (   \\_  /  [_     |  |\n\
\t\t|  ~  ||  O  ||  |  |    | |___ |  O  |\\__  ||    _]    |__|\n\
\t\t|___, ||     ||  :  |    |     ||     |/  \\ ||   [_      __ \n\
\t\t|     ||     ||     |    |     ||     |\\    ||     |    |  |\n\
\t\t|____/  \\___/  \\__,_|    |_____| \\___/  \\___||_____|    |__|\n");
    
    printf("\n\n\t\t[Y] to Retry");
    printf("\n\t\t[N] to Menu");
    printf("\n\t\t[Q] to Exit Game");
    int chlose = toupper(getch());
    if (chlose=='Y'){
        goto Rule;
    }
    else if (chlose=='Q'){
        exit(1);
    }
    else if (chlose=='N'){
        goto mainhome;
    }
    else{
        goto lose;
    }

    puzzle:
    system("cls");
    printf("\n\n\t\t\tKeep these keywords in mind!!!!!");
    printf("\n\n\t\t\"Love [i]s simply an electric[a]l bug in the hu[m]an neural circuit.\"\n");
    printf("\n\n\t[Y] to Normal Stage");
    printf("\n\t[N] to Menu");
    int chpz = toupper(getch());
    if (chpz=='Y'){
        goto Normal;
    }
    else if (chpz=='N'){
        goto mainhome;
    }
    else{
        goto puzzle;
    }

    puzzle1:
    system("cls");
    printf("\n\n\t\t\tKeep these keywords in mind!!!!!");
    printf("\n\n\t\t\"When it comes to people [y]ou really l[o]ve, yo[u] don't care about you[r]self.\"\n");
    printf("\n\n\t[Y] to Normal Stage");
    printf("\n\t[N] to Menu");
    int chpz1 = toupper(getch());
    if (chpz1=='Y'){
        goto Hard;
    }
    else if (chpz1=='N'){
        goto mainhome;
    }
    else{
        goto puzzle1;
    }

    puzzle2:
    system("cls");
    printf("\n\n\t\t\tKeep these keywords in mind!!!!!");
    printf("\n\n\t\t\"It's not that you can [f]all in love with someone new bec[a]use you forgot the old.\
    \n\t\tI[t]'s because you fall in love with someone new t[h]at you're able to forget about th[e] old.\
    \n\t\t Only love can heal a hea[r]t that was hurt by love.\"\n");
    printf("\n\n\t[Y] to Hard Stage");
    printf("\n\t[N] to Menu");
    int chpz2 = toupper(getch());
    if (chpz2=='Y'){
        goto puzzle3;
    }
    else if (chpz2=='N'){
        goto mainhome;
    }
    else{
        goto puzzle2;
    }

    puzzle3:
    system("cls");
    printf("\n\n\t\t\tNow input your puzzle keywords! = ");
    char c[100], check[]="iamyourfather", check1[]="IAMYOURFATHER";
    scanf("%s", c);
    if (strcmp(check, c)==0 || strcmp(check1, c)==0){
        goto win;
    }
    else{
        goto lose;
    }
}