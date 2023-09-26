
all:
	make build && make run && make clean

build:
	g++ main.cpp factories/qt_factory.cpp factories/sfml_factory.cpp  widgets/qt_widgets/qt_button.cpp widgets/qt_widgets/qt_scroll.cpp widgets/sfml_widgets/sfml_button.cpp widgets/sfml_widgets/sfml_scroll.cpp -o out
run:
	./out
		
clean:
	rm -rf out