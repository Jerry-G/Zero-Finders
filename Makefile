CXX=g++
CFLAGS=-O3
SCR=NewtonMethod.cpp BisectionMethod.cpp
OBJ=Newton Bisection

all: $(OBJ)

Newton: NewtonMethod.cpp
Bisection: BisectionMethod.cpp

$(OBJ):
	$(CXX) $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJ)