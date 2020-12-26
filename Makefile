CXX= g++
CXXFLAGS= -std=c++2a
FLAGS= -Wall -g

all: do
	
do: alg.o alg.h
	$(CXX) $(CXXFLAGS) -o do alg.o
alg.o: alg.h
	$(CXX) $(CXXFLAGS) -c alg.cpp


.PHONY: clean all do
	
clean:
	rm -f *.o all do
