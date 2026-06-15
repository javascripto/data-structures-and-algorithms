CC := gcc
CFLAGS := -std=c11 -Wall -Wextra -Wpedantic -O2

EXAMPLE ?= arrays/fixed-array

SRC := $(EXAMPLE)/main.c
OUT := build/$(notdir $(EXAMPLE))

EXAMPLES := $(sort $(dir $(wildcard arrays/*/main.c)))
OUTS := $(patsubst arrays/%/,%,$(EXAMPLES))
BINARIES := $(addprefix build/,$(OUTS))

.PHONY: all run run-all clean

all: $(OUT)

$(OUT): $(SRC)
	mkdir -p build
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

run: all
	./$(OUT)

run-all: $(BINARIES)
	@for binary in $(BINARIES); do \
		echo ""; \
		echo "Running $$binary"; \
		echo "----------------"; \
		./$$binary; \
	done

build/%: arrays/%/main.c
	mkdir -p build
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf build
