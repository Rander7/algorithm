//假如要输入一组数字进行排序，但是不知道有多少个数字
//使用STL中的vector
//在C++标准中，STL被组织为下面的13个头文件：<algorithm>、<deque>、<functional>、<iterator>、<vector>、<list>、<map>、<memory>、<numeric>、<queue>、<set>、<stack>和<utility>。

//#include<iostream>
//#include<vector>//引入vector头文件
//using namespace std;
//
////输入未知长度的数组可以这样写：
//int main()
//{
//	vector<int>array;//元素为int型的容器array
//	int number;
//
//	while (1)
//	{
//		cin >> number;
//		array.push_back(number);
//		//每输入一个数字就把它添加到数组的最后
//		if (cin.get() == '\n')//如果是回车符则跳出循环
//			break;
//
//	}
//
//	int len = array.size();//返回数组长度len
//
//	for (int i = 0; i < len; i++)
//	{
//		cout << array[i] << endl;
//	}
//
//	return 0;
//}


//#include <iostream>//已知长度的
//#include <vector>
//using namespace std;
//
//void main() 
//{
//	int n = 0;
//	cin >> n;
//	vector <int> p(n);
//	for (int i = 0; i < n; i++)  cin >> p[i];
//	for (int i = 0; i < n; i++)  cout << p[i] << endl;
//}



//关于cin的再复习
//cin遇到回车、空格、tab键 结束，但是缓冲区还存在这三个字符，并没有将这三个字符丢弃，
//且指针光标在这三个字符之前，也就是说，下一次通过其他输入函数读取时，是可以读到这三个字符的。


//cin.get 的读取字符规则：
//1.读取字符
//#include<iostream>
//using namespace std;
//int main()
//{
//    int len = 0;
//    cin >> len;
//
//    int j = 0;
//        cin.ignore();//输入了len后的回车留在了缓冲区，下面char数组会读取
//        //cin.ignore将回车符丢弃，程序便能够正常运行
//    while (len)
//    {
//        cout << "len:" << len << endl;
//        char str[100];
//
//        cin.get(str[j]);
//                cin.ignore();//你可以按回车间隔每一个数据
//
//        cout << "str:" << int(str[j]) << '\t';
//        j++;
//        len--;
//    }
//    return 0;
//}


//2 读取字符串
//以回车键结束，读取到前面残留的回车会直接结束，并且指针光标不会跳过回车键，
//当输入3【回车】之后，再次使用cin.get，然后想输入4【回车】是读取不到该输入值的

//但是你不用输入，程序会直接结束，因为前一个输入的回车并没有舍弃，而是在缓冲区，这时读取到的是缓冲区的回车而直接结束。

//#include<iostream>
//using namespace std;
//int main()
//{
//    int len = 0;
//    cin >> len;
//
//    int j = 0;
//        cin.ignore();
//    while (len)
//    {
//        cout << "len:" << len << endl;
//        char str[100];
//        //    输入：jkl jkl jkl
//        //    输出：jkl jkl jkl
//        //    输入：abcdeabcdeabcdeabcdeabcde （输入25个字符）
//        //    输出：abcdeabcdeabcdeabcd              （接收19个字符 + 1个'\0'）
//        cin.get(str, 100);
//                cin.ignore();
//
//        cout << "str:" << str << '\t';
//        j++;
//        len--;
//    }
//    //char str[100];
//    //cin.get(str, 100);
//    //cout << str;
//    return 0;
//}







//cin.getline 的读取字符规则：
//
//读取字符串：回车键结束
//当读到回车键的时候，此次读取结束，会将指针光标移到回车键之后，从而下一次读取的是回车键之后的字符。
//#include<iostream>
//using namespace std;
//int main()
//{
//    int len = 0;
//    cin >> len;
//
//    int j = 0;
//    cin.ignore();
//    while (len)
//    {
//        cout << "len:" << len << endl;
//        char str[100];
//
//        cin.getline(str, 100);
//        //他读取回车之后的字符，所以连续输入多个字符串时候不需要ignore
//        //        cin.ignore();
//
//        cout << "str:" << str << '\t';
//        j++;
//        len--;
//    }
//    return 0;
//}





