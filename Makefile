.PHONY: all build clean

all: build
 build:
	cd build
	@echo "Building app in /build"
	cmake ..
	cmake --build
	./008-HelloWorld

clean: 
	@echo "Cleaning /build project folder and displaying tree"
	tree > doc/prjstructureBefore.txt
	mkdir build/dummy
	mkdir Release/dummy
	mkdir Debug/dummy
	rm -r build/*
	rm -r Release/*
	rm -r Debug/*
	tree > doc/prjstructureAfter.txt
	

