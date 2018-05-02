#Nombre:		Makefile
#Autor:			Jesús Manuel García Palma
#Descripcion:	Practica 3 ejercicio6


BIN = bin
INC = include
SRC = src
OBJ = obj
LIB = lib
DOC = doc

all: $(BIN)/ejercicio6

$(BIN)/ejercicio6: $(OBJ)/ejercicio6.o $(LIB)/libformas.a
	g++ -o $(BIN)/ejercicio6 $(OBJ)/ejercicio6.o -L$(LIB) -lformas
	@echo Construyendo ejecutable en $(BIN)

$(OBJ)/ejercicio6.o: $(SRC)/ejercicio6.cpp $(INC)/Lista.h $(INC)/Celda.h
	g++ -c -I$(INC) -o $(OBJ)/ejercicio6.o $(SRC)/ejercicio6.cpp

$(OBJ)/Lista.o: $(SRC)/Lista.cpp $(INC)/Lista.h $(INC)/Celda.h
	g++ -c -I$(INC) -o $(OBJ)/Lista.o $(SRC)/Lista.cpp

$(OBJ)/Celda.o: $(SRC)/Celda.cpp $(INC)/Celda.h
	g++ -c -I$(INC) -o $(OBJ)/Celda.o $(SRC)/Celda.cpp

$(LIB)/libformas.a: $(OBJ)/Lista.o $(OBJ)/Celda.o
	@echo Construyendo libreria
	ar rvs $(LIB)/libformas.a $(OBJ)/Lista.o $(OBJ)/Celda.o


#_______LIMPIEZA________

clean:
	@echo Limpieza de los archivos objeto y biblioteca...
	rm $(OBJ)/*.o
	rm $(LIB)/*.a

mrproper: clean
	rm $(BIN)/ejercicio6

#_______DOCUMENTACION____

documentacion:
	doxygen $(DOC)/doxys/Doxyfile
