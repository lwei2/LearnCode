# socket编程

## socket编程简单介绍
	在计算机通信领域中，socket又称为套接字，它是计算机之间进行通信的一种方式，实现了数据交互。

## socket编程常用的函数
1.创建套接字:
    int socket(int domain, int type, int protocol);
    参数解析:domain-地址族
             type-数据传输的方式
             protocol-表示传输的协议
    函数返回值:若成功，则返回新的socket文件描述符，若失败，则返回-1,并设置对应的ERRORS信息。
2.绑定函数:
    int bind(int sockfd, const struct sockaddr *addr, socklen_t addrlen);
    参数解析:sockfd-socket文件描述符
             addr-sockaddr结构体指针
             addrlen-sockaddr结构体指针的大小
    函数返回值:若成功，则返回0，若失败，则返回-1,并设置对应的ERRORS信息。
3.连接函数:
    int connnect(int sockfd, struct sockaddr *addr, socklen_t addrlen);
    参数解析:sockfd-socket文件描述符
             addr-sockaddr结构体指针
             addrlen-sockaddr结构体指针的大小
    函数返回值:若成功，则返回0，若失败，则返回-1，并设置对应的ERRORS信息。
4.监听函数:
    int listen(int sockfd, int backlog);
    参数解析:sockfd-进入监听状态的套接字
             backlog-请求队列的最大长度
    函数返回值:若成功，则返回0，若失败，则返回-1，并设置对应的ERRORS信息。
5.接收函数:
    int accept(int sockfd, struct sockaddr *addr, socklen_t addrlen);
    参数解析:sockfd-socket文件描述符
             addr-sockaddr结构体指针
             addrlen-sockaddr结构体指针的大小
    函数返回值:若成功，则返回一个接收套接字的文件描述符，若失败，则返回-1，并设置相应的ERRORS信息。
6.写函数:
    ssize_t write(int fd,const void* buf,size_t count);
    参数解析:fd-要写入的文件描述符
             buf-要写入数据的缓冲区地址
             count-要写入数据的字节数
    函数返回值:若成功，则返回写入的字节数，若失败，则返回-1，并设置相应的ERRORS信息。
7.读函数:
    ssize_t read(int fd, void* buf, size_t count);
    参数解析:fd-要读取的文件描述符
             buf-要接收数据的缓冲区地址
             count-要读取的数据的字节数
    函数返回值:若成功，则返回读取的字节数，若失败，则返回-1，并设置相应的ERRORS信息。
8.关闭套接字:
    int close(int sockfd);


## 关于socket的请求队列
    当套接字正在处理客户端请求时，如果有新的请求进来，套接字是没法处理的，只能把它放进缓冲区，待当前请求处理完毕后，再从缓冲区中读取出来处理。如果不断有新的请求进来，它们就按照先后顺序在缓冲区中排队，直到缓冲区满。这个缓冲区，就称为请求队列。

## socket缓冲区 
    每个 socket 被创建后，都会分配两个缓冲区，输入缓冲区和输出缓冲区。
    write()/send() 并不立即向网络中传输数据，而是先将数据写入缓冲区中，再由TCP协议将数据从缓冲区发送到目标机器。一旦将数据写入到缓冲区，函数就可以成功返回，不管它们有没有到达目标机器，也不管它们何时被发送到网络，这些都是TCP协议负责的事情。
    TCP协议独立于 write()/send() 函数，数据有可能刚被写入缓冲区就发送到网络，也可能在缓冲区中不断积压，多次写入的数据被一次性发送到网络，这取决于当时的网络情况、当前线程是否空闲等诸多因素，不由程序员控制。
    read()/recv() 函数也是如此，也从输入缓冲区中读取数据，而不是直接从网络中读取。
    输入/输出缓冲区特性:
    （1）I/O缓冲区在每个TCP套接字中单独存在；
    （2）I/O缓冲区在创建套接字时自动生成；
    （3）即使关闭套接字也会继续传送输出缓冲区中遗留的数据；
    （4）关闭套接字将丢失输入缓冲区中的数据。
    一般情况下输入输出缓冲区默认大小是8k,可以通过getsockopt()函数获取。

    TCP是一种面向连接的，可靠的，基于字节流的通讯协议，数据在传输前要建立连接，传输完毕后要断开连接。


    三次握手的过程如下:
    1.建立连接，客户端发送syn包到服务器，并进入SYN_SENT(请求连接)状态，等待服务器确认。
    2.服务器受到syn包，必须确认客户端的SYN包，并发送一个SYN包，即SYN+ACK包，服务器进入SYN_RECV状态。
    3.客户端收到服务器的SYN+ACK包，向服务器发送确认包ACK，此包发送完毕，客户端和服务器进入ESTABLISHED(TCP连接成功)状态，完成三次握手。




服务器：1.创建套接字；2.绑定IP和端口；3.监听并等待用户请求；4.接受请求并发送数据；5.关闭套接字。
客户端：1.创建套接字；2.连接服务器并发请求；3.读取服务器传回的数据；4.关闭套接字。

