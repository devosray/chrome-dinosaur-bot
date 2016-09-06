CXX = g++
CFLAGS = `pkg-config --cflags --libs gdk-3.0 gtk+-3.0` \
		 -Wall \
		 -g \
		 -std=c++11

SRC = ./src
OBJ = $(SRC)/ScreenContext.cpp \
	  $(SRC)/ScreenshotContext.cpp \
	  $(SRC)/main.cpp 
MAIN = main.out

default: $(OBJ)
	$(CXX) $(CFLAGS) $(OBJ) -o $(MAIN)

run: default
	./$(MAIN)

