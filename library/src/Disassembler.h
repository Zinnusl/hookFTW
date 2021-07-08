#pragma once

#include <cstdint>
#include <vector>
#include <Windows.h>


namespace hookftw
{
	/**
	 * \brief Disassembles the target binary and provides utilities to work with assembly instructions
	 *
	 * Disassembles the target binary.
	 */
	class Disassembler
	{
	public:
		static void PrintInstruction(int64_t runtime_address, void* instruction);
		void PrintInstructions(int8_t* address, size_t byteCount);
	};
}
