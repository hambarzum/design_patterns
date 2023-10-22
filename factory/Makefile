
all:
	make build && make run && make clean

build:
	g++ main.cpp logistics/logistics.cpp logistics/road_logistics.cpp logistics/sea_logistics.cpp transports/truck.cpp transports/ship.cpp -o out
run:
	./out

clean:
	rm -rf out