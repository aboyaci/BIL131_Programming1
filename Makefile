SOURCE_FILES := $(wildcard *.c)
BIN_FILES := $(SOURCE_FILES:.c=.out)
C_FLAGS := -Wall -lcurses

all : $(BIN_FILES)

%.out: %.c
	gcc $(C_FLAGS) -o $@ $<

clean:
	rm -f *.out