//#include <iostream>
//using namespace std;
//
//int main()
//{
//    char str1[20] = { NULL }, str2[20] = { NULL };
//    cin.getline(str1, 5);
//    cin.clear();  // 清除错误标志   
//    cin.ignore(numeric_limits<std::streamsize>::max(), '\n'); //清除缓冲区的当前行
//    cin.getline(str2, 20);
//    cout << "str1:" << str1 << endl;
//    cout << "str2:" << str2 << endl;
//    system("pause");
//    return 0;
//}


//也可以用cin.get()判断文件读取结束
//(c =cin.get() )!= EOF



////键盘输出右移问题
////擅于用常量数组简化问题
////这个方法巧妙解决不同操作系统对换行的问题
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//using namespace std;
//char s[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";//常量数组,不需指明大小，编译器会完成运算
////1、在常量数组c中为什么有  \\   这”两个“字符呢？
////实际上我们应该想到转义字符这个概念。不只是在C语言中，在Java、C++中也同样，用 \\ 这个字符（没错，它是一个字符）来表示真正意义上的反斜线即 \ 。
//int main()
//{
//	int i, c;
//	//printf("%d", strlen(s));//数组长度是47，只包含一个'\'
//	while (((c =cin.get() )!= EOF))
//	{
//		for (i = 1; s[i] && s[i] != c; i++);//这tm是；号，假for
//		//找错位后的字符在常量表中的位置，不会出现`QAZ所以输入第一个从i=1开始
//		//这个假for实际上在对i赋值
//		//找到s[i]==c的对应的i,并且s[i]要存在，你最后一次s[47]=='\0'就是结束循环
//		if (s[i])//如果找到输出他的前一个字符
//			cout.put(s[i - 1]);
//		else//没有就输出原来字符，比如?,这个i加到后面超过数组范围就找不到了
//		{
//			cout.put(c);
//			//printf("%d\n", i);//找不到打印的i是47，也就是s[47]=='\0'
//			//其ASCII码值是0，进不了第一个if
//		}
//
//	}
//
//	return 0;
//}




//COUT再认识
//输出连接
//ostream& operator<<(type);
//根据上述函数原型可以知道，返回值是ostream类型的引用，这就可以使得cout << 实现输出连接
//cout << “We have " << count << " unhatched chickens.\n”;

//输出字符cout.put()
//cout << 'W';//在早期发行版本2.0,这个会输出W的ASCII码，当前版本会输出字符W
//cout.put('W');//在早期发行版本2.0,这个会输出W字符，当前版本会输出W字符
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	cout << 'W';//输出字符W
//	cout.put('W');//输出字符W
// 
//	cout << "cout.put()*********************************************************************" << endl;
//	cout.put('W'); // display the W character
//	cout.put('I').put('t'); // displaying It with two put() calls
//	cout.put(65); // display the A character
//	cout.put(66.3); // display the B character
//	cout.put(65); // display the A character
//	cout.put(66.3) << endl; // display the B character
//	return 0;
//}


//输出字符串cout.write()
//第一个参数提供了需要显示的字符串地址，
//第二个参数指示了显示几个字符；cout.write()成员函数不会判断字符串是否结尾，
//指定显示几个字符就显示几个，即使它过界了。
//#include<iostream>
//using namespace std;
//int main()
//{
//
//	cout << "cout.write()*******************************************************************" << endl;
//	const char* state1 = "Florida";
//	const char* state2 = "Kansas";
//	const char* state3 = "Euphoria";
//	int len = std::strlen(state2);
//	cout << "Increasing loop index:\n";
//	int i;
//	for (i = 1; i <= len; i++)
//	{
//		cout.write(state2, i);
//		cout << endl;
//	}
//	// concatenate output
//	cout << "Decreasing loop index:\n";
//	for (i = len; i > 0; i--)
//	cout.write(state2, i) << endl;
//	// exceed string length
//	cout << "Exceeding string length:\n";
//	cout.write(state2, len + 5) << endl;
//
//	long val = 560031841;
//	cout.write((char*)&val, sizeof(long)) << endl;
//	return 0;
//}


//2.6 清空输出缓存
//缓存一般是512bytes或者其倍数。
//在显示器输出时，三种情况可清空缓存
//1.发送一个新行给缓冲器，endl
//2.当输入挂起时
//3.使用工具 flush()函数
//使用方法：flush(cout); 或者cout << flush; (这个重载了 << 操作符)

