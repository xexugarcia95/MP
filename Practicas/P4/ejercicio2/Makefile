#Nombre:		Makefile
#Autor:			Jesús Manuel García Palma
#Descripcion:	Practica 4 ejercicio 2


BIN = bin
INC = include
SRC = src
OBJ = obj
LIB = lib
DOC = doc

all: $(BIN)/ejercicio2

$(BIN)/ejercicio2: $(OBJ)/ejercicio2.o $(LIB)/libformas.a
	g++ -std=c++11 -o $(BIN)/ejercicio2 $(OBJ)/ejercicio2.o -L$(LIB) -lformas
	@echo Construyendo ejecutable en $(BIN)

$(OBJ)/ejercicio2.o: $(SRC)/ejercicio2.cpp $(INC)/BigInt.h $(INC)/utilidades.h
	g++ -std=c++11 -c -I$(INC) -o $(OBJ)/ejercicio2.o $(SRC)/ejercicio2.cpp

$(OBJ)/utilidades.o: $(SRC)/utilidades.cpp $(INC)/utilidades.h $(INC)/BigInt.h
	g++ -std=c++11 -c -I$(INC) -o $(OBJ)/utilidades.o $(SRC)/utilidades.cpp

$(OBJ)/BigInt.o: $(SRC)/BigInt.cpp $(INC)/BigInt.h
	g++ -std=c++11 -c -I$(INC) -o $(OBJ)/BigInt.o $(SRC)/BigInt.cpp



$(LIB)/libformas.a: $(OBJ)/BigInt.o $(OBJ)/utilidades.o
	@echo Construyendo libreria
	ar rvs $(LIB)/libformas.a $(OBJ)/BigInt.o $(OBJ)/utilidades.o

#_______LIMPIEZA________

clean:
	@echo Limpieza de los archivos objeto y biblioteca...
	rm $(OBJ)/*.o
	rm $(LIB)/*.a

mrproper: clean
	rm $(BIN)/ejercicio2

#_______DOCUMENTACION____

documentacion:
	doxygen $(DOC)/doxys/Doxyfile

#___________RUN_ONLY_WINDOWS_______

run:
	$(BIN)/ejercicio2
