#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(0));

    int randomnumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guesses_number;

    do{


        printf("guess the number: ");

    scanf("%d", 
        &guesses_number);
    if (guesses_number > randomnumber)
    {
        printf("lower number please!\n");
    }
    else if (guesses_number < randomnumber)
    {
        printf("higher number please!\n");
    }
    else
    {
        printf("congrats!!\n");
    }
    no_of_guesses++;
}
while (guesses_number != randomnumber)
    ;

printf("you gussesed the number in %d guesses\n", no_of_guesses);

return 0;

}