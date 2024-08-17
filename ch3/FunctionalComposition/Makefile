test: test.cpp
	./out/tests

test.cpp: .FORCE
	mkdir -p out/
	g++ -std=c++20 -I"src/" "test.cpp"  -o out/tests

.FORCE:
