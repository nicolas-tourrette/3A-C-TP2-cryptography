CC = gcc
CFLAGS = -Wall
LDFLAGS =
SRCS = main.c cesar.c monoalph.c vigenere.c
OBJFILES = main.o cesar.o monoalph.o vigenere.o
TARGET = cryptographie

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)

.c.o:
	${CC} ${CFLAGS} ${INCLUDES} -c $<

clean:
	rm -f $(OBJFILES) $(TARGET)

cleanobj:
	rm -f $(OBJFILES)

depend:
	makedepend -I. $(SRCS)

exe: $(TARGET)
	./$(TARGET)
# DO NOT DELETE

main.o: cesar.h monoalph.h
cesar.o: cesar.h
monoalph.o: monoalph.h
