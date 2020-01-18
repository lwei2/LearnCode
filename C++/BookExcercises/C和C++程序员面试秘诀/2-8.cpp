Problems:
	说明const 与 #define的特点及区别
	解：#define 只是用来做文本替换的。const常量存在于程序的数据段，并在堆栈分配了空间。const常量是一个Run-Time的概念，它在程序中确实地存在着并可以被调用、传递。const常量有数据类型，而宏常量没有数据类型。编译器对const常量进行类型安全检查.
