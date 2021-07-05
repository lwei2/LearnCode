# QRegExp class - QRegExp
	QRegExp类使用正则表达式提供模式匹配。
	> 正则表达式，或“regexp”，是用于匹配文本中的子字符串的模式。这在很多情况下都很有用，例如: 验证regexp可以测试子字符串是否满足某些条件，例如是整数或不包含空格。搜索regexp提供了比简单的子字符串匹配更强大的模式匹配，例如，匹配单词mail、letter或correspondence中的一个，但不匹配单词email、mailman、mailer、letterbox等。
	> 搜索和替换。regexp可以用不同的子字符串替换所有出现的子字符串，例如，将所有出现的&替换为&amp;除非&已经跟在amp;后面。
	> 字符串分割。regexp可用于标识应该在何处拆分字符串，例如拆分以制表符分隔的字符串。
	本文简要介绍了regexp，描述了Qt的regexp语言，一些示例，以及函数文档本身。QRegExp是根据Perl的regexp语言建模的。它完全支持Unicode。QRegExp还可以以一种更简单的通配符模式使用，这种模式类似于命令shell中的功能。QRegExp使用的语法规则可以使用setPatternSyntax()更改。特别是，模式语法可以设置为QRegExp::FixedString，这意味着要匹配的模式被解释为普通字符串，也就是说，特殊字符(例如，反斜杠)不会被转义。
	Jeffrey E. F. Friedl的《掌握正则表达式(第三版)》是关于regexp的一篇好文章，ISBN 0-596-52812-4。
	注意:在Qt 5中，新的qregulareexpression类提供了一个Perl兼容的正则表达式实现，并被推荐代替QRegExp。
	header:	#include <QRegExp>
	qmake : QT += core
	注意：该类的所有函数都是可重入。
## Public Types - 公有类型
	enum CaretMode { CaretAtZero, CaretAtOffset, CaretWontMatch }
	enum PatternSyntax { RegExp, RegExp2, Wildcard, WildcardUnix, FixedString, W3CXmlSchema11 }
## Public Functions - 公有函数
	1.QRegExp(const QRegExp &rx);
		-函数功能：构造带有给定父类的新file对象，以表示具有指定名称的文件。
		-函数参数：name-文件名， parent-父类
		-函数返回值：无
	2.QRegExp(const QString &pattern, Qt::CaseSensitivity cs = Qt::CaseSensitive, QRegExp::PatternSyntax syntax = RegExp);
	3.QRegExp()
	4.QRegExp &operator=(QRegExp &&other)
	5.QRegExp &operator=(const QRegExp &rx)
	6.~QRegExp();
	7.QString cap(int nth = 0) const;
	8.int captureCount() const
	9.QStringList capturedTexts() const
	10.Qt::CaseSensitivity caseSensitivity() const
	11.QString errorString() const
	12.bool exactMatch(const QString &str) const
	13.int indexIn(const QString &str, int offset = 0, QRegExp::CaretMode caretMode = CaretAtZero) const
	14.bool isEmpty() const;
	15.bool isMinimal() const;
	16.bool isValid() const;
	17.int lastIndexIn(const QString &str, int offset = -1, QRegExp::CaretMode caretMode = CaretAtZero) const;
	18.int matchedLength() const;
	19.QString pattern() const;
	20.QRegExp::PatternSyntax patternSyntax() const;
	21.int pos(int nth = 0) const
	22.void setCaseSensitivity(Qt::CaseSensitivity cs);
	23.
	24.








void 
setMinimal(bool minimal)
void 
setPattern(const QString &pattern)
void 
setPatternSyntax(QRegExp::PatternSyntax syntax)
void 
swap(QRegExp &other)
bool 
operator!=(const QRegExp &rx) const


