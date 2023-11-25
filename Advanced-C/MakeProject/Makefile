all: output

build_dir=$(shell pwd)/build

output: $(build_dir)/main.o $(build_dir)/message.o
	@echo Object files in: $(build_dir)
	@echo "Linking all object files..."
	@gcc $(build_dir)/main.o $(build_dir)/message.o -o output

$(build_dir)/main.o: main.c
	@echo "Compiling main.c..."
	@gcc -c main.c -o $(build_dir)/main.o

$(build_dir)/message.o: message.c message.h
	@echo "Compiling message.c..."
	@gcc -c message.c -o $(build_dir)/message.o

clean:
	rm *.o output
