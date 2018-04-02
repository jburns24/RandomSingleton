#include "Randomizer.h"
#include <time.h>

/* static */ Randomizer *Randomizer::m_instance = 0;

/* static */ Randomizer * Randomizer::instance()
{
  if (m_instance == 0)
    m_instance = new Randomizer();
    srand (time(NULL));
  return m_instance;
}

unsigned int Randomizer::randomBetween(unsigned int minimum, unsigned int maximum) 
{
    return (rand() % (maximum - minimum + 1) + minimum);
}
