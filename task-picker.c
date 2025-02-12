// Task Picker
//      Randomly selects a task for the user based on predefined time categories.
//      Based off the hit show Task Master. I made this program to
//      help combat decision fatigue and encourages productivity... YMMV.
//
// Features:
//         - Categorized tasks (5, 15, and 45-minute options)
//         - Simple user interface with numbered selections
//         - Expandable task list with file I/O (future update)
//
// GitHub: https://github.com/yourgithubusername/task-picker
// Author: Taylor Barringer
// Date:   2025-02-10
//
// Complie with:
// gcc -o task-picker task-picker.c -g

#include <stdio.h>
#include <stdlib.h>


int main()
{
    char input = 0;
    char timeChoice = 0;
    int time = 0;
    int running = 1;
    int randNum = 0;
    const char *v[8];
    v[0] = "clean something";
    v[1] = "dance to one song";
    v[2] = "stretch";
    v[3] = "do box breathing";
    v[4] = "meditate";
    v[5] = "draw something";
    v[6] = "not look at a screen";
    v[7] = "go outside";

    const char *xv[17];
    xv[0] = "clean something";
    xv[1] = "do yoga";
    xv[2] = "do movement practice";
    xv[3] = "journal";
    xv[4] = "write about a topic for fun";
    xv[5] = "watch YouTube";
    xv[6] = "read Be Ready When Luck Happens";
    xv[7] = "read Code Complete";
    xv[8] = "study Applied C and Cpp Programming";
    xv[9] = "study CompTIA A+";
    xv[10] = "study Practical Vim";
    xv[11] = "study Elementary Algebra ";
    xv[12] = "look at an iPad book";
    xv[13] = "hop into 3rd Strike training mode with Makoto";
    xv[14] = "draw something";
    xv[15] = "eat a snack";
    xv[16] = "take pictures of things you love";

    while (running){
        printf("\n\033[0;31m═════════════════════════════════════════════\033[0m\n");
        printf("\033[1;33m         🎩  WELCOME TO TASK PICKER  🎩\033[0m\n");
        printf("\033[0;31m═════════════════════════════════════════════\033[0m\n");
        printf("\n\033[1;33mAre you ready for your next task?\033[0m\n");
        printf("\033[1;31m1.\033[0;37m Yes, please!\n");
        printf("\033[1;31m2.\033[0;37m Exit\n");
        printf("\033[0;31m═════════════════════════════════\033[0m\n");

        // input validation loop
        while (1)
        {
            printf("Choice: ");
            input = getchar();
            while (getchar() != '\n');

            if (input == '1' || input == '2')
            {
                break;
            }
            printf("Re-enter: Invalid input.\n");
        }

        if (input == '1')
        {
            printf("\n\033[1;33mHow much time do you have?\033[0m\n");
            printf("\033[1;31m1.\033[0;37m  5 minutes\n");
            printf("\033[1;31m2.\033[0;37m 15 minutes\n");
            printf("\033[1;31m3.\033[0;37m 45 minutes\n");
            printf("\033[1;31m4.\033[0;37m Exit\n");
            // input validation loop
            while (1)
            {
                printf("Choice: ");
                timeChoice = getchar();
                while (getchar() != '\n');

                if (timeChoice == '1' || timeChoice == '2' || timeChoice == '3' || timeChoice == '4')
                {
                    break;
                }
                printf("Re-enter: Invalid input.\n");
            }

            switch (timeChoice)
            {
                case '1':
                    time = 5;
                    // random int between 0 and 8
                    randNum = rand() % 9;
                    printf("\n\033[1;33mYour next task is to %s for %d minutes.\033[0m\n", v[randNum], time);
                    printf("\033[1;33mYour time starts, NOW!!!\033[0m\n");
                    break;
                case '2':
                    time = 15;
                    // random int between 0 and 17
                    randNum = rand() % 18;
                    printf("\n\033[1;33mYour next task is to %s for %d minutes.\033[0m\n", xv[randNum], time);
                    printf("\033[1;33mYour time starts, NOW!!!\033[0m\n");
                    printf("15 min task\n");
                    break;
                case '3':
                    printf("45 min task\n");
                    break;
                case '4':
                    break;
            }
        }
        if (input == '2'){running = 0;}
    }
    printf("\nInput: %c\n", input);

    return 0;
}


