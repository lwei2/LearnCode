Problems:	对vector的理解及实现细节	
	解：vector内部是使用动态数组的方式实现的。如果动态数组的内存不够用，就要动态地重新分配，一般是当前大小的两倍，然后把原数组的内容拷贝过去，所以，一般情况下，其访问速度同一般数组，只有在重新分配发生时，其性能才会下降。它内部使用allocator类进行内存管理，程序员不需要自己操作内存。
