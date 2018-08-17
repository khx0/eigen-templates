# CPP MAKEFILE FOR OpenMP
# author: Nikolas schnellbaecher 							   
# contact: khx0@posteo.net
# date: 2018-08-17										   
# makefile shortcuts:
# $<  ==  first prerequisite
# $@  ==  name of corresponding target
# $^  ==  names of all prerequisites (space separated)

BUILD_PATH=./tmp

#choose platform dependent compiler
UNAME = $(shell uname -s)
ifeq ($(UNAME),Linux)
	CXX = /custom/path/to/my/gcc//bin/g++\
	INC=-I/path/to/my/headers/include/
	RELEASEFLAGS = -O3 -march=native -DEIGEN_NO_DEBUG
endif
ifeq ($(UNAME),Darwin)
	CXX = g++-4.9
	#include paths on OSX machine
	EIGEN_DIR = /usr/local/include/eigen3
	INC_DIRS = $(EIGEN_DIR)
	INC = $(INC_DIRS:%=-I%)
	RELEASEFLAGS = -O3 -m64 -DEIGEN_NO_DEBUG
endif

CXXFLAGS = -Wall -std=c++11 -fopenmp

DEBUGFLAGS = -g -pedantic

LDFLAGS = -lm -lgomp

TGT = main

# CSRC=$(wildcard *.cpp)

# OBJSLIST=$(CSRC:.cpp=.o)
OBJSLIST = \
	main.o

#all object files are built in the BUILD_PATH
OBJS = $(addprefix $(BUILD_PATH)/, $(OBJSLIST))

all: $(TGT)

$(TGT): $(OBJS)
	$(CXX) $(CXXFLAGS) $(RELEASEFLAGS) $(LDFLAGS) $(INC) -o $@ $^

# pattern rule for object files with headers
$(BUILD_PATH)/%.o : %.cpp %.h
	$(CXX) $(CXXFLAGS) $(RELEASEFLAGS) $(LDFLAGS) $(INC) -c -o $@ $<

# pattern rule for object files
$(BUILD_PATH)/%.o : %.cpp
	$(CXX) $(CXXFLAGS) $(RELEASEFLAGS) $(LDFLAGS) $(INC) -c -o $@ $<

.PHONY : clean

clean: 
	rm -f $(OBJS)
	rm -f $(TGT)

