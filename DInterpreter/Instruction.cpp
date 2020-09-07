#include "Instruction.h"

#include <iostream>

cflat::Instruction::Instruction(int opcode, Arg a0, Arg a1, Arg a2) : opcode(opcode), a0(a0), a1(a1), a2(a2)
{
}

cflat::Instruction::~Instruction()
{
}

void cflat::Instruction::set(int opcode, Arg a0, Arg a1, Arg a2)
{
	this->opcode = opcode;
	this->a0 = a0;
	this->a1 = a1;
	this->a2 = a2;
}

void cflat::Instruction::print()
{
	std::cout << opcodes_s[opcode];
	if (opcodes_nargs[opcode] > 0)
		std::cout << "\t" << a0.i;
	if (opcodes_nargs[opcode] > 1)
		std::cout << ", " << a1.i;
	if (opcodes_nargs[opcode] > 2)
		std::cout << ", " << a2.i;
	std::cout << "\n";
}