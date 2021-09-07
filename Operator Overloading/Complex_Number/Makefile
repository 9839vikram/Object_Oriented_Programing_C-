SRC = Complex_Number.cpp\
test_Complex.cpp

all:$(SRC)
	g++ $^ -lgtest -lgtest_main -lpthread -o all.out

run:all
	./all.out

coverage:$(SRC)
	g++ -fprofile-arcs -ftest-coverage $(SRC) -lgtest -lgtest_main -lpthread -o all.out
	./all.out
	gcov -a Complex_Number.cpp
clean:
	rm -rf *.o *.out *.gcd* *.gcno* *.gcov*