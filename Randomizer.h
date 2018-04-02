#include <stdio.h>
#include <stdlib.h>
#include <time.h>


class Randomizer
{
  public:
    static Randomizer *instance();
    unsigned int randomBetween(unsigned int minimum, unsigned int maximum);
  private:
    static Randomizer *m_instance;

    Randomizer() {};

    // disable default copy constructor and default assignment
    // done as a precaution, they should never be called
    Randomizer(const Randomizer &);
    const Randomizer &operator=(const Randomizer &);

};

