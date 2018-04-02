CXX = g++

FLAGS = -Wall -W -Werror -g

randomizer : main.cpp
	$(CXX) $(FLAGS) main.cpp Randomizer.cpp Randomizer.h -o randomizer

clean:
	rm -f *.o randomizer
