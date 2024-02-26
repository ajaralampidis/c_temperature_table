COMPIL = gcc
OBJECTS = main.o GetUnknownSizeString/GetUnknownSizeString.o FormatedPrint/FormatedPrint.o TemperatureConversion/TemperatureConversion.o
BINARY=prueba.exe

all: $(BINARY)

$(BINARY): $(OBJECTS)
	$(COMPIL) -o $@ $^

%.o:%.c
	$(COMPIL) -c -o $@ $^

clean:
	rm -rf $(BINARY) $(OBJECTS)