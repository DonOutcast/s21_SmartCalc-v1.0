CC = gcc
CFLAGC =  -Wall -Werror -Wextra  -std=c11 
SOURCES = s21_SmartCalc.c unit_test.c
OBJECTS = s21_SmartCalc.o


all: build static tests

build:
	$(CC) $(CFLAGC) -c $(SOURCES)

static:
	ar rc s21_SmartCalc.a $(OBJECTS)
	ranlib s21_SmartCalc.a
tests:
	$(CC) $(CFLAGC) -lcheck  unit_test.c s21_SmartCalc.a -o test
	./test

gcov_report:
	gcc $(WWW) -lcheck --coverage *.c -o gcov_report
	./gcov_report
	lcov -t "./gcov_report" -o gcov_report.info -c -d .
	genhtml -o report gcov_report.info
	rm -rf *.gcda
	rm -rf *.gcno
	rm -rf *.info
	open ./report/index.html

install:
	make clean
	mkdir build
	cd calc && qmake && make && make clean && rm Makefile && cd ../ && mv calc/calc.app build
	

unistall:
	rm -rf build*

dvi:
	open dvi.txt

dist:
	rm -rf Archive_SmartCalc_v1.0/
	mkdir Archive_SmartCalc_v1.0/
	mkdir Archive_SmartCalc_v1.0/src
	mv ./build/calc.app Archive_SmartCalc_v1.0/src/
	tar cvzf Archive_SmartCalc_v1.0.tgz Archive_SmartCalc_v1.0/
	rm -rf Archive_SmartCalc_v1.0/

clean:
	rm -rf *.{a,o,dSYM,out}
	rm -rf $(EXECUTABLE)
	rm -rf gcov_report
	rm -rf report
	rm -rf CPPLINT.cfg
	rm -rf *.gcda
	rm -rf *.gcno
	rm -rf *.info
	rm -rf test
	rm -rf Archive_SmartCalc_v1.0 
	rm -rf *tgz
	rm -rf build

rebuild: clean all

check:
	cp ../materials/linters/CPPLINT.cfg .
	python3 ../materials/linters/cpplint.py --extensions=c *.c
	python3 ../materials/linters/cpplint.py --extensions=c *.h
	cppcheck --enable=all --suppress=missingIncludeSystem *.c
	leaks -atExit -- ./test