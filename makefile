OUT_NAME = "a.out"
#SRC = $(wildcard *.cpp)
SRC = $(shell find . -name '*.cpp')
FLAGS = `wx-config --cppflags -cxxflags --libs`

all: $(SRC)
	g++ $(SRC) -g $(FLAGS)

clean: $(OUT_NAME)
	-rm a.out
