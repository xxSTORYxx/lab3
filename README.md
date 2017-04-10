# lab3


Part A：
-------
How does it compile：

	g++ LAB3 lab3.cpp
	./LAB3
	2032

Part B：
-------
Result：

	sort(1000): 0.000351 seconds

	insertion_sort(1000): 0.019381 seconds

	sort(10000): 0.004673 seconds

	insertion_sort(10000): 1.96201 seconds

	sort(100000): 0.058973 seconds

	insertion_sort(100000): 201.247 seconds

	sort(1000000): 0.819693 seconds

	insertion_sort(1000000): 20887.42 seconds

Explanation：

The sort function is a C++ built-in function which can sort the number from large to small.
It uses a segmentation method to calculate multiple partitions at the same time which makes the calculation more efficient.

Similarly,the insertion_sort function is also a sorting algorithm.However,its operation is much slower than the sort function since the insertion_sort function uses the insert sorting method that repeatly calculates multiple times.

From the time complexity formula of algorithm,we know that the sort function takes O(n log n) and the insertion_sort function takes O(n
^2).

For the sort function,we can predict that when the number of entries entered is 1000,10000,100000,1000000,the ratio of time they took is 3 : 40 : 500 : 6000 ,which is just in line with the test results.

For the insertion_sort function,on the other sides,we can predict that when the number of entries entered is 1000,10000,100000,1000000,the ratio of time they took is 1 : 100 : 10000 : 1000000 ,which is just in line with the test results.
