

# Name: Anwesh Joshi
# makefile - tail.c [HW 5]
# Date: 04/11/2017



cc =	gcc
CFLAGS =   -m32 

tail:		tail.o lineholder.o 
		$(cc) $(CFLAGS) -g  -o tail tail.o lineholder.o



tail.o:  	tail.c lineholder.h
		$(cc) $(CFLAGS) -g -c  tail.c
lineholder.o:	lineholder.c lineholder.h
		$(cc) $(CFLAGS) -g -c lineholder.c

clean:
		rm *.o
