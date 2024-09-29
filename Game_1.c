#include <stdio.h>
#include<windows.h>

int main() {
    int answers[10]; 
    int idealism_score = 0;
    int realism_score = 0;
    int pragmatism_score = 0;
    int i;


    
    {printf("Welcome to the Philosophical Personality Checker!\n");
    Sleep(1000);}
    {printf("Please answer the following 10 questions with 1 (Yes) or 0 (No).\n");
    Sleep(1000);}


   
    printf("1. Do you believe that humans have free will? ");
    scanf("%d", &answers[0]);
    if (answers[0] == 1) realism_score++;

    printf("2. Do you think morality is subjective? ");
    scanf("%d", &answers[1]);
    if (answers[1] == 1) idealism_score++;

    printf("3. Do you believe in the existence of an objective reality? ");
    scanf("%d", &answers[2]);
    if (answers[2] == 1) realism_score++;

    printf("4. Is it important to question societal norms? ");
    scanf("%d", &answers[3]);
    if (answers[3] == 1) pragmatism_score++;

    printf("5. Do you think that happiness is the ultimate goal in life? ");
    scanf("%d", &answers[4]);
    if (answers[4] == 1) idealism_score++;

    printf("6. Do you believe knowledge is gained through experience? ");
    scanf("%d", &answers[5]);
    if (answers[5] == 1) pragmatism_score++;

    printf("7. Is the pursuit of truth more important than comfort? ");
    scanf("%d", &answers[6]);
    if (answers[6] == 1) realism_score++;

    printf("8. Do you think individuals create their own moral values? ");
    scanf("%d", &answers[7]);
    if (answers[7] == 1) idealism_score++;

    printf("9. Do you believe that actions should be judged by their consequences? ");
    scanf("%d", &answers[8]);
    if (answers[8] == 1) pragmatism_score++;

    printf("10. Is reality independent of human thoughts and perceptions? ");
    scanf("%d", &answers[9]);
    if (answers[9] == 1) realism_score++;



    printf("\nWait while we calculate your philosophical orientation...\n");

    for(i=5 ; i>0 ; i--)
    {printf("%d\n" , i);
    Sleep(1000);}


    printf("Idealism Score: %d\n", idealism_score);
    printf("Realism Score: %d\n", realism_score);
    printf("Pragmatism Score: %d\n", pragmatism_score);


   
    if (idealism_score > realism_score && idealism_score > pragmatism_score) {
        printf("You lean towards Idealism! You likely believe in subjective truths and the importance of personal perspectives.\n ");
    } else if (realism_score > idealism_score && realism_score > pragmatism_score) {
        printf("You lean towards Realism! You probably believe in an objective reality and the importance of objective truths.\n");
    } else if (pragmatism_score > idealism_score && pragmatism_score > realism_score) {
        printf("You lean towards Pragmatism! You tend to value practical outcomes and the interplay of different perspectives.\n");
    } else {
        printf("You have a balanced view, reflecting aspects of multiple philosophical orientations.\n");
    }

    return 0;
}
