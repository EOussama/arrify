# Arrify's make file.


# The compiler.
CC = gcc

# The compiler's flags.
CFLAGS = -Wall -g


# Testing arrify.
test:
	${CC} ${CFLAGS} ./tests/test.c -o test && \
	echo "|---[Testing Arrify]---|" && \
	./$@ && \
	rm -f ./$@


# Cleaning the project from temporarily files.
clean:
	rm -f ./*.exe
