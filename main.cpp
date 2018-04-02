
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>
#include <time.h>
#include "Randomizer.h"

int main ()
{
    int guess1, guess2;
    
    Randomizer* randomizer = Randomizer::instance();
    
    guess1 = randomizer->randomBetween(1, 10);
    guess2 = randomizer->randomBetween(100, 200);
    printf("guess1 is %d\n", guess1);
    printf("guess2 is %d\n", guess2);
   
  
}
