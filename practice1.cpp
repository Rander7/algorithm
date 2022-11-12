////3、设计一个计算器程序，对输入的二个数能进行：+、-、*、/、%运算。
////如输入：3+2，输出：3+2=5，如输入：3/2，输出：3/2=1。
//#include<iostream>
//#include<string>
//using namespace std;
//
//class AbstractCalculator
//{
//public:
//    virtual int getresult()
//    {
//        return 0;
//    }
//
//    int m_num1;
//    int m_num2;
//};
//
//class AddCalculator :public AbstractCalculator
//{
//public:
//    virtual int getresult()
//    {
//        return m_num1 + m_num2;
//    }
//};
//class SubCalculator :public AbstractCalculator
//{
//public:
//    virtual int getresult()
//    {
//        return m_num1 - m_num2;
//    }
//};
//class MulCalculator :public AbstractCalculator
//{
//public:
//    virtual int getresult()
//    {
//        return m_num1 + m_num2;
//    }
//};
//class DivCalculator :public AbstractCalculator
//{
//public:
//    virtual int getresult()
//    {
//        return m_num1 + m_num2;
//    }
//};
//
//int main()
//{
//    cout << "Please input a formula" << endl;
//    int a, b;
//    char t;
//    cin >> a >> t >> b;
//    AbstractCalculator* c = NULL;
//    switch (t)
//    {
//    case '+':
//        c = new AddCalculator();
//        c->m_num1 = a;
//        c->m_num2 = b;
//        cout << c->m_num1 << "+" << c->m_num2 << "=" << c->getresult() << endl;
//        //delete c;
//        break;
//    case '-':
//        c = new SubCalculator();
//        c->m_num1 = a;
//        c->m_num2 = b;
//        cout << c->m_num1 << "-" << c->m_num2 << "=" << c->getresult() << endl;
//        //delete c;
//        break;
//    case '*':
//        c = new MulCalculator();
//        c->m_num1 = a;
//        c->m_num2 = b;
//        cout << c->m_num1 << "*" << c->m_num2 << "=" << c->getresult() << endl;
//        //delete c;
//        break;
//    case '/':
//        c = new DivCalculator();
//        c->m_num1 = a;
//        c->m_num2 = b;
//        cout << c->m_num1 << "/" << c->m_num2 << "=" << c->getresult() << endl;
//        //delete c;
//        break;
//
//    default:
//        break;
//    }
//    delete c;
//    return 0;
//}

//
//#include<iostream>
//#include<vector>
//using namespace std;

//void shellsort(vector<int>& arr, int len)
//{
//	if (len <= 1)
//		return;
//	int gap = 1;
//	while (gap < len / 3)
//	{
//		gap = gap * 3 + 1;
//	}
//	while (gap >= 1)
//	{
//		for (int i = gap; i < len; i++)
//		{
//			for (int j = i; j >= gap && arr[j] > arr[j - gap]; j -= gap)
//			{
//				int temp = arr[j];
//				arr[j] = arr[j - gap];
//				arr[j - gap] = temp;
//
//			}
//		}
//		gap = gap / 3;
//	}
//
//
//}
//
//void insertsort(vector<int>& arr, int len)
//{
//	for (int i = 1; i < len; i++)
//	{
//		for (int j = i; j > 0 && arr[j] > arr[j - 1]; j--)
//		{
//			int temp = arr[j];
//			arr[j] = arr[j - 1];
//			arr[j - 1] = temp;
//		}
//	}
//}
//
//
//int main()
//{
//	vector<int>array;
//	int number;
//	while (1)
//	{
//		cin >> number;
//		array.push_back(number);
//		if (cin.get() == '\n')
//			break;
//
//	}
//	int len = array.size();
//	insertsort(array, len);
//	//shellsort(array, len);
//	
//	for (int i = 0; i < len; i++)
//	{
//		cout << array[i] << " ";
//	}
//
//	return 0;
//}