//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "清空输出缓存*******************************************************************" << endl;
//	cout << "Enter a number: ";
//	float num;
//	cin >> num;
//	cout << "Hello, good-looking! " << flush;
//	cout << "Wait just a moment, please." << endl;
//
//	return 0;
//}




////cout以不同进制显示整数
////1.无法使用二进制显示；
////2.在更改进制显示方式之后，系统默认后面使用该方式显示数据，如果有显示为其他进制形式的需要重新设置进制显示方式
////三种格式：
////hex(cout);
////cout << hex;
////cout.setf(ios_base::dec);
////显示bool类型：
////cout.setf(ios_base::boolalpha);//true显示位true,false显示位false
//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "cout以不同进制显示整数***********************************************************" << endl;
//	/*cout以不同进制显示整数*/
//	int i = 90;
//	cout << "以十进制显示i：" << dec << i << endl;//以十进制显示
//	cout << "以八进制显示i：" << oct << i << endl;//以八进制显示
//	cout << "以16进制显示i：" << hex << i << endl;//以16进制显示
//	//如需更改为十进制显示方式，则可以使用以下方式
//	cout.setf(ios_base::dec);
//	cout << "以十进制显示i：" << i << endl << endl;
//	/*bool数据类型显示*/
//	cout << "bool数据类型显示" << endl;
//	bool is_true = true;
//	cout.setf(ios_base::boolalpha);//可以显示为true或false
//	cout << "is_true = " << is_true << endl;
//	is_true = false;
//	cout << "is_true = " << is_true << endl << endl;
//
//	return 0;
//}


////
////设置当前字段宽度cout.width()
////两种原型：
////int width();//返回当前字段宽度
////int width(int i);//将字段宽度设置为i,并且返回之前的字符宽度，以备返回上一步的字段宽度。
////使用格式：
////cout << width(长度);
////注意事项：
////1.width()只影响下一次的cout，然后字段宽度将恢复默认值
////2.显示为右对齐，多余的字段位置将使用空格填充
////3.C++不会截断数据，因此如果视图在宽度为2个字段中打印一个7位数，C++将增宽字段，以容纳该数据。
//#include<iostream>
//using namespace std;
//int main()
//{
//    cout << "width()***************************************************************************" << endl;
//    int w = cout.width(30);
//    cout << "default field width = " << w << ":\n";
//    cout.width(5);
//    cout << "N" << ':';
//    cout.width(8);
//    cout << "N * N" << ":\n";
//    for (long i = 1; i <= 100; i *= 10)
//    {
//        cout.width(5);
//        cout << i << ':';
//        cout.width(8);
//        cout << i * i << ":\n";
//    }
//    cout.width(5);
//    cout << 9.888889999 << endl;//将不会截断
//
//    return 0;
//}



////更改填充字符cout.fill()
//#include<iostream>
//using namespace std;
//int main()
//{
//    cout << "更改填充字符****************************************************************************" << endl;
//    cout.fill('*');
//    const char* staff[2] = { "Waldo Whipsnade", "Wilmarie Wooper" };
//    long bonus[2] = { 900, 1350 };
//    for (int i = 0; i < 2; i++)
//    {
//        cout << staff[i] << ": $";
//        cout.width(7);
//        cout << bonus[i] << "\n";
//    }
//
//	return 0;
//}



////更改浮点数显示精度cout.precision()
////默认情况下是显示六位有效数字；可以使用precision()设置精度；
////cout.precision(2);
////注意事项：
////1.在设置精度后，后面会一直使用这个精度直到下一次更改精度
////2.当有效数字位数小于整数有效数字位数时，使用科学计数法显示
//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "设置小数显示精度：precision()***********************************************************" << endl;
//	double j = 3333.1415926;
//	/*设置显示有效数字位数*/
//	cout << "默认情况显示(6位)：" << j << endl;//输出浮点数时，默认情况下保留六位有效数字
//	cout.precision(9);//可以使用cout.precision(n)设置输出浮点数时保留n位有效数字
//	cout << "设置有效数字位数为9位时：" << j << endl;
//	cout.precision(3);//当有效数字位数小于整数有效数字位数时，使用科学计数法显示
//	cout << "设置有效数字位数为3位时：" << j << endl << endl;
//
//	return 0;
//}




