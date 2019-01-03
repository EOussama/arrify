# Arrify's make file.


# The build's macros.
CC = gcc
CFLAGS = -g -Wall
OBJS = ArrayList.o


# The default rule.
all: clean arrify.a install


# Copying the header files to the “dist” folder.
install: arrify.a
	mkdir -p ./dist/inc/ && \
	cp ./src/inc/*.h ./dist/inc/


# Building Arrify.
arrify.a: objects
	mkdir -p ./dist/lib/ && \
	ar -cvq ./dist/lib/$@ ./build/${OBJS}


# Getting the object files.
objects:
	${CC} ${CFLAGS} -c ./src/lib/*.c && \
	mkdir -p ./build && \
	mv ./*.o ./build/


# Testing arrify.
test: all
	${CC} ${CFLAGS} -o ./tests/$@ ./tests/test.c ./dist/lib/arrify.a && \
	echo "|---[Testing Arrify]---|" && \
	./tests/$@ && \
	rm -f ./tests/$@


# Cleaning the project from temporarily files.
clean:
	rm -rf ./dist/ ./build/ ./*.exe
