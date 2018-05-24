#Nombre:		Makefile
#Autor:			Jesús Manuel García Palma
#Descripcion:	Practica 4 ejercicio 3


BIN = bin
INC = include
SRC = src
OBJ = obj
LIB = lib
DOC = doc

all: $(BIN)/ejercicio4

$(BIN)/ejercicio4: $(OBJ)/ejercicio4.o $(LIB)/libformas.a
	g++ -std=c++11 -o $(BIN)/ejercicio4 $(OBJ)/ejercicio4.o -L$(LIB) -lformas
	@echo Construyendo ejecutable en $(BIN)

$(OBJ)/ejercicio4.o: $(SRC)/ejercicio4.cpp $(INC)/Lista.h $(INC)/Celda.h
	g++ -std=c++11 -c -I$(INC) -o $(OBJ)/ejercicio4.o $(SRC)/ejercicio4.cpp

$(OBJ)/Lista.o: $(SRC)/Lista.cpp $(INC)/Lista.h
	g++ -std=c++11 -c -I$(INC) -o $(OBJ)/Lista.o $(SRC)/Lista.cpp

$(OBJ)/Celda.o: $(SRC)/Celda.cpp $(INC)/Celda.h $(INC)/Lista.h
	g++ -std=c++11 -c -I$(INC) -o $(OBJ)/Celda.o $(SRC)/Celda.cpp





$(LIB)/libformas.a: $(OBJ)/Lista.o $(OBJ)/Celda.o
	@echo Construyendo libreria
	ar rvs $(LIB)/libformas.a $(OBJ)/Lista.o $(OBJ)/Celda.o

#_______LIMPIEZA________

clean:
	@echo Limpieza de los archivos objeto y biblioteca...
	rm $(OBJ)/*.o
	rm $(LIB)/*.a

mrproper: clean
	rm $(BIN)/ejercicio4

#_______DOCUMENTACION____

documentacion:
	doxygen $(DOC)/doxys/Doxyfile

#___________RUN_ONLY_WINDOWS_______

run:
	$(BIN)/ejercicio4
