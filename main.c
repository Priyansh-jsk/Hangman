//I and my friend made this project in first few weeks in the "Structured Programming in C" course so the code isnt so clean XD
//Enjoy the game by pressing "Run" 
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>
#include <string.h>
void clrscr(){
    printf("\e[1;1H\e[2J");
}
int main() {
    char UserName[30];
    char yes_no[5];
    char yes[5]="yes";
    int a=1;
	printf("o-------------------------o\n|   WELCOME TO HANGMAN!!  |\no-------------------------o\n");
	sleep(4);
    clrscr();
	printf("Enter your username: ");
	scanf("%s",UserName);
	sleep(1);
	clrscr();
	printf("Hello %s!\n",UserName);
	sleep(2);
	clrscr();
	while(a!=0)
	{
	    printf("Do you know how to play Hangman?[yes/no]\n");
	    scanf("%s",yes_no);
	    clrscr();
	    if(strcmp(yes_no,yes)==0) break;
	    else{
	        printf("1- A number of (_) equivalent to the number of letters in the word appear to you\n");
	        sleep(1);
	        printf("2 You need to guess the word by entering the word's letters.\n");
	        sleep(1);
	        printf("3- if you guess the letter wrong the system will draw a piece of the man and you lose a try becareful you only have 5 tries!\n");
	        sleep(1);
	        printf("4-you lose if the man's drawing is completed which mean the man is hanged :( help the man!");
	        sleep(2);
	        printf("\n\npress 0 to exit ");
	        scanf("%d",&a);
	        if(a!=0) a=0;
	    }
	 clrscr();
	 clrscr();
	}
	printf("Welcome to the game Hangman!\n");
    sleep(2);
    clrscr();
    int quit=1;
while(quit!=0){
    printf("Please wait %s\n       O\n      \\|\n       |\\\n      / \\\n",UserName);
    sleep(1);
    clrscr();
    printf("Please wait %s\n       O\n       |/\n      /|\n      / \\\n",UserName);
    sleep(1);
    clrscr();
    printf("Please wait %s\n       O\n      \\|\n       |\\\n      / \\\n",UserName);
    sleep(1);
    clrscr();
    printf("Please wait %s\n       O\n       |/\n      /|\n      / \\\n",UserName);
    sleep(1);
    clrscr();
    printf("Please wait %s\n       O\n       |/\n      /|\n      / \\\n",UserName);
    sleep(1);
    clrscr();
    srand(time(NULL));
    int letters=1;
    char* word="thisisuselesstrust me";
    switch(rand()%20){
    case 1: word="book"; letters = 4; break;
    case 2: word="car"; letters =3; break;
    case 3: word="tree"; letters= 4; break;
    case 4: word="game"; letters=4; break;
    case 5: word="understand"; letters=10; break;
    case 6: word="family"; letters=6; break;
    case 7: word="pen"; letters=3; break;
    case 8: word="coffee"; letters=6; break;
    case 9: word="email"; letters=5; break;
    case 10: word="facebook"; letters=8; break;
    case 11: word="football"; letters=8; break;
    case 12: word="online"; letters=6; break;
    case 13: word="come"; letters=4; break;
    case 14: word="please"; letters=6; break;
    case 15: word="introduction"; letters=12; break;
    case 16: word="project"; letters=7; break;
    case 17: word="create"; letters=6; break;
    case 18: word="programming"; letters=11; break;
    case 19: word="warrior"; letters=7; break;
    case 20: word="weird"; letters=5; break;
    case 21: word="handsome"; letters=8; break;
    case 22: word="amazing"; letters=7; break;
    default: word="knife"; letters=5; break;
    }
    printf("Try guessing the word by guessing the letters: \n");
    char answer[100];
    char wanswer[100]=" ";
    strcpy(answer,"");
	for(int i=1;i<=letters;i++){
	    strcat(answer,"_ ");
	    printf("_ ");
	}
	int b=0;
	int c=0;
	int p=1;
	int finish=0;
	while(c<5)
	{   
	    printf("\nEnter a letter to guess.... ");
	    char letter;
	    scanf("%s",&letter);
	    clrscr();
	    if(strchr(word,letter)!=0)
	    {
	        for(int j=0;j<=letters-1;j++){
	            if(letter==word[j])
	            {
	                p=j*2;
	                if(answer[p]!=letter) finish++;
	                answer[p]=letter;

	            }
	        }
	        
	        printf("%s\n",answer);
	        printf("Correct Guess!\n");
	        printf("You got another try +1\n");
	        if(finish==letters) {break; b=0;}
	        if(b!=0) printf("Letters you have used  %s",wanswer);
	        if(c>0)c--;
	    }
	    else
	    {
	        wanswer[2*b]=letter;
	        strcat(wanswer," ");
	        b++;
	       clrscr(); c++;
	       if(c==1) printf("o-----------\n|          |\n|\n|\n|\n|\n|\n|\n");
	       if(c==2) printf("o-----------\n|          |\n|          O\n|\n|\n|\n|\n|\n"); 
	       if(c==3) printf("o-----------\n|          |\n|          O\n|          |\n|          |\n|\n|\n|\n");  
	       if(c==4) printf("o-----------\n|          |\n|          O\n|          |\n|          |\n|         / \\\n|\n|\n");  
	       if(c==5){ clrscr(); printf("o-----------\n|          |\n|          O <--------|you killed me %s :(|\n|         \\|/\n|          |\n|         / \\\n|\n|\n",UserName);}
	       if(c!=5){
	       printf("%d Tries left\n",4-c); 
	       printf("%s\n",answer);
	       printf("Letters you have used  %s",wanswer);
	       }
	    }
	   	
    }

    if(finish==letters) {    
        clrscr();
        printf("            O <------|You saved me!!!! Thank you %s <3|\n           \\|/\n            |\n           / \\\n",UserName);
        sleep(1);
        clrscr();
        printf("            O <------|You saved me!!!! Thank you %s <3|\n           \\|\n            |\\\n           / \\\n",UserName);
        sleep(1);
        clrscr();
        printf("            O <------|You saved me!!!! Thank you %s <3|\n            |/\n           /|\n           / \\\n",UserName);
        sleep(1);
        clrscr();
        printf("            O <------|You saved me!!!! Thank you %s <3|\n            |\n           /|\\\n           / \\\n",UserName);
        sleep(1);
        clrscr();
        printf("            O <------|You saved me!!!! Thank you %s <3|\n           \\|/\n            |\n           / \\\n",UserName);
        printf("Amazing! You won! The word was \"%s\" \n",word);
    }
	else{
	    printf("You lost :( The word was \"%s\" \n\n",word); 
	}
	printf("Press:\n 1-Play again \n 0-Quit\n");
	scanf("%d",&quit);
	clrscr();
}
printf("Thank you for playing Hangman\n");
printf("This game was made by Amr Darawsheh\n");
printf("I hope you had fun %s!!",UserName);

    return 0;
}
