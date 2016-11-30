CC=g++

OPT= -O2
CFLAGS= $(OPT) -Wall

all: xor_encryptor.out

clean:
	rm -rf *.o *.out *.elf *.ls *.map

xor_encryptor.out: xor_encryptor.cpp
	$(CC) $(CFLAGS) xor_encryptor.cpp -o xor_encryptor.out
