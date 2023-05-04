#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void gotoxy(int x, int y) {
    COORD pos = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
int main() {
    srand(time(NULL));
      HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    while(1){ 
        int num_stars = 500;
        
    COORD newPos = {55, 13}; // set the new cursor position to (55, 13)
    SetConsoleCursorPosition(hConsole, newPos);

            printf("WELCOME TO THE\n\t\t\t\t\t\t\t  GAMESHOW");
     
        for(int i=0; i<num_stars; i++){
            int x = rand() % 130; // generate a random number between 0 and 129
            int y = rand() % 30; // generate a random number between 0 and 29
            gotoxy(x, y); // move the cursor to the random position
            

            if(rand() % 2 == 0){ 
                printf("*"); 
                
            }else{
                printf(" ");
            }
        }
        Sleep(1); // wait for 1 milliseconds
        system("cls");
        Sleep(1);
    }

    return 0;
}
