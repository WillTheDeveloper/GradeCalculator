CC := g++
NAME := main
SOURCES := $(wildcard src/*.cpp)
OBK := $(wildcard lib/*.o)
INCLUDE_DIR := src/header/
LIB_DIR := lib/

make: run build clean

run: build
	./$(NAME)

build: build_lib build_shared_lib
	$(CC) main.cpp -I $(INCLUDE_DIR) -L $(LIB_DIR) -l GradeCalCulationLib

build_lib:
	$(CC) -c $(SOURCES) -fPIC

build_shared_lib:
	$(CC) -shared $(OBJ) -o GradeCalculationLib

clean:
	rm main -f



