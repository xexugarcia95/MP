#Nombre:		Makefile
#Autor:			Jesús Manuel García Palma
#Descripcion:	Practica 1 Ejercicio3


BIN = bin
INC = include
SRC = src
OBJ = obj
LIB = lib
DOC = doc

all: $(BIN)/ejercicio3

$(BIN)/ejercicio3: $(OBJ)/ejercicio3.o $(LIB)/libformas.a
	g++ -o $(BIN)/ejercicio3 $(OBJ)/ejercicio3.o -L$(LIB) -lformas
	@echo Construyendo ejecutable en $(BIN)

$(OBJ)/ejercicio3.o: $(SRC)/ejercicio3.cpp $(INC)/utilidades.h
	g++ -c -I$(INC) -o $(OBJ)/ejercicio3.o $(SRC)/ejercicio3.cpp

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
	rm $(BIN)/ejercicio3

#_______DOCUMENTACION____

documentacion:
	doxygen $(DOC)/doxys/Doxyfile
