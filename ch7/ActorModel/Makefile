run: main.cpp
	./out/app

main.cpp: .FORCE
	mkdir -p out/
	g++ -Wall -Wpedantic -std=c++20 -I"src/" "main.cpp" -lcaf_core -lcaf_io -o out/app

.FORCE:
