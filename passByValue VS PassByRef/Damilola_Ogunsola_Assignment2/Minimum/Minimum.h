//Function template to find the minimum of two values


template <typename T>
T minimum(T value1, T value2)
{
	//T minimumValue = value1;

	if (value1 < value2)
		return value1;
	else
		return value2;
}
#pragma once
