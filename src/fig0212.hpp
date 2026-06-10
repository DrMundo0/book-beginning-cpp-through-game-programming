// 头文件保护符（Header Guards）
// 作用：防止头文件被重复包含（Double inlusion）
// 如果宏FIG0212_H未被定义，则定义这个宏，并执行类定义的代码
// 如果后面又有其他文件再次包含了这个头文件，#ifndef条件就会失败，编译器会跳过这段代码，从而避免类被重复定义的编译错误
#ifndef FIG0212_H
#define FIG0212_H

class Fig0212
{
public:
    // 声明公开的静态方法
    static int startup();
};

#endif