//保留小数位要么用printf()函数，要么用cout语句。
//例题：
//读入一个单精度浮点数，保留5位小数输出这个浮点数。
//
//printf的是这样用的：
//#include <cstdio>
//using namespace std;
//int main() {
//	float a;
//	scanf("%f", &a);
//	printf("%0.5f", a);
//}

//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main() {
//	float a;
//	cin >> a;
//	cout << fixed << setprecision(5) << a;
//}

//cout 输出控制小数位，需要头文件#include <iomanip>
//
// setprecision()来用来保存有效数字默认是6位
//setprecision()来用来保存有效数字，fixed和setprecision（）一起用就变成保存小数点后有效数字。
//fixed有个地方需要注意的是可以保存的有效数字包括0，不开fixed的话，即使保存3个有效数字，小数点后的0也会自动省略。
//double b = 1.20001;
//cout << setprecision(2) << b << endl;         //输出结果为1.2





//
///*

//Descriptions:			cout的常用用法
//*/
//#include <iostream>
//#include <iomanip>
//#include <cmath>
//
//int main()
//{
//	using namespace std;//将命名空间std的所有名字都引用了
//	cout << "输出与指针*********************************************************************" << endl;
//	int eggs = 12;
//	const char* amount = "dozen";
//	cout << &eggs; // prints address of eggs variable
//	cout << amount; // prints the string "dozen"
//	cout << (void*)amount; // prints the address of the "dozen" string
//	cout << "输出连接***********************************************************************" << endl;
//	cout << "We have " << eggs << " unhatched chickens.\n";
//	cout << "cout.put()*********************************************************************" << endl;
//	cout.put('W'); // display the W character
//	cout.put('I').put('t'); // displaying It with two put() calls
//	cout.put(65); // display the A character
//	cout.put(66.3); // display the B character
//	cout.put(65); // display the A character
//	cout.put(66.3) << endl; // display the B character
//	cout << "cout.write()*******************************************************************" << endl;
//	const char* state1 = "Florida";
//	const char* state2 = "Kansas";
//	const char* state3 = "Euphoria";
//	int len = std::strlen(state2);
//	cout << "Increasing loop index:\n";
//	int i;
//	for (i = 1; i <= len; i++)
//	{
//		cout.write(state2, i);
//		cout << endl;
//	}
//	// concatenate output
//	cout << "Decreasing loop index:\n";
//	for (i = len; i > 0; i--)
//		cout.write(state2, i) << endl;
//	// exceed string length
//	cout << "Exceeding string length:\n";
//	cout.write(state2, len + 5) << endl;
//
//	long val = 560031841;
//	cout.write((char*)&val, sizeof(long)) << endl;
//	cout << "清空输出缓存*******************************************************************" << endl;
//	cout << "Enter a number: ";
//	float num;
//	cin >> num;
//	cout << "Hello, good-looking! " << flush;
//	cout << "Wait just a moment, please." << endl;
//	cout << "cout针对不同数据类型的输出格式***************************************************" << endl;
//	cout << "12345678901234567890\n";
//	char ch = 'K';
//	int t = 273;
//	cout << ch << ":\n";
//	cout << t << ":\n";
//	cout << -t << ":\n";
//	double f1 = 1.200;
//	cout << f1 << ":\n";
//	cout << (f1 + 1.0 / 9.0) << ":\n";
//	double f2 = 1.67E2;
//	cout << f2 << ":\n";
//	f2 += 1.0 / 9.0;
//	cout << f2 << ":\n";
//	cout << (f2 * 1.0e4) << ":\n";
//	double f3 = 2.3e-4;
//	cout << f3 << ":\n";
//	cout << f3 / 10 << ":\n";
//	cout << "cout以不同进制显示整数***********************************************************" << endl;
//	/*cout以不同进制显示整数*/
//	i = 90;
//	cout << "以十进制显示i：" << dec << i << endl;//以十进制显示
//	cout << "以八进制显示i：" << oct << i << endl;//以八进制显示
//	cout << "以16进制显示i：" << hex << i << endl;//以16进制显示
//	//如需更改为十进制显示方式，则可以使用以下方式
//	cout.setf(ios_base::dec);
//	cout << "以十进制显示i：" << i << endl << endl;
//	/*bool数据类型显示*/
//	cout << "bool数据类型显示" << endl;
//	bool is_true = true;
//	cout.setf(ios_base::boolalpha);//可以显示为true或false
//	cout << "is_true = " << is_true << endl;
//	is_true = false;
//	cout << "is_true = " << is_true << endl << endl;
//	cout << "width()***************************************************************************" << endl;
//	int w = cout.width(30);
//	cout << "default field width = " << w << ":\n";
//	cout.width(5);
//	cout << "N" << ':';
//	cout.width(8);
//	cout << "N * N" << ":\n";
//	for (long i = 1; i <= 100; i *= 10)
//	{
//		cout.width(5);
//		cout << i << ':';
//		cout.width(8);
//		cout << i * i << ":\n";
//	}
//	cout.width(5);
//	cout << 9.888889999 << endl;//将不会截断
//	cout << "更改填充字符****************************************************************************" << endl;
//	cout.fill('*');
//	const char* staff[2] = { "Waldo Whipsnade", "Wilmarie Wooper" };
//	long bonus[2] = { 900, 1350 };
//	for (int i = 0; i < 2; i++)
//	{
//		cout << staff[i] << ": $";
//		cout.width(7);
//		cout << bonus[i] << "\n";
//	}
//	cout << "设置小数显示精度：precision()***********************************************************" << endl;
//	double j = 3333.1415926;
//	/*设置显示有效数字位数*/
//	cout << "默认情况显示(6位)：" << j << endl;//输出浮点数时，默认情况下保留六位有效数字
//	cout.precision(9);//可以使用cout.precision(n)设置输出浮点数时保留n位有效数字
//	cout << "设置有效数字位数为9位时：" << j << endl;
//	cout.precision(3);//当有效数字位数小于整数有效数字位数时，使用科学计数法显示
//	cout << "设置有效数字位数为3位时：" << j << endl << endl;
//	cout << "ios_base成员函数setf()的使用***********************************************************" << endl;
//	cout << "一个参数的setf()：********************************" << endl;
//	int temperature = 63;
//	cout << "Today's water temperature: ";
//	cout.setf(ios_base::showpos); // show plus sign
//	cout << temperature << endl;
//	cout << "For our programming friends, that's\n";
//	cout << std::hex << temperature << endl; // use hex
//	cout.setf(ios_base::uppercase); // use uppercase in hex
//	cout.setf(ios_base::showbase); // use 0X prefix for hex
//	cout << "or\n";
//	cout << temperature << endl;
//	cout << "How " << true << "! oops -- How ";
//	cout.setf(ios_base::boolalpha);
//	cout << true << "!\n";
//	cout << "两个参数的setf()：*********************************" << endl;
//	cout << dec;
//	// use left justification, show the plus sign, show trailing
//	// zeros, with a precision of 3
//	cout.fill(' ');
//	cout.setf(ios_base::left, ios_base::adjustfield);
//	cout.setf(ios_base::showpos);
//	cout.setf(ios_base::showpoint);
//	cout.precision(3);
//	// use e-notation and save old format setting
//	ios_base::fmtflags old = cout.setf(ios_base::scientific,
//		ios_base::floatfield);
//	cout << "Left Justification:\n";
//	long n;
//	for (n = 1; n <= 41; n += 10)
//	{
//		cout.width(4);
//		cout << n << "|";
//		cout.width(12);
//		cout << sqrt(double(n)) << "|\n";
//	}
//	// change to internal justification
//	cout.setf(ios_base::internal, ios_base::adjustfield);
//	// restore default floating-point display style
//	cout.setf(old, ios_base::floatfield);
//	cout << "Internal Justification:\n";
//	for (n = 1; n <= 41; n += 10)
//	{
//		cout.width(4);
//		cout << n << "|";
//		cout.width(12);
//		cout << sqrt(double(n)) << "|\n";
//	}
//	// use right justification, fixed notation
//	cout.setf(ios_base::right, ios_base::adjustfield);
//	cout.setf(ios_base::fixed, ios_base::floatfield);
//	cout << "Right Justification:\n";
//	for (n = 1; n <= 41; n += 10)
//	{
//		cout.width(4);
//		cout << n << "|";
//		cout.width(12);
//		cout << sqrt(double(n)) << "|\n";
//	}
//	cout << "unsetf()：*********************************" << endl;
//	cout << boolalpha;
//	cout << true << endl;
//	cout.unsetf(ios_base::boolalpha); // display 1, 0
//	cout << true << endl;
//	//将小数显示模式设置为默认状态，默认状态即为混合模式和科学计数法模式都未设置
//	cout.setf(0, ios_base::floatfield); // go to default mode
//	cout << "iomanip头文件************************************************************************" << endl;
//	cout << noshowpos;
//	// use new standard manipulators
//	cout << fixed << right;
//	// use iomanip manipulators
//	cout << setw(6) << "N" << setw(14) << "square root"
//		<< setw(15) << "fourth root\n";
//	double root;
//	for (int n = 10; n <= 100; n += 10)
//	{
//		root = sqrt(double(n));
//		cout << setw(6) << setfill('.') << n << setfill(' ')
//			<< setw(12) << setprecision(3) << root
//			<< setw(14) << setprecision(4) << sqrt(root)
//			<< endl;
//	}
//
//	return 0;
//}





