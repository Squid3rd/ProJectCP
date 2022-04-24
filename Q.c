#include <stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

void gamerule(){

}

int main(){
    int money = 0;
    int streak = 0;
    int i;
    int counteasy = 0, countnormal = 0, counthard = 0;
    int moneynormal = 0, moneyhard = 0;
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
    else if (toupper(getch())=='Q'){
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

    Retry1:
    system("cls");
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


    Retry2:
    system("cls");
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
    
    if (toupper(getch())=='Y')
        {
            goto Normal;
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
    
    int score = 0;
    int hp = 4;
    for (i=counteasy; i<=16; i++)
    {
        system("cls");
        int question = counteasy;
        counteasy++;
        printf("\n\n\t\t\t\t\tIn the stage of EASY");
        

    switch(question)
    {
        
        case 1:
        printf("\n\n\t\t+-------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+-------------------------+\t\t+--------------------+\n");
		printf("\n\n\t1.If Thailand is divided into 6 regions Which region has the most provinces?");
		printf("\n\n\t\tA.Central\t\tB.Sourthern\n\n\t\tC.Northern\t\tD.Northeast");

       
        printf("\n\n\n\t\t|   Money : %d   |\n", money);
       

		if (toupper(getch())=='D')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1000;
            if (streak ==  2){
                goto Bonus;
            }
            else if (score >= 8){
                goto Normal;
            }
		    break;
        }
		else
		{
		    printf("\n\n\tWrong!!! Northeast\n");
            streak = 0;
            hp--;
            if(hp == 0){
            goto Retry;
    }        
		    break;
            
		}
        case 2:
        printf("\n\n\t\t+-------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+-------------------------+\t\t+--------------------+\n");
		printf("\n\n\t2.Phu Kradueng is in which province?");
		printf("\n\n\t\tA.Loei\t\t\tB.Khon Kaen\n\n\t\tC.Phitsanulok\t\tD.Phetchabun");

    
        printf("\n\n\n\t\t|   Money : %d   |\n", money);

		if (toupper(getch())=='A')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1000;
            if (streak ==  2){
                goto Bonus;
            }
            else if (score >= 8){
                goto Normal;
            }
		    break;
        }
		else
		{
		    printf("\n\n\tWrong!!! Loei\n");
            
            hp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        case 3:
        printf("\n\n\t\t+-------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+-------------------------+\t\t+--------------------+\n");
		printf("\n\n\t3.What is the northernmost province of Thailand?");
		printf("\n\n\t\tA.Chiang Mai\t\tB.Rai Chiang\n\n\t\tC.Tak\t\t\tD.Kamphaeng Phet");

        
        printf("\n\n\n\t\t|   Money : %d   |\n", money);
        
		if (toupper(getch())=='B')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1000;
            if (streak ==  2){
                goto Bonus;
            }
            else if (score >= 8){
                goto Normal;
            }
		    break;
        }
		else
		{
		    printf("\n\n\tWrong!!! Rai Chiang\n");
            
            hp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        case 4:
        printf("\n\n\t\t+-------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+-------------------------+\t\t+--------------------+\n");
		printf("\n\n\t4.Which province is next to the sea?");
		printf("\n\n\t\tA.Prachin Buri\t\tB.Nakhon Nayok\n\n\t\tC.Nakhon Pathom\t\tD.Chonburi");

        
        printf("\n\n\n\t\t|   Money : %d   |\n", money);
        
		if (toupper(getch())=='D')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1000;
            if (streak ==  2){
                goto Bonus;
            }
            else if (score >= 8){
                goto Normal;
            }
		    break;
        }
		else
		{
		    printf("\n\n\tWrong!!! Chonburi\n");
            
            hp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        case 5:
        printf("\n\n\t\t+-------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+-------------------------+\t\t+--------------------+\n");
		printf("\n\n\t5.Which province is not close to the sea?");
		printf("\n\n\t\tA.Chonburi\t\tB.Rayong\n\n\t\tC.Suphan Buri\t\tD.Prachuap Khiri Khan");

        
        printf("\n\n\n\t\t|   Money : %d   |\n", money);
        
		if (toupper(getch())=='C')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1000;
            if (streak ==  2){
                goto Bonus;
            }
            else if (score >= 8){
                goto Normal;
            }
		    break;
        }
		else
		{
		    printf("\n\n\tWrong!!! Suphan Buri\n");
            
            hp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        case 6:
        printf("\n\n\t\t+-------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+-------------------------+\t\t+--------------------+\n");
		printf("\n\n\t6.What is the northernmost province of Thailand?");
		printf("\n\n\t\tA.Chiang Mai\t\tB.Chiang Rai\n\n\t\tC.Mae Hong Son\t\tD.Narathiwat");

        
        printf("\n\n\n\t\t|   Money : %d   |\n", money);
        
		if (toupper(getch())=='B')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1000;
            if (streak ==  2){
                goto Bonus;
            }
            else if (score >= 8){
                goto Normal;
            }
		    break;
        }
		else
		{
		    printf("\n\n\tWrong!!! Northeast\n");
            
            hp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        case 7:
        printf("\n\n\t\t+-------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+-------------------------+\t\t+--------------------+\n");
		printf("\n\n\t7.How many Provinces are there in the South?");
		printf("\n\n\t\tA.9\t\tB.10\n\n\t\tC.11\t\tD.12");
        printf("\n\n\n\t\t|   Money : %d   |\n", money);
        
		if (toupper(getch())=='A')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1000;
            if (streak ==  2){
                goto Bonus;
            }
            else if (score >= 8){
                goto Normal;
            }
		    break;
        }
		else
		{
		    printf("\n\n\tWrong!!! Northeast\n");
            
            hp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        case 8:
        printf("\n\n\t\t+-------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+-------------------------+\t\t+--------------------+\n");
		printf("\n\n\t8.What is the most populous province in Thailand?");
		printf("\n\n\t\tA.Chiang Mai\t\tB.Chiang Rai\n\n\t\tC.Bangkok\t\tD.Nakhon Pathom");

        
        printf("\n\n\n\t\t|   Money : %d   |\n", money);
        
		if (toupper(getch())=='C')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1000;
            if (streak ==  2){
                goto Bonus;
            }
            else if (score >= 8){
                goto Normal;
            }
		    break;
        }
		else
		{
		    printf("\n\n\tWrong!!! Northeast\n");
            
            hp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        case 9:
        printf("\n\n\t\t+-------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+-------------------------+\t\t+--------------------+\n");
		printf("\n\n\t9.Which region in Thailand has the most provinces?");
		printf("\n\n\t\tA.Central\t\tB.Sourthern\n\n\t\tC.Northern\t\tD.Northeast");

        
        printf("\n\n\n\t\t|   Money : %d   |\n", money);
        
		if (toupper(getch())=='A')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1000;
            if (streak ==  2){
                goto Bonus;
            }
            else if (score >= 8){
                goto Normal;
            }
		    break;
        }
		else
		{
		    printf("\n\n\tWrong!!! Northeast\n");
            
            hp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        case 10:
        printf("\n\n\t\t+-------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+-------------------------+\t\t+--------------------+\n");
		printf("\n\n\t10.Where is the capital city of Thailand?");
		printf("\n\n\t\tA.Chiang Rai\t\tB.Chiang Mai\n\n\t\tC.Bangkok\t\tD.Nakhon Pathom");

        
        printf("\n\n\n\t\t|   Money : %d   |\n", money);
        
		if (toupper(getch())=='C')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1000;
            if (streak ==  2){
                goto Bonus;
            }
            else if (score >= 8){
                goto Normal;
            }
		    break;
        }
		else
		{
		    printf("\n\n\tWrong!!! Northeast\n");
            
            hp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        case 11:
        printf("\n\n\t\t+-------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+-------------------------+\t\t+--------------------+\n");
		printf("\n\n\t11.Which one is the province in the North Region?");
		printf("\n\n\t\tA.Nakhon Sawan\t\tB.Trat\n\n\t\tC.Roi Et\t\tD.Phayao");

        
        printf("\n\n\n\t\t|   Money : %d   |\n", money);
        
		if (toupper(getch())=='D')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1000;
            if (streak ==  2){
                goto Bonus;
            }
            else if (score >= 8){
                goto Normal;
            }
		    break;
        }
		else
		{
		    printf("\n\n\tWrong!!! Phayao\n");
            
            hp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        case 12:
        printf("\n\n\t\t+-------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+-------------------------+\t\t+--------------------+\n");
		printf("\n\n\t12.How many Provinces are there in the North?");
		printf("\n\n\t\tA.17\t\tB.8\n\n\t\tC.14\t\tD.20");

        
        printf("\n\n\n\t\t|   Money : %d   |\n", money);
        
		if (toupper(getch())=='A')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1000;
            if (streak ==  2){
                goto Bonus;
            }
            else if (score >= 8){
                goto Normal;
            }
		    break;
        }
		else
		{
		    printf("\n\n\tWrong!!! 17\n");
            
            hp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        case 13:
        printf("\n\n\t\t+-------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+-------------------------+\t\t+--------------------+\n");
		printf("\n\n\t13.What color does not appear in the falg of Thailand?");
		printf("\n\n\t\tA.Red\t\tB.Blue\n\n\t\tC.White\t\tD.Green");

        
        printf("\n\n\n\t\t|   Money : %d   |\n", money);
        
		if (toupper(getch())=='D')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1000;
            if (streak ==  2){
                goto Bonus;
            }
            else if (score >= 8){
                goto Normal;
            }
		    break;
        }
		else
		{
		    printf("\n\n\tWrong!!! Green\n");
            
            hp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        case 14:
        printf("\n\n\t\t+-------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+-------------------------+\t\t+--------------------+\n");
		printf("\n\n\t14.What region is Buriram Province in Thailand?");
		printf("\n\n\t\tA.South\t\t\tB.Wastern region\n\n\t\tC.Eastern region\tD.Northeast");

        
        printf("\n\n\n\t\t|   Money : %d   |\n", money);
        
		if (toupper(getch())=='D')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1000;
            if (streak ==  2){
                goto Bonus;
            }
            else if (score >= 8){
                goto Normal;
            }
		    break;
        }
		else
		{
		    printf("\n\n\tWrong!!! Northeast\n");
            
            hp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        case 15:
        printf("\n\n\t\t+-------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+-------------------------+\t\t+--------------------+\n");
		printf("\n\n\t15.What region is Chonburi Province in Thailand?");
		printf("\n\n\t\tA. North\t\tB. Wastern region\n\n\t\tC. Eastern region\tD. South");

        
        printf("\n\n\n\t\t|   Money : %d   |\n", money);
        
		if (toupper(getch())=='C')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1000;
            if (streak ==  2){
                goto Bonus;
            }
            else if (score >= 8){
                goto Normal;
            }
		    break;
        }
		else
		{
		    printf("\n\n\tWrong!!! Eastern region\n");
            
            hp--;
            streak = 0;
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
    
    hp = 4;

    for (int j = 0;j<11;j++)
    {
        system("cls");
        int question1 = j;
        switch(question1)
        {
            case 1:
        printf("\n\n\t\t+-------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+-------------------------+\t\t+--------------------+\n");
		printf("\n\n\t1.How many provinces does Thailand currently have?");
		printf("\n\n\t\tA. 76\t\tB. 77 region\n\n\t\tC. 78\t\tD. 79");

        
        printf("\n\n\n\t\t|   Money : %d   |\n", money);
        
		if (toupper(getch())=='A')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1500;
            if (streak ==  2){
                goto Bonus;
            }
            else if (score >= 8){
                goto Hard;
            }
		    break;
        }
		else
		{
		    printf("\n\n\tWrong!!! 76\n");
            
            hp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
            case 2:
        printf("\n\n\t\t+-------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+-------------------------+\t\t+--------------------+\n");
		printf("\n\n\t2.What is the latest province of Thailand?");
		printf("\n\n\t\tA. Bangkok\t\tB. Kalasin\n\n\t\tC. Bueng Kan\t\tD. Nong Bua Lamphu");

        
        printf("\n\n\n\t\t|   Money : %d   |\n", money);
        
		if (toupper(getch())=='C')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1500;
            if (streak ==  2){
                goto Bonus;
            }
            else if (score >= 8){
                goto Hard;
            }
		    break;
        }
		else
		{
		    printf("\n\n\tWrong!!! Bueng Kan\n");
            
            hp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        case 3:
        printf("\n\n\t\t+-------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+-------------------------+\t\t+--------------------+\n");
		printf("\n\n\t3.What is the most populated continent in the world?");
		printf("\n\n\t\tA. Europe\t\tB. North America\n\n\t\tC. South America\tD. Asia");

        
        printf("\n\n\n\t\t|   Money : %d   |\n", money);
        
		if (toupper(getch())=='D')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1500;
            if (streak ==  2){
                goto Bonus;
            }
            else if (score >= 8){
                goto Hard;
            }
		    break;
        }
		else
		{
		    printf("\n\n\tWrong!!! Asia\n");
            
            hp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        case 4:
        printf("\n\n\t\t+-------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+-------------------------+\t\t+--------------------+\n");
		printf("\n\n\t4.What is the highest peak in the world?");
		printf("\n\n\t\tA. Godwin Austen\tB. Everest\n\n\t\tC. Lhotse\t\tD. Makalu");

        
        printf("\n\n\n\t\t|   Money : %d   |\n", money);
        
		if (toupper(getch())=='B')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1500;
            if (streak ==  2){
                goto Bonus;
            }
            else if (score >= 8){
                goto Hard;
            }
		    break;
        }
		else
		{
		    printf("\n\n\tWrong!!! Everest\n");
            
            hp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        case 5:
        printf("\n\n\t\t+-------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+-------------------------+\t\t+--------------------+\n");
		printf("\n\n\t5. What is the longest river in the world?");
		printf("\n\n\t\tA. Nile River\t\t\tB. Congo River\n\n\t\tC. Chao Phraya River\t\tD. Amazon River");

        
        printf("\n\n\n\t\t|   Money : %d   |\n", money);
        
		if (toupper(getch())=='A')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1500;
            if (streak ==  2){
                goto Bonus;
            }
            else if (score >= 8){
                goto Hard;
            }
		    break;
        }
		else
		{
		    printf("\n\n\tWrong!!! Nile River\n");
            
            hp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        case 6:
        printf("\n\n\t\t+-------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+-------------------------+\t\t+--------------------+\n");
		printf("\n\n\t6.What is ingredients should not be in minced pork basil?");
		printf("\n\n\t\tA. Pork \t\tB. Chilli\n\n\t\tC. tomatoes\t\tD. Basil");

        
        printf("\n\n\n\t\t|   Money : %d   |\n", money);
        
		if (toupper(getch())=='C')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1500;
            if (streak ==  2){
                goto Bonus;
            }
            else if (score >= 8){
                goto Hard;
            }
		    break;
        }
		else
		{
		    printf("\n\n\tWrong!!! tomatoes\n");
            
            hp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        case 7:
        printf("\n\n\t\t+-------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+-------------------------+\t\t+--------------------+\n");
		printf("\n\n\t7.What is ingreddients should be in chicken green curry?");
		printf("\n\n\t\tA. tomatoes\t\tB. Shimp\n\n\t\tC. Pork\t\t\tD. Thai eggplant");

        
        printf("\n\n\n\t\t|   Money : %d   |\n", money);
        
		if (toupper(getch())=='D')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1500;
            if (streak ==  2){
                goto Bonus;
            }
            else if (score >= 8){
                goto Hard;
            }
		    break;
        }
		else
		{
		    printf("\n\n\tWrong!!! Thai eggplant\n");
            
            hp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        case 8:
        printf("\n\n\t\t+-------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+-------------------------+\t\t+--------------------+\n");
		printf("\n\n\t8.Which of the following countries is not in ASEAN?");
		printf("\n\n\t\tA. Japan\t\tB. Thailand\n\n\t\tC. Indonesia\t\tD. Singapore");

        
        printf("\n\n\n\t\t|   Money : %d   |\n", money);
        
		if (toupper(getch())=='A')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1500;
            if (streak ==  2){
                goto Bonus;
            }
            else if (score >= 8){
                goto Hard;
            }
		    break;
        }
		else
		{
		    printf("\n\n\tWrong!!! Japan\n");
            
            hp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        case 9:
        printf("\n\n\t\t+-------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+-------------------------+\t\t+--------------------+\n");
		printf("\n\n\t9.Which of the following is not classified as a city in Japan?");
		printf("\n\n\t\tA. Fukuoka\t\tB. Kansai\n\n\t\tC. Nikko region\t\tD. Sapporo");

        
        printf("\n\n\n\t\t|   Money : %d   |\n", money);
        
		if (toupper(getch())=='B')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1500;
            if (streak ==  2){
                goto Bonus;
            }
            else if (score >= 8){
                goto Hard;
            }
		    break;
        }
		else
		{
		    printf("\n\n\tWrong!!! Kansai\n");
            
            hp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        case 10:
        printf("\n\n\t\t+-------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+-------------------------+\t\t+--------------------+\n");
		printf("\n\n\t10.Which of the following has a capital city that does not match the country?");
		printf("\n\n\t\tA. Russia-Moscow\t\tB. Germany-Berlin\n\n\t\tC. Japan-Kyoto\t\t\tD. France-Paris");

        
        printf("\n\n\n\t\t|   Money : %d   |\n", money);
        
		if (toupper(getch())=='C')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 1500;
            if (streak ==  2){
                goto Bonus;
            }
            else if (score >= 8){
                goto Hard;
            }
		    break;
        }
		else
		{
		    printf("\n\n\tWrong!!! Japan-Kyoto\n");
            
            hp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        
        }
        
    }
    Hard:
    system("cls");
    printf("Welcometo  Hard!");
    hp=4;
    for (int k=0;k<11;k++)
    {
        system("cls");
        int question3 = k;
        switch(question3)
        {
            case 1:
        printf("\n\n\t\t+-------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+-------------------------+\t\t+--------------------+\n");
		printf("\n\n\t1.Which continent has 90% of the world's ice?");
		printf("\n\n\t\tA. Antarctica\t\tB. Australia\n\n\t\tC. Africa\t\tD. Europe");

        
        printf("\n\n\n\t\t|   Money : %d   |\n", money);
        
		if (toupper(getch())=='A')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 2000;
            if (streak ==  2){
                goto Bonus;
            }
            else if (score >= 8){
                goto EndGame;
            }
		    break;
        }
		else
		{
		    printf("\n\n\tWrong!!! Antarctica\n");
            
            hp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
            case 2:
        printf("\n\n\t\t+-------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+-------------------------+\t\t+--------------------+\n");
		printf("\n\n\t2.Which continent has the most Christianity in the world?");
		printf("\n\n\t\tA. Europe\t\tB. Africa\n\n\t\tC. Australia\t\tD. Asia");

        
        printf("\n\n\n\t\t|   Money : %d   |\n", money);
        
		if (toupper(getch())=='A')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 2000;
            if (streak ==  2){
                goto Bonus;
            }
            else if (score >= 8){
                goto EndGame;
            }
		    break;
        }
		else
		{
		    printf("\n\n\tWrong!!! Europe\n");
            
            hp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        case 3:
        printf("\n\n\t\t+-------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+-------------------------+\t\t+--------------------+\n");
		printf("\n\n\t3.Which country has the most gold in the world?");
		printf("\n\n\t\tA. Thailand\t\tB. Russia\n\n\t\tC. U.S.A\t\tD. England");

        
        printf("\n\n\n\t\t|   Money : %d   |\n", money);
        
		if (toupper(getch())=='C')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 2000;
            if (streak ==  2){
                goto Bonus;
            }
            else if (score >= 8){
                goto EndGame;
            }
		    break;
        }
		else
		{
		    printf("\n\n\tWrong!!! U.S.A\n");
            
            hp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        case 4:
        printf("\n\n\t\t+-------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+-------------------------+\t\t+--------------------+\n");
		printf("\n\n\t4.What is the tallest skyscraper in the world?");
		printf("\n\n\t\tA. Burj Khalifa\t\t\tB. Shanghai tower\n\n\t\tC. One World Trade Center\tD. Taipei 101");

        
        printf("\n\n\n\t\t|   Money : %d   |\n", money);
        
		if (toupper(getch())=='A')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 2000;
            if (streak ==  2){
                goto Bonus;
            }
            else if (score >= 8){
                goto EndGame;
            }
		    break;
        }
		else
		{
		    printf("\n\n\tWrong!!! Burj Khalifa\n");
            
            hp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        case 5:
        printf("\n\n\t\t+-------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+-------------------------+\t\t+--------------------+\n");
		printf("\n\n\t5. What country has the most nuclear bombs?");
		printf("\n\n\t\tA. U.S.A\t\tB. Russia\n\n\t\tC. French\t\tD. North Korea");

        
        printf("\n\n\n\t\t|   Money : %d   |\n", money);
        
		if (toupper(getch())=='A')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 2000;
            if (streak ==  2){
                goto Bonus;
            }
            else if (score >= 8){
                goto EndGame;
            }
		    break;
        }
		else
		{
		    printf("\n\n\tWrong!!! Eastern\n");
            
            hp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        case 6:
        printf("\n\n\t\t+-------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+-------------------------+\t\t+--------------------+\n");
		printf("\n\n\t6.What is ingredients should not be in Rattatouille?");
		printf("\n\n\t\tA. eggplant \t\tB. Zucchini\n\n\t\tC. Squash\t\tD. Potato");

        
        printf("\n\n\n\t\t|   Money : %d   |\n", money);
        
		if (toupper(getch())=='D')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 2000;
            if (streak ==  2){
                goto Bonus;
            }
            else if (score >= 8){
                goto EndGame;
            }
		    break;
        }
		else
		{
		    printf("\n\n\tWrong!!! Patato\n");
            
            hp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        case 7:
        printf("\n\n\t\t+-------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+-------------------------+\t\t+--------------------+\n");
		printf("\n\n\t7.Who is not the Presidential Place of the Soviet Union? ");
		printf("\n\n\t\tA. Vladimir Il'ich Lenin\tB. Leonid Brezhnev\n\n\t\tC. Adolf Hitler\t\t\tD. Joseph Stalin");

        
        printf("\n\n\n\t\t|   Money : %d   |\n", money);
        
		if (toupper(getch())=='C')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 2000;
            if (streak ==  2){
                goto Bonus;
            }
            else if (score >= 8){
                goto EndGame;
            }
		    break;
        }
		else
		{
		    printf("\n\n\tWrong!!! Adolf Hitler\n");
            
            hp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        case 8:
        printf("\n\n\t\t+-------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+-------------------------+\t\t+--------------------+\n");
		printf("\n\n\t8.How many years have passed since the Titanic shipwrecked? (Now 2022)");
		printf("\n\n\t\tA. 110\t\tB. 109\n\n\t\tC. 108\t\tD. 107");

        
        printf("\n\n\n\t\t|   Money : %d   |\n", money);
        
		if (toupper(getch())=='A')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 2000;
            if (streak ==  2){
                goto Bonus;
            }
            else if (score >= 8){
                goto EndGame;
            }
		    break;
        }
		else
		{
		    printf("\n\n\tWrong!!! 110\n");
            
            hp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        case 9:
        printf("\n\n\t\t+-------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+-------------------------+\t\t+--------------------+\n");
		printf("\n\n\t9.Which of the following is not classified as a battleship?");
		printf("\n\n\t\tA. Fusō\t\tB. Bismarck\n\n\t\tC. Bayern\t\tD. Aoba");

        
        printf("\n\n\n\t\t|   Money : %d   |\n", money);
        
		if (toupper(getch())=='D')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 2000;
            if (streak ==  2){
                goto Bonus;
            }
            else if (score >= 8){
                goto EndGame;
            }
		    break;
        }
		else
		{
		    printf("\n\n\tWrong!!! Aoba\n");
            
            hp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
    }
		    break;
		}
        case 10:
        printf("\n\n\t\t+-------------------------+\t\t+--------------------+\n");
        printf("\t\t|   Your current HP: %d    |\t\t|   Quiz streak : %d  |\n", hp, streak);
        printf("\t\t+-------------------------+\t\t+--------------------+\n");
		printf("\n\n\t10.Which of the following is a wagashi (Japanese sweets) \n\t   that does not correspond to the history of the Japanese city?");
		printf("\n\n\t\tA. Hanabira Mochi, Kyoto\t\tB. Niwaka Senpei, Fukuoka\n\n\t\tC. Mizushingen Mochi, Yamanashi\t\tD. Unagi Pie, Tokyo");

        
        printf("\n\n\n\t\t|   Money : %d   |\n", money);
        
		if (toupper(getch())=='D')
		{
		    printf("\n\n\tCorrect!!!");
		    getch();
            score++;
            streak++;
            money += 2000;
            if (streak ==  2){
                goto Bonus;
            }
            else if (score >= 8){
                goto EndGame;
            }
		    break;
        }
		else
		{
		    printf("\n\n\tWrong!!! Unagi Pie, Tokyo\n");
            
            hp--;
            streak = 0;
		    getch();
            if(hp == 0){
            goto Retry;
            }

		    break;
		}
        
        }
    }

    EndGame:
    system("cls");
    printf("GGG\n");
    
    printf("Money = %d",money);
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
    printf("sdasdasdas");
    if (toupper(getch())=='Y'){
        goto Easy;
    }
    else{
        goto Bonus;
    }
}