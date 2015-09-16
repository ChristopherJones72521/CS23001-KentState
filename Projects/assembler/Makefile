#============================================================================
#  stack class makefile
#===========================================================================

CPP          = clang++
CPP_FLAGS    = -g -Wall -W -Wunused -Wuninitialized -Wshadow
INCLUDE_OPT  = -iquote . -iquote ../string
VALGRIND = valgrind -q
STACK_TESTS = test_stack_int.out test_stack_string.out test_queue_int.out test_queue_string.out test_output.out

#-------------------------------------------------------------------------------
#STRING_DIR = ../string/

#===========================================================================
msg:
	@echo 'Targets for compiling test programs:'
	@echo '   tests'
	@echo '   clean'
	@echo '   postfix'
	@echo '   assembler'

#===========================================================================
# Compile string.o from Project 2.

#string.o: ${STRING_DIR}string.hpp ${STRING_DIR}string.cpp

#	${CPP} ${CPP_FLAGS} ${INCLUDE_OPT} -c ${STRING_DIR}string.cpp

#===========================================================================
# Compile stack.o

# stack.o: stack.hpp  stack.cpp
# 	${CPP} ${CPP_FLAGS}  -c stack.cpp

#===========================================================================
# Compile test programs
#----------------------------------------------------------------------------
#test_%.out: string.o test_%.o
test_%.out: test_%.o
#	${CPP} ${CPP_FLAGS} string.o test_$*.o -o test_$*.out
	${CPP} ${CPP_FLAGS} test_$*.o -o test_$*.out

#test_%.o: ${STRING_DIR}string.hpp stack.hpp test_%.cpp
test_%.o: ${STRING_DIR}stack.hpp test_%.cpp
	${CPP} ${CPP_FLAGS} ${INCLUDE_OPT} -c test_$*.cpp


#===========================================================================
# Compile postfix

#postfix: clean string.o postfix.o
postfix: clean postfix.o
#	${CPP} ${CPP_FLAGS} string.o postfix.o -o postfix.out
	${CPP} ${CPP_FLAGS} postfix.o -o postfix.out
	${VALGRIND} ./postfix.out data3-0.txt data3-0-postfix.txt
	${VALGRIND} ./postfix.out data3-1.txt data3-1-postfix.txt
	${VALGRIND} ./postfix.out data3-2-1.txt data3-2-1-postfix.txt

postfix.o: stack.hpp postfix.cpp
	${CPP} ${CPP_FLAGS} ${INCLUDE_OPT} -c postfix.cpp

#===========================================================================
# Compile assembler

#assembler: clean string.o postfix.o assembler.o postfix
assembler: clean postfix.o assembler.o postfix
#	${CPP} ${CPP_FLAGS} string.o assembler.o -o assembler.out
	${CPP} ${CPP_FLAGS} assembler.o -o assembler.out
	${VALGRIND} ./assembler.out data3-0-postfix.txt data3-0-assembler.txt
	${VALGRIND} ./assembler.out data3-1-postfix.txt data3-1-assembler.txt
	${VALGRIND} ./assembler.out data3-2-1-postfix.txt data3-2-1-assembler.txt

assembler.o: stack.hpp postfix.cpp
	${CPP} ${CPP_FLAGS} ${INCLUDE_OPT} -c assembler.cpp


#===========================================================================
# Run test programs

tests: ${STACK_TESTS}
	${VALGRIND} ./test_stack_int.out
	${VALGRIND} ./test_stack_string.out
	${VALGRIND} ./test_queue_int.out
	${VALGRIND} ./test_queue_string.out
	${VALGRIND} ./test_output.out
	make clean

#============================================================================
clean:
	rm -f *.o *.out *-postfix.txt *-assembler.txt
