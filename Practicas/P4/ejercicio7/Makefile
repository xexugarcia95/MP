#Nombre:		Makefile
#Autor:			Jesús Manuel García Palma
#Descripcion:	Practica 4 ejercicio 7


BIN = bin
INC = include
SRC = src
OBJ = obj
LIB = lib
DOC = doc

all: $(BIN)/ejercicio7

$(BIN)/ejercicio7: $(OBJ)/ejercicio7.o $(LIB)/libformas.a
	g++ -std=c++11 -o $(BIN)/ejercicio7 $(OBJ)/ejercicio7.o -L$(LIB) -lformas
	@echo Construyendo ejecutable en $(BIN)

$(OBJ)/ejercicio7.o: $(SRC)/ejercicio7.cpp $(INC)/Precuencias.h $(INC)/Pareja.h
	g++ -std=c++11 -c -I$(INC) -o $(OBJ)/ejercicio7.o $(SRC)/ejercicio7.cpp

$(OBJ)/Precuencias.o: $(SRC)/Precuencias.cpp $(INC)/Precuencias.h
	g++ -std=c++11 -c -I$(INC) -o $(OBJ)/Precuencias.o $(SRC)/Precuencias.cpp

$(OBJ)/Pareja.o: $(SRC)/Pareja.cpp $(INC)/Pareja.h $(INC)/Precuencias.h
	g++ -std=c++11 -c -I$(INC) -o $(OBJ)/Pareja.o $(SRC)/Pareja.cpp



$(LIB)/libformas.a: $(OBJ)/Precuencias.o $(OBJ)/Pareja.o
	@echo Construyendo libreria
	ar rvs $(LIB)/libformas.a $(OBJ)/Precuencias.o $(OBJ)/Pareja.o

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

#___________RUN_ONLY_WINDOWS_______

run:
	$(BIN)/ejercicio7
