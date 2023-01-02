#include <stdio.h>
int main()
{
    int score, wickets;
    printf("Enter  total scores: \n");
    scanf("%d", &score);
    printf("Enter remaining wickets : \n");
    scanf("%d", &wickets);
    // cheacking scores & wickets greater than 0
    if (score > 0 && wickets >= 0)
    { // if score greater than 300
        if (score > 300)
        {
            printf("Pakistan won by %d wickets. \n", wickets);
        }
        // if score less than 300
        else if (score < 300)
        { //  finding reamining scores
            int a = 300 - score;
            printf("Pakistan Need %d runs while %d  wickets are  in hand \n", a, wickets);
        } // if score is 300 and zero wickets in hand
        else if (score == 300 && wickets == 0)
        {
            printf("Match is drawn. \n");
        }
    }
    // if score and wickets are less than zero
    else
        printf("Score & wickets cannot be less than 0 ");
    return 0;
}