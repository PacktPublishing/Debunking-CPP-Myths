test: test.cpp
	./out/tests

run: main.cpp
	./out/app

main.cpp: .FORCE
	mkdir -p out/
	g++ -Wall -Wpedantic -std=c++20 -I"src/" "main.cpp" -o out/app

test.cpp: .FORCE
	mkdir -p out/
	g++ -Wall -Wextra -Wpedantic -std=c++20 -I"src/" "test.cpp"  -o out/tests

.FORCE:
