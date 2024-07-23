check-leaks: test 
	valgrind -q --leak-check=full ./out/tests

test: tests.cpp
	./out/tests

tests.cpp: .FORCE
	mkdir -p out/
	g++ -std=c++20 -I"src/" "tests.cpp"  -o out/tests

.FORCE:
