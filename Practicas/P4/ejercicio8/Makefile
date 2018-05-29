#Nombre:		Makefile
#Autor:			Jesús Manuel García Palma
#Descripcion:	Practica 4 ejercicio 2


BIN = bin
INC = include
SRC = src
OBJ = obj
LIB = lib
DOC = doc

all: $(BIN)/ejercicio8

$(BIN)/ejercicio8: $(OBJ)/ejercicio8.o $(LIB)/libformas.a
	g++ -std=c++11 -o $(BIN)/ejercicio8 $(OBJ)/ejercicio8.o -L$(LIB) -lformas
	@echo Construyendo ejecutable en $(BIN)

$(OBJ)/ejercicio8.o: $(SRC)/ejercicio8.cpp $(INC)/Menu.h
	g++ -std=c++11 -c -I$(INC) -o $(OBJ)/ejercicio8.o $(SRC)/ejercicio8.cpp

$(OBJ)/Menu.o: $(SRC)/Menu.cpp $(INC)/Menu.h
	g++ -std=c++11 -c -I$(INC) -o $(OBJ)/Menu.o $(SRC)/Menu.cpp



$(LIB)/libformas.a: $(OBJ)/Menu.o
	@echo Construyendo libreria
	ar rvs $(LIB)/libformas.a $(OBJ)/Menu.o

#_______LIMPIEZA________

clean:
	@echo Limpieza de los archivos objeto y biblioteca...
	rm $(OBJ)/*.o
	rm $(LIB)/*.a

mrproper: clean
	rm $(BIN)/ejercicio8

#_______DOCUMENTACION____

documentacion:
	doxygen $(DOC)/doxys/Doxyfile

#___________RUN_ONLY_WINDOWS_______

run:
	$(BIN)/ejercicio8
