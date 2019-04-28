#Install the webbench
## for centos 
1.#install the ctags
2.#wget http://home.tiscali.cz:8080/~cz210552/distfiles/webbench-1.5.tar.gz && tar -xvf webbench-1.5.tar.gz
3.#make && make install
4.#webbench --help
5.webbench -c 并发数 -t 运行测试时间 URL
### problems
1.install -m 644 webbench.1 /usr/local/man/man1,install: 无法创建普通文件"/usr/local/man/man1": 没有那个文件或目录
	# mkdir /usr/local/man && touch /usr/local/man/man1
2.
