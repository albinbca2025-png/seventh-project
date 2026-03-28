#include<stdio.h>
#include<string.h>
int main()
{
    int choice ;
    char name[50];
    int score = 0 ;
    char answer ;
    printf("===WELCOME TO THE WORLD OF QUIZ🎓===");
   printf("\ntest your c knowledge\n");
   printf("\nEnter your name : ");
   scanf("%s",name);
   printf("1.START QUIZ\n");
 printf("2.VIEW RULES\n");
 printf("3.VIEW SCORE\n");
printf("ENTER YOUR CHOICE : ");
scanf("%d",&choice);
 switch(choice)
    {
        case 1:

        printf("\n===== QUIZ STARTED =====\n");

        // Question 1
        printf("\n1. Who invented C language?\n");
        printf("A. Dennis Ritchie\n");
        printf("B. James Gosling\n");
        printf("C. Bjarne Stroustrup\n");
        printf("D. Guido van Rossum\n");
        printf("Enter your answer: ");
        scanf(" %c", &answer);
        
        switch(answer)
        {
            case 'A':
            case 'a':
            printf("CORRECT ANSWER !! \n");
            score ++;
            break ;
        default:
        printf("WRONG!!, A is the answer\n");
        }
          printf("\n2. What does CPU stand for?\n");
        printf("A. Central Process Unit\n");
        printf("B. Central Processing Unit\n");
        printf("C. Computer Personal Unit\n");
        printf("D. Control Processing Unit\n");
        printf("Enter your answer: ");
        scanf(" %c", &answer);

        switch(answer)
        {
            case 'B':
            case 'b':
                printf("Correct!\n");
                score++;
                break;

            default:
                printf("Wrong! Correct answer is B\n");
        }

        // Question 3
        printf("\n3. Which language is mainly used for web development?\n");
        printf("A. HTML\n");
        printf("B. C\n");
        printf("C. Assembly\n");
        printf("D. COBOL\n");
        printf("Enter your answer: ");
        scanf(" %c", &answer);

        switch(answer)
        {
            case 'A':
            case 'a':
                printf("Correct!\n");
                score++;
                break;

            default:
                printf("Wrong! Correct answer is A\n");
        }

        // Question 4
        printf("\n4. What is the brain of the computer?\n");
        printf("A. RAM\n");
        printf("B. Hard Disk\n");
        printf("C. CPU\n");
        printf("D. Monitor\n");
        printf("Enter your answer: ");
        scanf(" %c", &answer);

        switch(answer)
        {
            case 'C':
            case 'c':
                printf("Correct!\n");
                score++;
                break;

            default:
                printf("Wrong! Correct answer is C\n");
        }

        // Question 5
        printf("\n5. What does RAM stand for?\n");
        printf("A. Random Access Memory\n");
        printf("B. Read Access Memory\n");
        printf("C. Run Access Memory\n");
        printf("D. Rapid Access Memory\n");
        printf("Enter your answer: ");
        scanf(" %c", &answer);

        switch(answer)
        {
            case 'A':
            case 'a':
                printf("Correct!\n");
                score++;
                break;

            default:
                printf("Wrong! Correct answer is A\n");
        }

        printf("\n===== QUIZ COMPLETED =====\n");
        printf("Player: %s\n", name);
        printf("Score: %d / 5\n", score);

        if(score == 5 )
        {
        printf("EXCELLENT !!\n");
        }
        else if(score <=3)
        {
            printf("GOOD JOB !!\n");
        }
        else
        {
            printf("BETTER LUCK NEXT TIME TRY AGAIN !!");
        }
    break ;
    case 2:
        printf("\n===== RULES =====\n");
        printf("1. There are 5 questions.\n");
        printf("2. Each correct answer gives 1 point.\n");
        printf("3. No negative marking.\n");
        printf("4. Type A, B, C, or D to answer.\n");
        break;

        case 3:
        printf("Thank you for playing!\n");
        break;

        default:
        printf("Invalid choice!\n");
    }

    return 0;
}
        