//
////回文词
//#define  _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//#include<stdio.h>
//#include<string.h>
//#include<ctype.h>//字符操作头文件
////字符串本质就是第一个字符的地址
////%s通过字符串首地址输出整个字符串
//const char* rev = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
////char* rev只是一个保存字符串首地址的指针变量
////rev中存放该字符串的首地址
//const char* msg[] = { "not a palindrome","a regular palindrome","a mirrored string","a mirrored palindrome" };
////其数组元素都是char *指针，这4个元素保存4个内存地址，msg[0]中是"not a palindrome"的地址
//char r(char ch)
//{
//	if (isalpha(ch))//如果是字符
//		return rev[ch - 'A'];
//	return rev[ch - '0' + 25];//前26是大写字母,后10是数字
//}
//
//int main()
//{
//	char s[30];
//	while (cin>>s)
//	{
//		int len = strlen(s);
//		int p = 1, m = 1;
//		for (int i = 0; i < (len + 1) / 2; i++)
//		{
//			if (s[i] != s[len - 1 - i])
//				p = 0;//不是回文串
//			if(r(s[i])!=r(s[len-1-i]))
//				m=0;//不是镜像串
//
//		}
//
//		//printf("%s -- is %s.\n\n", s, msg[m * 2 + p]);
//		cout << s << " -- is " << msg[m * 2 + p] << endl << endl;
//	}
//
//	return 0;
//}


//#define  _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//#include<stdio.h>
//#define maxn 1010
//
//int main()
//{
//	int n, a[maxn], b[maxn];
//	int kase = 0;
//	while (cin>>n && n)//n==0时输入结束
//	{
//		printf("Game %d:\n", ++kase);//第几次游戏
//		for (int i = 0; i < n; i++)
//			cin >> a[i];//输入答案序列
//		while(1)//一直循环输入猜测序列，直到if判断break跳出
//		{
//			int A = 0, B = 0;
//			for (int i = 0; i < n; i++)
//			{
//				cin >> b[i];
//				if (a[i] == b[i])
//					A++;//位置相同的数字数目
//			}
//
//			if (b[0] == 0)
//				break;//正常猜测序列没有0，只判断第一个数是不是0就可以，猜测序列结束
//			for (int d = 1; d <= 9; d++)
//			{
//				int c1 = 0, c2 = 0;//统计数字d在答案序列和猜测序列各共出现多少次
//				for (int i = 0; i < n; i++)
//				{
//					if (a[i] == d)
//						c1++;
//					if (b[i] == d)
//						c2++;
//				}
//				//min(c1,c2）就是该数字对B的贡献
//				if (c1 < c2)
//					B += c1;
//				else
//					B += c2;
//			}
//
//			//printf("    (%d,%d)\n", A, B - A);//总共共同出现数字的个数-对的位置个数=出现了但不对
//			cout << "    (" << A << "," << B - A << ")" << endl;
//
//		}
//
//	}
//
//
//
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int len;
//	cin >> len;
//	cout << len;
//	cin.ignore();
//	char arr[200];
//	char brr[200];
//	cin.get(arr,20);
//	cout << arr;
//	//cin.ignore();
//	cout << "///////";
//	cin >> brr;
//	cout << brr;
//	return 0;
//}



//#include<iostream>
//using namespace std;
//int main()
//{
//	int vel;
//
//	//while (cin>>vel)
//	//{
//	//	if (cin.get() == '\n')
//	//		break;
//	//	cout << "1";
//	//}
//	 
//	////输入字符型，空格也包含
//	//while ((vel = cin.get()) != EOF)
//	//{
//	//	//cout << "1";
//	//	if (vel == 'A')
//	//		cout << " ! A !";
//	//	cout << vel << endl;//打印的是ascii
//	//}
//
//	//char arr[20];
//	//while (cin >> arr)
//	//{
//	//	//cout << arr;
//	//	char brr[20];
//	//	cin >> brr;
//	//	cout << "!" << brr << "!";
//	//}
//
//
//
//
//	return 0;
//}


//
//// C = A + B, A >= 0, B >= 0
//// big number
//#include <iostream>
//#include <vector>
//using namespace std;
//vector<int> add(vector<int>& A, vector<int>& B) {
//    vector<int> C;
//
//    int t = 0;
//    for (int i = 0; i < A.size() || i < B.size(); i++) {
//        if (i < A.size()) t += A[i];
//        if (i < B.size()) t += B[i];
//        C.push_back(t % 10);
//        t /= 10;
//    }
//    if (t) C.push_back(1);
//
//    return C;
//}
//
//int main() {
//    //string a, b;
//    vector<int> A, B;
//    vector<int>C;
//    //cin >> a >> b;
//    //for (int i = a.size() - 1; i >= 0; i--) A.push_back(a[i] - '0');
//    //for (int i = b.size() - 1; i >= 0; i--) B.push_back(b[i] - '0');
//    B.push_back(1);
//    B.push_back(2);
//    B.push_back(3);
//    C = add(A, B);
//    for (int i = C.size() - 1; i >= 0; i--) printf("%d", C[i]);
//    return 0;
//}



