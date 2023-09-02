CC=gcc
CFLAGS= -c -O2

C_SRC=$(wildcard *.c)
C_OBJ=$(C_SRC:%.c=%.o)
PROG=hex2bin

all: ${PROG}

${PROG}: ${C_OBJ} ${CPP_OBJ}
	${CC} -o $@ $^ ${LFLAGS} 

${C_OBJ}: ${C_SRC}
	${CC} ${CFLAGS} $^

clean:
	rm -f *.o
	rm -f ${PROG}
