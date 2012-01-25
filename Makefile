all: test

advancedmath.so: advancedmath.c
	g++ -I /usr/include/python2.7/ -lpython2.7 --shared -o $@ $<

test: advancedmath.so
	./test.py
