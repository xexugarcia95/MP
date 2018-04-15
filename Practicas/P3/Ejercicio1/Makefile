#Nombre:		Makefile
#Autor:			Jesús Manuel García Palma
#Descripcion:	Practica 2 Ejercicio1


BIN = bin
INC = include
SRC = src
OBJ = obj
LIB = lib
DOC = doc

all: $(BIN)/ejercicio1

$(BIN)/ejercicio1: $(OBJ)/ejercicio1.o $(LIB)/libformas.a
	g++ -o $(BIN)/ejercicio1 $(OBJ)/ejercicio1.o -L$(LIB) -lformas
	@echo Construyendo ejecutable en $(BIN)

$(OBJ)/ejercicio1.o: $(SRC)/ejercicio1.cpp $(INC)/utilidades.h
	g++ -c -I$(INC) -o $(OBJ)/ejercicio1.o $(SRC)/ejercicio1.cpp

$(OBJ)/utilidades.o: $(SRC)/utilidades.cpp $(INC)/utilidades.h
	g++ -c -I$(INC) -o $(OBJ)/utilidades.o $(SRC)/utilidades.cpp

$(LIB)/libformas.a: $(OBJ)/utilidades.o
	@echo Construyendo libreria
	ar rvs $(LIB)/libformas.a $(OBJ)/utilidades.o


#_______LIMPIEZA________

clean:
	@echo Limpieza de los archivos objeto y biblioteca...
	rm $(OBJ)/*.o
	rm $(LIB)/*.a

mrproper: clean
	rm $(BIN)/ejercicio1

#_______DOCUMENTACION____

documentacion:
	doxygen $(DOC)/doxys/Doxyfile
