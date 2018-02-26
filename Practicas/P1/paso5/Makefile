#Nombre:		Makefile
#Autor:			Jesús Manuel García Palma
#Descripcion:	Practica 0


OBJ=obj
BIN=bin
LIB=lib
SRC=src
INC=include 

all : bin/principal

$(OBJ)/punto.o : $(SRC)/punto.cpp $(INC)/punto.h
	g++ -c -o $(OBJ)/punto.o -I$(INC) $(SRC)/punto.cpp

$(OBJ)/circulo.o : $(SRC)/circulo.cpp $(INC)/circulo.h
	g++ -c -o $(OBJ)/circulo.o -I$(INC) $(SRC)/circulo.cpp

$(OBJ)/utilidades.o : $(SRC)/utilidades.cpp $(INC)/utilidades.h $(INC)/punto.h $(INC)/circulo.h
	g++ -c -o $(OBJ)/utilidades.o -I$(INC) $(SRC)/utilidades.cpp

$(LIB)/libformas.a : $(OBJ)/punto.o $(OBJ)/circulo.o $(OBJ)/utilidades.o 
	@echo Construyendo libreria
	ar rvs $(LIB)/$(LIB)formas.a $(OBJ)/punto.o $(OBJ)/circulo.o $(OBJ)/utilidades.o

$(OBJ)/principal.o : $(SRC)/principal.cpp $(INC)/punto.h $(INC)/circulo.h $(INC)/utilidades.h
	g++ -c -o $(OBJ)/principal.o -I$(INC) $(SRC)/principal.cpp

$(BIN)/principal : $(OBJ)/principal.o $(LIB)/libformas.a
	g++ -L$(LIB)/ -o bin/principal $(OBJ)/principal.o -lformas


clean : 
	@echo Limpieza de los archivos objeto y biblioteca...
	rm $(OBJ)/*.o $(LIB)/*.a

mrproper : clean
	rm $(BIN)/principal
