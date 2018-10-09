CXX=g++
src = $(wildcard *.cpp)
obj = $(src:.c=.o)

%.o: %.c
	$(CXX) -o $@ $^
