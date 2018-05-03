#Nombre:		Makefile
#Autor:			Jesús Manuel García Palma
#Descripcion:	Practica 3 ejercicio 6


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

$(OBJ)/ejercicio6.o: $(SRC)/ejercicio6.cpp $(INC)/Matriz2D.h
	g++ -c -I$(INC) -o $(OBJ)/ejercicio6.o $(SRC)/ejercicio6.cpp

$(OBJ)/Matriz2D.o: $(SRC)/Matriz2D.cpp $(INC)/Matriz2D.h
	g++ -c -I$(INC) -o $(OBJ)/Matriz2D.o $(SRC)/Matriz2D.cpp



$(LIB)/libformas.a: $(OBJ)/Matriz2D.o
	@echo Construyendo libreria
	ar rvs $(LIB)/libformas.a $(OBJ)/Matriz2D.o


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
