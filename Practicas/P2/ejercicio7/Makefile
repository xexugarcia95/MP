#Nombre:		Makefile
#Autor:			Jesús Manuel García Palma
#Descripcion:	Practica 1 Ejercicio7


BIN = bin
INC = include
SRC = src
OBJ = obj
LIB = lib
DOC = doc

all: $(BIN)/ejercicio7

$(BIN)/ejercicio7: $(OBJ)/ejercicio7.o $(LIB)/libformas.a
	g++ -o $(BIN)/ejercicio7 $(OBJ)/ejercicio7.o -L$(LIB) -lformas
	@echo Construyendo ejecutable en $(BIN)

$(OBJ)/ejercicio7.o: $(SRC)/ejercicio7.cpp $(INC)/utilidades.h
	g++ -c -I$(INC) -o $(OBJ)/ejercicio7.o $(SRC)/ejercicio7.cpp

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
	rm $(BIN)/ejercicio7

#_______DOCUMENTACION____

documentacion:
	doxygen $(DOC)/doxys/Doxyfile
