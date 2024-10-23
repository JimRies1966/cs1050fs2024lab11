##############################################################################
# Makefile for Lab 11
# CMP_SC 1050
# Fall 2024
# By Jim Ries (RiesJ@missouri.edu)
##############################################################################
CC = gcc
CFLAGS = -Wall -Werror -c -g -std=c11 
LDFLAGS = -lm -L. -ljimr

%.o : %.c 
	@echo Compiling $^ ...
	@$(CC) $(CFLAGS) $^

default: a.out

regular: clean a.out

debug: CFLAGS += -DDEBUG
debug: clean a.out

honors: CFLAGS += -DHONORS
honors: clean a.out

honorsdebug: CFLAGS += -DHONORS -DDEBUG
honorsdebug: clean a.out

lib : libjimr.a

a.out : main.o filter.o
	@echo Linking $@ ...
	@$(CC) $^ $(LDFLAGS) -o $@
	@echo Done!

libjimr.a : jimr.o
	@echo Building library $@
	@ar -crs libjimr.a $^

clean : 
	@rm -rf *.o
	@rm -rf a.out
	@echo All Clean!

cleanall: clean cleanlib

cleanlib :
	@rm -rf *.a
