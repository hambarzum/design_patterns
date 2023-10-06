
all:
	make build && make run && make clean

build:
	g++ src/main.cpp src/gadget_manager.cpp src/gadgets/laptop.cpp src/gadgets/smartphone.cpp -o out
run:
	./out
		
clean:
	rm -rf out