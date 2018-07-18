


pid_t fork(void)
	返回值: 在父进程中，fork返回新创建子进程的进程ID;
			在子进程中，fork返回0;
			若出错，fork返回负值(-1).
