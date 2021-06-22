#include<iostream> 

// Call by reference is used in x 
template<typename T, typename U> 
static inline void amin(T &x, U y) 
{ 
	if (y < x) 
		x = y; 
} 

// call by reference is used in x 
template<typename T, typename U> 
static inline void amax(T &x, U y) 
{ 
	if (x < y) 
		x = y; 
} 

// Driver program to find the Maximum and Minimum value 
int main() 
{ 
	int max_val = 0, min_val = 1e5; 
	int array[]= {4, -5, 6, -9, 2, 11}; 

	for (auto const &val: array) 

		// Same as max_val = max (max_val, val) 
		// Same as min_val = min (min_val,val) 
		amax(max_val, val), amin (min_val, val); 


	std::cout << "Max value = " << max_val << "\n"
			<< "Min value = " << min_val; 
	return 0; 
} 
