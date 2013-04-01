#include "BitManipulation.h"

int BitManipulation::numberBitsChangedToConvertXtoY(int x, int y)					// Function for returning the number of bits that must be changed to convert x to y
{
	int z = x ^ y;																	// Get the xor of x and y, and store it in z. Xor is important becuase it only returns the bits that are different between the two numbers.
	int numBitsChanged = 0;

	while (z != 0)																	// Keep doing these operations until z is 0. z will become 0 when all of its bits have been shifted out.
	{
		numBitsChanged += z & 1;													// Add the least significant bit of z to the numBitsChanged
		z = z >> 1;																	// Shift z to the right by 1, so that we can compare the next bit
	}

	return numBitsChanged;
}