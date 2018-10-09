CXX=g++
CFLAGS=-O3
OBJ=Bisection Newton

all: $(OBJ)

Newton: NewtonMethod.cpp
	$(CXX) $(CFLAGS) -o $@ $^

Bisection: BisectionMethod.cpp
	$(CXX) $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJ)