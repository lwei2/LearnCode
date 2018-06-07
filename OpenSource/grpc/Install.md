gRPC安裝
1.#sudo apt-get install build-essential autoconf libtool curl git
2.#git clone https://github.com/grpc/grpc.git
3.#cd grpc
4.#git submodule update --init
5.#cd third_party/protobuf/
6.#./autogen.sh
7.#./configure --prefix=/data/bin/protobuf/protobuf-dev
8.#make -j4
9.#sudo make install
10.执行如下命令：
	# cd ../../
	# export PKG_CONFIG_PATH=/data/bin/protobuf/protobuf-dev/lib/pkgconfig:/data/bin/grpc/grpc-dev/lib/pkgconfig
	# export PATH=/data/bin/protobuf/protobuf-dev/bin:/data/bin/grpc/grpc-dev/bin:$PATH
	# export LD_LIBRARY_PATH=/data/bin/protobuf/protobuf-dev/lib:/data/bin/grpc/grpc-dev/lib
	# EXTRA_LDFLAGS=-L/data/bin/protobuf/protobuf-dev/lib CONFIG=dbg make prefix=/data/bin/grpc/grpc-dev -j4
	# sudo CONFIG=dbg make prefix=/data/bin/grpc/grpc-dev install
	若gRPC程序即使在编译连接后依然输出DEBUG信息，如果不需要此信息，可以将最后两行修改为如下：
		# EXTRA_LDFLAGS=-L/data/bin/protobuf/protobuf-dev/lib make -j4
		# make prefix=/data/bin/grpc/grpc-dev install

仅作参考
库名称		源码位置(git仓库)	安装位置
Protocol 	Buffers				/data/src/grpc/third_party/protobuf	/data/bin/protobuf/protobuf-dev
gRPC		/data/src/grpc		/data/bin/grpc/grpc-dev
