#Nombre:		Makefile
#Autor:			Jesús Manuel García Palma
#Descripcion:	Practica 4 ejercicio 3


BIN = bin
INC = include
SRC = src
OBJ = obj
LIB = lib
DOC = doc

all: $(BIN)/ejercicio3

$(BIN)/ejercicio3: $(OBJ)/ejercicio3.o $(LIB)/libformas.a
	g++ -std=c++11 -o $(BIN)/ejercicio3 $(OBJ)/ejercicio3.o -L$(LIB) -lformas
	@echo Construyendo ejecutable en $(BIN)

$(OBJ)/ejercicio3.o: $(SRC)/ejercicio3.cpp $(INC)/Polilinea.h $(INC)/Punto.h
	g++ -std=c++11 -c -I$(INC) -o $(OBJ)/ejercicio3.o $(SRC)/ejercicio3.cpp

$(OBJ)/Polilinea.o: $(SRC)/Polilinea.cpp $(INC)/Polilinea.h $(INC)/Punto.h
	g++ -std=c++11 -c -I$(INC) -o $(OBJ)/Polilinea.o $(SRC)/Polilinea.cpp

$(OBJ)/Punto.o: $(SRC)/Punto.cpp $(INC)/Punto.h
	g++ -std=c++11 -c -I$(INC) -o $(OBJ)/Punto.o $(SRC)/Punto.cpp

$(LIB)/libformas.a: $(OBJ)/Polilinea.o $(OBJ)/Punto.o
	@echo Construyendo libreria
	ar rvs $(LIB)/libformas.a $(OBJ)/Polilinea.o $(OBJ)/Punto.o

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

#___________RUN_ONLY_WINDOWS_______

run:
	$(BIN)/ejercicio3
