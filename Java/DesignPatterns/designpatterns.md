设计模式之禅

设计原则
1.单一职责原则-Single Responsibility Principle(SRP)
	单一职责原则-There should never be more than one reason for a class to change. (应该有且仅有一个原因引起类的变更。)
	单一职责原则的优点：1.类的复杂度降低，实现什么职责都有清晰明确的定义；
						2.可读性提高，复杂性降低
						3.可维护性提高，可读性提高
						4.变更引起的风险降低，变更是必不可少的。若接口的单一职责做得好，一个接口修改只对相应的实现类有影响，对其他的接口无影响，这对系统的扩展性、维护性都有非常大的帮助。
2.里式替换原则-LiskovSubstitution Principle(LSP)
	里式替换原则-If for each object o1 of type S there is an object o2 of type T such that for all programs P defined in terms of T, the behavior of P is unchanged when o1 is substituted for o2 then S is a subtype of T.（如果每一个类型为S的对象o1，都有类型为T的对象o2，使得以T定义的所有程序P在所有的对象o1都代换成o2时，程序P的行为没有发生变化，那么类型S是类型T的子类型。）
	里式替换原则-Functions that use pointers or references to base classes must be able to use objects of derived classes without knowing it.（所有引用基类的地方必须能透明地使用其子类的对象。）


3.依赖倒置原则

4.接口隔离原则

5.最少知识原则

6.开闭原则


设计模式
1.单例模式-Singleton Pattern
	单例模式-Ensure a class only one instance, and provide a global point of access to it.(确保某一个类只有一个实例，而且自行实例化并向整个系统提供这个实例).
	单例模式的优点：1.由于单例模式在内存中只有一个实例，减少了内存开支，特别是一个对象需要频繁地创建、销毁时，而且创建或销毁时性能又无法优化，单例模式的优势很明显。2.由于单例模式只生成一个实例,所以减少了系统的性能开销。当一个对下你给的产生需要比较多的资源时，如读取配置、产生其他依赖对象时，则可以通过在应用启动时直接产生一个单例对象，然后用永久驻留内存的方法来解决（Java EE中采用单例模式时需要注意JVM垃圾回收机制)。3.单例模式可以避免对资源的多重占用，由于只有一个实例存在内存中，避免对同一个资源的同时写操作。4.单例模式可以在系统设置全局的访问点，优化和共享资源访问。例如可以设计一个单例类，负责所有数据表的映射处理。
	单例模式的缺点：1.单例模式一般没有接口，扩展很困难，若要扩展，除了修改代码基本上没有第二种途径可以实现。2.单例模式对测试不利的。在并行开发环境中，若单例模式没有完成，则是不能进行测试的。没有接口也不能使用mock的方法虚拟一个对象。3.单例模式与单一职责原则有冲突。一个类应该只实现一个逻辑，而不关心它是否是单例的，是不是要单例取决与环境。
	单例模式的使用场景：在一个系统中，要去一个类有且仅有一个对象，若出现多个对象就会出现不良反应，可以采用单例模式。具体场景如：1.要求生成唯一序列号的环境;2.在整个项目中需要一个共享的访问点或共享数据，例如一个Web页面上的计数器，可以不用把每次刷新都记录到数据库中，使用单例模式保持计数器的值，并确保时线程安全的;3.创建一个对象需要消耗的资源过多，若访问IO和数据库等;4.需要定义大量的静态常量和静态方法的环境，可以使用单例模式（当然，也可以直接声明为static的方法）
	单例模式在高并发情况下，需注意线程同步的问题。其次，需要考虑对象的复制情况。


2.工厂办法模式
	工厂办法模式-Define an interface for creating an object, but let subclasses decide which class to instantiate.Factory Method lets a class defer instantiation to subclasses.(定义一个用于创建对象的接口，让子类决定实例哪一个类。工厂方法使一个类的实例化延迟到其子类。)
	工厂办法模式的优点:首先，良好的封装性，代码结构清晰。其次，工厂办法模式的扩展性非常优秀。再次，屏蔽产品类。最后，工厂办法模式是典型的解耦框架。