//
//#include <iostream>
//#include <vector>
//using namespace std;
//vector<int> mul(vector<int> A, int b) {
//    vector<int> C;
//    vector<int>D;
//    vector<int>F;
//    for(int i = A.size() - 1; i >= 0; i--)
//	{
//		D.push_back(A[i]);
//	}
//    int t = 0;
//    for (int i = 0; i < D.size() || t; i++)
//    {
//        if (i < D.size()) t += D[i] * b;
//        C.push_back(t % 10);
//        t /= 10;
//    }
//    for (int i = C.size() - 1; i >= 0; i--)
//    {
//        F.push_back(C[i]);
//    }
//    return F;
//}
//
//int main() 
//{
//    vector<int> A, B;
//    vector<int>C;
//    B.push_back(1);
//    B.push_back(2);
//    B.push_back(3);
//    C = mul(B,4);
//    for (int i = 0; i < C.size();i++) printf("%d", C[i]);
//    return 0;
//}


//
//
//#include<iostream>
//#include<cmath>
//using namespace std;
//
//class Point;//向前声明
//
//class Distance
//{
//public:
//    Distance(){}
//
//    //通过友元成员函数访问私有属性
//    double MemberDistance(Point &p1,Point &p2);
//
//    //友元类实现
//    double MemberDistance1(Point &p1,Point &p2);
//
//
//};
////
////double Distance::MemberDistance1(Point &p1,Point &p2)
////{
////
////    return (sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y)));
////}
//
//
//class Point
//{
//private:
//    double x,y;
//public:
//    friend double ExternalDistance(Point &p1,Point &p2);
//
//    //友元成员函数在类中被定义，必须在类外声明
//    friend double Distance::MemberDistance(Point &p1,Point &p2);
//
//    friend class Distance;
//    
//    Point(){}
//    Point(double tempx,double tempy):x(tempx),y(tempy){}
//
//
//    double MemberDistance(Point &p1,Point &p2)
//    {
//        double x1=p1.x;
//        double y1=p1.y;
//        double x2=p2.x;
//        double y2=p2.y;
//        return (sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
//    }
//
//};
//
////友元成员函数的类外声明
//double Distance::MemberDistance(Point &p1,Point &p2)
//{
//    double x1=p1.x;
//    double y1=p1.y;
//    double x2=p2.x;
//    double y2=p2.y;
//    return (sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
//}
//
//double Distance::MemberDistance1(Point &p1,Point &p2)
//{
//
//    return (sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y)));
//}
//
//
//
////利用全局函数做友元访问类对象私有成员
//double ExternalDistance(Point &p1,Point &p2)
//{
//    double x1=p1.x;
//    double y1=p1.y;
//    double x2=p2.x;
//    double y2=p2.y;
//    return (sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
//}
//
//
//int main()
//{
//  double x1, y1, x2, y2;
//  cout<<"Please input the coordinate value of two points(x1, y1, x2, y2): ";
//  cin>>x1>>y1>>x2>>y2;
//  cout<<"The two points you inputted are: ("<<x1<<","<<y1<<") and ("<<x2<<","<<y2<<")"<<endl;
//  Point p1(x1,y1), p2(x2,y2);
//  cout<<"The distance between two points calculated with friend function is: "<<ExternalDistance(p1, p2)<<endl;
//
//  cout<<"Please input the coordinate value of two points(x1, y1, x2, y2): ";
//  cin>>x1>>y1>>x2>>y2;
//  cout<<"The two points you inputted are: ("<<x1<<","<<y1<<") and ("<<x2<<","<<y2<<")"<<endl;
//  Point p3(x1,y1), p4(x2,y2);
//  Distance d1;	
//  cout<<"The distance between two points calculated with friend member is: "<<d1.MemberDistance(p3, p4)<<endl;
//
//  cout<<"Please input the coordinate value of two points(x1, y1, x2, y2): ";
//  cin>>x1>>y1>>x2>>y2;
//  cout<<"The two points you inputted are: ("<<x1<<","<<y1<<") and ("<<x2<<","<<y2<<")"<<endl;
//  Point p5(x1,y1), p6(x2,y2);
//  Distance d2;	
//  cout<<"The distance between two points calculated with friend class is: "<<d2.MemberDistance1(p5, p6)<<endl;
//
//    return 0;
//}