//位操作符
//判断奇偶性（强推！！效率更高！）
//a & 1 = 0 偶数
//a & 1 = 1 奇数

//右移运算符（>>）
//按二进制形式把所有的数字向右移动对应位移位数，低位移出(舍弃)
//，高位的空位补符号位，即正数补0，负数补1。

//无符号右移运算符（>>>）
//按二进制形式把所有的数字向右移动对应位数，低位移出(舍弃)
//，高位的空位补零。对于正数来说和带符号右移（>>） 相同，但是对于负数来说不同。


//异或的特性：任意数和自身异或结果为0；0和任意数异或结果还是其本身。 
//有一个数据列表（2N+1个整数），只有一个数出现了1次，其余N个数都出现了2次。如何找到这个独一无二的数据？

//找出大于等于v的最小的2的倍数
//v--
//v |= v >> 1
//v |= v >> 2
//v |= v >> 4
//v |= v >> 8
//v |= v >> 16
//v++

//v=8
//1000
//v--         0111
//v |= v >> 1     0111
//v |= v >> 2     0111
//v |= v >> 4     0111
//v |= v >> 8     0111
//v |= v >> 16    0111
//v++         1000

//v=9
//1001
//v--         1000
//v |= v >> 1     1100
//v |= v >> 2     1111
//v |= v >> 4     1111
//v |= v >> 8     1111
//v |= v >> 16    1111
//v++         1 0000


