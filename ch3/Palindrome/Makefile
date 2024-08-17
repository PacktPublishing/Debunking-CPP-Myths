test: testPalindrome.cpp
	./out/tests

testPalindrome.cpp: .FORCE
	mkdir -p out/
	g++ -std=c++20 -I"src/" "testPalindrome.cpp"  -o out/tests

.FORCE:
