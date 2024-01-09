CSRC = ${wildcard src/*.c}

all: run

run: build
	@./chem

build: $(CSRC)
	@gcc -Wno-implicit-function-declaration $(CSRC) -o chem

clean:
	rm chem




