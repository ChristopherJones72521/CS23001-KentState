/*
 * =====================================================================================
 *
 *       Filename:  test_stack_int.cpp
 *
 *    Description:  Tests stacks with ints
 *
 *        Version:  1.0
 *        Created:  Today
 *       Revision:  none
 *       Compiler:  clang++
 *
 *         Author:  Christopher Jones
 *
 * =====================================================================================
 */

#include <fstream>
#include "stack.hpp"
#include <string>

// Converts input to assembly
void to_assembly(std::ifstream&, std::ofstream&);

std::string assembly_operator(const std::string&);

std::string i_to_s(int);

std::string getToken(std::ifstream&);

// Outputs help and exits
void help(void);

int main(int argc, char const* argv[])
{
	// If input file isn't present, display help and leave
	if (argc != 3) {
		std::cerr << "No input file present!" << std::endl;
		help();
	}

	std::ifstream postfix_file(argv[1]);

	// If no infix file, show help and leave
	if (!postfix_file) {
		std::cerr << "Postfix file couldn't be opened!" << std::endl;
		help();
	}

	std::ofstream assembly_file(argv[2]);

	// If file can't be opened, display help and exit
	if (!assembly_file) {
		std::cerr << "Assembly file can't be opened!" << std::endl;
		help();
	}

	// Convert input to assembly
	to_assembly(postfix_file, assembly_file);

	postfix_file.close();
	assembly_file.close();

	return 0;
}

void to_assembly(std::ifstream& in, std::ofstream& out)
{
    Stack<std::string> s;
    std::string lhs, rhs, op, tempvar, currentToken;
	int tempN = 1;

	while (!in.eof() || !s.isEmpty()) {
		if (!in.eof()) {
			currentToken = getToken(in);
			//currentToken -= '\n';
		} else {
			break;
		}

		if (currentToken == ";") {
			out << "=============================================" << std::endl;
			tempN = 1;
		}

		if (!in.eof() && currentToken != "+" && currentToken != "-" && currentToken != "*" && currentToken != "/") {
			s.push(currentToken);
		} else if (!in.eof()) {
			rhs = s.pop();
			lhs = s.pop();

			out << "LDR\t" << lhs << std::endl;

			op = assembly_operator(currentToken);
			out << op << rhs << std::endl;

			tempvar = "TEMP" + i_to_s(tempN++);
			s.push(tempvar);

			out << "STR\t" << tempvar << std::endl;
		}
	}
}

std::string assembly_operator(const std::string& op)
{
	switch (op[0]) {
		case '+':
			return "ADD\t";
			break;
		case '-':
			return "SUB\t";
			break;
		case '*':
			return "MUL\t";
			break;
		case '/':
			return "DIV\t";
			break;
		default:
			return "UNDEFINED\t";
	}
}

std::string i_to_s(int x)
{
	if (!x) {
		return "0";
	}

    std::string result;

	do {
		result += (x % 10 + 48);
		x /= 10;
	} while (x > 0);

	return result;
}

std::string getToken(std::ifstream& in)
{
    std::string result;
	char token = '\0';

	for (int i = 0; token != ' ' && !in.eof(); ++i) {
		in.get(token);

		if (token == ';') {
			return ";";
		} else if (token != ' ') {
			result += token;
		}
	}

	return result;
}

void help()
{
	std::cerr << "Usage: ./assembler.out [input file] [output file]" << std::endl;
//	exit(1);
}
