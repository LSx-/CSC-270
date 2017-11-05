CXX=g++
CXXFLAGS=-Wall
OBS=produce.o fruit.o vegetable.o smoothie.o main.o
all: smoothie

clean:
	rm -f $(OBS) smoothie

.o:
	$(CXX) $(CXXFLAGS) -c $<

smoothie: $(OBS)
	$(CXX) -o $@ $(OBS)