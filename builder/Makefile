
all:
	make build && make run && make clean

build:
	g++ main.cpp contractor/contractor.cpp builders/normal_house_builder.cpp builders/pool_house_builder.cpp builders/mansion_builder.cpp -o out
run:
	./out
		
clean:
	rm -rf out