CSRC = ${wildcard src/*.c}

all: run

run: build
	./chem

build: $(CSRC)
	gcc $(CSRC) -o chem

clean:
	rm chem




