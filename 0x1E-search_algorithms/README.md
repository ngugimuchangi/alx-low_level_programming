# 0x1E. C - Search Algorithms

## About
Search algorithms
* Linear search
* Binary search
* Jump search
* Interpolation search
* Exponential search

## Tasks
0. Function that searches for a value in an array of integers using the Linear search algorithm
	* [0-linear.c](0-linear.c)
1. Function that searches for a value in a sorted array of integers using the Binary search algorithm
	* [1-binary.c](1-binary.c)
2. Time complexity (worst case) of a linear search
	* [2-O](2-O)
3. Space complexity (worst case) of an iterative linear search algorithm
	* [3-O](3-O)
4. Time complexity (worst case) of a binary search 
	* [4-O](4-O)
5. Space complexity (worst case) of a binary search
	* [5-O](5-O)
6. Space complexity of this function / algorithm
	* [6-O](6-O)
```
int 	*	*allocate_map(int n, int m)
{
	int 	*	*map;
	map = malloc(sizeof(int 	*) 	* n);

	for (size_t i = 0; i < n; i++)
	{
		map[i] = malloc(sizeof(int) 	* m);
	}
	return (map);
}
```




7. Function that searches for a value in a sorted array of integers using the Jump search algorithm
	* [100-jump.c](100-jump.c)
8. Time complexity (average case) of a jump search in an array of size n, using `step = sqrt(n)`
	* [101-O](101-O)
9. Function that searches for a value in a sorted array of integers using the Interpolation search algorithm
	* [102-interpolation.c](102-interpolation.c)
10. Function that searches for a value in a sorted array of integers using the Exponential search algorithm
	* [103-exponential.c](103-exponential.c)
11. Recursive binary search function for the right most index of a value
	* [104-advanced_binary.c](104-advanced_binary.c)
12. Jump search function for a singly linked list
	* [105-jump_list.c](105-jump_list.c)
13. Function that searches for a value in a sorted skip linked list of integers.
	* [106-linear_skip.c](106-linear_skip.c)
14. Time complexity (average case) of a jump search in a singly linked list of size n, using `step = sqrt(n)`
	* [107-O](107-O)
15. Time complexity (average case) of a jump search in a skip list of size n, with an express lane using `step = sqrt(n)`
	* [108-O](108-O)
