#QString class
	QString类提供了一个Unicode字符串。
	QString存储一个16位QChar字符串，其中每个QChar对应一个UTF-16代码单元。(编码值在65535以上的Unicode字符使用代理项对存储，即，连续两个qchar)
Unicode是一种支持当今使用的大多数编写系统的国际标准。它是US-ASCII (ANSI X3.4-1986)和Latin-1 (ISO 8859-1)的超集，所有US-ASCII/Latin-1字符都可以在相同的代码位置上使用。
在幕后，QString使用隐式共享(即写即拷)来减少内存使用并避免不必要的数据复制。这还有助于减少存储16位字符而不是8位字符的固有开销。
除了QString, Qt还提供了QByteArray类来存储原始字节和传统的以“\0”结尾的8位字符串。在大多数情况下，QString是您想要使用的类。它在整个Qt API中都使用，并且Unicode支持确保了如果您希望在某种程度上扩展应用程序的市场，您的应用程序将易于转换。QByteArray适合的两种主要情况是:需要存储原始二进制数据时，以及内存保护非常关键时(比如在嵌入式系统中)。
#QString function
