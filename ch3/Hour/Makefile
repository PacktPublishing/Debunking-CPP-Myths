test: testHour.cpp testHourRuntime.cpp
	./out/tests

testHour.cpp: .FORCE
	mkdir -p out/
	g++ -std=c++20 -I"src/" "testHour.cpp"  -o out/tests

testHourRuntime.cpp: .FORCE
	mkdir -p out/
	g++ -std=c++20 -I"src/" "testHourRuntime.cpp"  -o out/tests

.FORCE:
