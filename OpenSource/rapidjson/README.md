#RapidJSON
1.rapidjson安装
	rapidjson:	https://github.com/Tencent/rapidjson.git
	rapidjson教程:	http://rapidjson.org/zh-cn/md_doc_tutorial_8zh-cn.html
	1).git submodule update --init;
	2).mkdir build for rapidjson;
	3).cd build and cmake ..
	4).
	5).#make && make install
2.Rapidjson简介
	Rapidjson 是一个 C++ 的快速 JSON 解析器和生成器，使用 SAX/DOM 风格的 API 设计。
	RapidJSON是一个C++的JSON解析器及生成器。它的灵感来自RapidXml。
	RapidJSON小而全。它同时支持SAX和DOM风格的API。SAX解析器只有约500行代码。
	RapidJSON快。它的性能可与strlen()相比。可支持SSE2/SSE4.1加速。
	RapidJSON独立。它不依赖于BOOST等外部库。它甚至不依赖于STL。
	RapidJSON对内存友好。在大部分32/64位机器上，每个JSON值只占16或20字节（除字符串外）。它预设使用一个快速的内存分配器，令分析器可以紧凑地分配内存。
	RapidJSON对Unicode友好。它支持UTF-8、UTF-16、UTF-32 (大端序／小端序)，并内部支持这些编码的检测、校验及转码。例如，RapidJSON可以在分析一个UTF-8文件至DOM时，把当中的JSON字符串转码至UTF-16。它也支持代理对（surrogate pair）及\u0000（空字符）。
