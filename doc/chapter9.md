## 9章

```c
class Super
{
 public:
	Super();
	void someMethod();
 protected:
	int mProtectedInt;
 private:
	int mPrivateInt;
};

class Sub: public Super
{
 public:
	Sub();
	void someOtherMethod();
};
```
* 指向某个对象的指针或者引用可以指向声明类的对象，也可以指向任意派生类的对象,但是不能通过Super指针调用Sub类的方法
```c
Super* superptr = new Sub();//正确

superptr->someOtherMethod(); //错误
```
* 派生类可以访问基类的public\protected方法和数据成员
* final 表示禁用继承
```c
class Super final//Super不能继承
```
* 将基类的函数前面添加virtual关键字可以重写该函数
```c
class Super
{
 public:
	Super();
	virtual void someMethod();
 protected:
	int mProtectedInt;
 private:
	int mPrivateInt;
};

class Sub: public Super
{
 public:
	Sub();
	virtual void someMethod() override;
	void someOtherMethod();
};
```
* 重写之后，不影响基类的对象调用虚函数

* 指针或者引用的对象可以处理派生类的特征信息，非指针非引用无法处理派生类的特征信息
```c
Sub mySub;

Super& ref1 = mySub;
Super ref2 = mySub;

ref1.someMethod();//正确

ref2.someMethod();//错误

```
* final 表示禁用重写
```c
class Super
{
 public:
	Super();
	virtual void someMethod() final;
 protected:
	int mProtectedInt;
 private:
	int mPrivateInt;
};
```
* 创建顺序：（1）执行基类的默认构造函数，（2）类的非静态数据成员安装生命顺序创建，（3）执行该类的构造函数如[代码](../chapter9/chapter9.cpp)所示 

* 没有默认构造函数的的Super版本，Sub必须显示的告诉如何调用Super的构造函数
```c
class Super
{
 public:
	Super(int i);
};

class Sub: public Super
{
 public:
	Sub();
	virtual void someMethod() override;
	void someOtherMethod();
};

Sub::Sub() :Super(7)
{

}

```

* 析构顺序：（1）调用类的析构函数 （2）销毁类的数据成员，与创建顺序相反，（3）调用父类的析构函数
* 纯虚函数方法
```c
class SpreadsheetCell
{
 public:
	SpreadsheetCell();
	virtual void set(const std::string & instring) = 0;
	virtual std::string getString() const =0;
}
```


