CFLAGS = -g

all: floats program_flow integers operations pointers source user_types

floats: floats.c
	gcc -o floats floats.c $(CFLAGS)

program_flow: program_flow.c
	gcc -o program_flow program_flow.c $(CFLAGS)

integers: integers.c
	gcc -o integers integers.c $(CFLAGS)

lib.o: lib.c
	gcc -c lib.c $(CFLAGS)

operations: operations.c
	gcc -o operations operations.c $(CFLAGS)

pointers: pointers.c
	gcc -o pointers pointers.c $(CFLAGS)

source: source.o lib.o
	gcc -o source source.o lib.o $(CFLAGS)

source.o: source.c
	gcc -c source.c $(CFLAGS)

user_types: user_types.c
	gcc -o user_types user_types.c $(CFLAGS)
