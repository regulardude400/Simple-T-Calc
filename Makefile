CC = gcc
TARGET = simple-t-calc
CFLAGS = -g -Wall
STCALC = libst-calc.a
STCALCO = simple-t-calc.o
all: libst-calc.a main.c
	$(CC) $(CFLAGS) main.c -L. -o $(TARGET)

$(STCALC): $(STCALCO)
	$(AR) rcs $@ $<

simple-t-calc.o: main.c
	$(CC) $(CFLAGS) main.c -c -o $@

clean:
	rm -f *.o
	rm $(STCALC)
	rm $(TARGET)