//#include <stdio.h>
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	int a[105] = { 0 };
//	int b[105] = { 0 };
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &a[i]);
//	}
//	for (int i = 0; i < n; i++) {
//		int cnt = 0;
//		for (int j = 0; j < n; j++) {
//			if (a[i] > a[j]) {
//				cnt++;
//			}
//		}
//		b[i] = cnt;
//	}
//	for (int i = 0; i < n; i++) {
//		int count = 0;
//		for (int j = 0; j < n; j++) {
//			if (b[j] == i) {
//				count++;
//			}
//		}
//		if (count > 1) {
//			for (int k = 0; k < n; k++) {
//				if (b[k] > i) {
//					int time = count;
//					while (--time) {
//						b[k]--;
//					}
//				}
//			}
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		printf("%d ", b[i] + 1);
//	}
//}


//
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	int a[105];
//	int b[105]={0};
//	for (int i = 0; i < n; i++)
//	{
//		scanf_s("%d", &a[i]);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		int count = 0;
//		for (int j = 0; j < n; j++)
//		{
//			if (a[i] > a[j])
//			{
//				count++;
//			}
//		}
//		b[i] = count;
//	}
//	int count=0;
//	for (int i = 0; i < n; i++)
//	{
//		int flag = 0;
//		for (int j = 0; j < n; j++)
//		{
//			if (b[j] == i)
//			{
//				b[j] -= count;
//				flag = 1;
//			}
//		}
//		if (flag == 0) count++;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", b[i]+1);
//	}
//	return 0;
//}