#Nombre:		Makefile
#Autor:			Jesús Manuel García Palma
#Descripcion:	Practica 1 Ejercicio5


BIN = bin
INC = include
SRC = src
OBJ = obj
LIB = lib
DOC = doc

all: $(BIN)/ejercicio5

$(BIN)/ejercicio5: $(OBJ)/ejercicio5.o $(LIB)/libformas.a
	g++ -o $(BIN)/ejercicio5 $(OBJ)/ejercicio5.o -L$(LIB) -lformas
	@echo Construyendo ejecutable en $(BIN)

$(OBJ)/ejercicio5.o: $(SRC)/ejercicio5.cpp $(INC)/utilidades.h
	g++ -c -I$(INC) -o $(OBJ)/ejercicio5.o $(SRC)/ejercicio5.cpp

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
	rm $(BIN)/ejercicio5

#_______DOCUMENTACION____

documentacion:
	doxygen $(DOC)/doxys/Doxyfile
