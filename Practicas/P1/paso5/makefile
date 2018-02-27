#Nombre:		Makefile
#Autor:			Jesús Manuel García Palma
#Descripcion:	Practica 0


BIN = bin
INC = include
SRC = src
OBJ = obj
LIB = lib
DOC = doc

all: $(BIN)/principal

$(BIN)/principal: $(OBJ)/principal.o $(LIB)/libformas.a
	g++ -o $(BIN)/principal $(OBJ)/principal.o -L$(LIB) -lformas
	@echo Construyendo ejecutable en $(BIN)

$(OBJ)/principal.o: $(SRC)/principal.cpp $(INC)/punto.h $(INC)/circulo.h $(INC)/utilidades.h
	g++ -c -I$(INC) -o $(OBJ)/principal.o $(SRC)/principal.cpp 

$(OBJ)/punto.o: $(SRC)/punto.cpp $(INC)/punto.h
	g++ -c -I$(INC) -o $(OBJ)/punto.o $(SRC)/punto.cpp

$(OBJ)/circulo.o: $(SRC)/circulo.cpp $(INC)/circulo.h $(INC)/punto.h
	g++ -c -I$(INC) -o $(OBJ)/circulo.o $(SRC)/circulo.cpp

$(OBJ)/utilidades.o: $(SRC)/utilidades.cpp $(INC)/utilidades.h $(INC)/punto.h $(INC)/circulo.h
	g++ -c -I$(INC) -o $(OBJ)/utilidades.o $(SRC)/utilidades.cpp

$(LIB)/libformas.a: $(OBJ)/punto.o $(OBJ)/circulo.o $(OBJ)/utilidades.o 
	@echo Construyendo libreria
	ar rvs $(LIB)/libformas.a $(OBJ)/punto.o $(OBJ)/circulo.o $(OBJ)/utilidades.o




#_______LIMPIEZA________

clean: 
	@echo Limpieza de los archivos objeto y biblioteca...
	rm $(OBJ)/*.o 
	rm $(LIB)/*.a

mrproper: clean
	rm $(BIN)/principal

#_______DOCUMENTACION____

documentacion:
	doxygen $(DOC)/doxys/Doxyfile
