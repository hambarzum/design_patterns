
all:
	make build && make run && make clean

build:
	g++ main.cpp notifier.cpp decorators/base_decorator.cpp decorators/sms_decorator.cpp decorators/slack_decorator.cpp decorators/facebook_decorator.cpp -o out

run:
	./out

clean:
	rm -rf out