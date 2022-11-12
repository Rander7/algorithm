////千里之行 始于足下
//#include<iostream>
//#include<iomanip>
//using namespace std;

//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	int x;
//	x = (4 * n - m) / 2;
//	if (x>=0&&x<=n)
//	{
//
//		cout << x <<" " << n - x;
//	}
//	else
//	{
//		cout << "No answer";
//	}
//
//	return 0;
//}

////韩信点兵
//int main()
//{
//	int a, b, c;
//	int i = 0;
//	int n;
//	cin >> a >> b >> c;
//	n = i * 3 + a;
//	while (n <= 100)
//	{
//		if(n>=10)
//		{
	//		if (n % 5 == b && n % 7 == c)
	//		{
	//			cout << n;
	//			break;
	//		}
	//		else
	//		{
	//			i++;
	//			n = i * 3 + a;
	//		}
//		}
//		else
//		cout<<"No answer";
//	}
//	if (n > 100)
//	{
//		cout << "No answer";
//	}
//
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int n, i, j;
//	scanf("%d", &n);	/*从键盘读取需要打印的行数*/
//	for (i = 1; i <= n; i++)	/*一共打印n行*/
//	{
//		for (j = 1; j < i; j++)	/*第i行打印‘#’号之前需要先输出（i-1）个空格*/
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * (n - i) + 1; j++)	/*第i行一共输出 2*(n-i)+1个‘#’号*/
//		{
//			printf("#");
//		}
//		printf("\n");	/*第i行输出完毕，准备下一行的输出*/
//	}
//	return 0;
//}

//int main()
//{
//	int n, m, i;
//	int flag = 0;
//	double sum = 0;
//	while (cin >> n >> m)
//	{
//		if (m == 0 && n == 0)
//			break;
//		for (i = n; i <= m; i++)
//			sum += 1.0 / i / i;//有坑，65535乘积超过int范围
//
//		cout << "Case " << ++flag << ":";
//		cout << fixed << setprecision(5) << sum << endl;
//
//	}
//
//	return 0;
//}

//int main()
//{
//
//	int a, b, c;
//	double sum;
//	while (cin >> a >> b >> c)
//	{
//		if (a == 0 && b == 0 && c == 0)
//		{
//			break;
//		}
//		sum = 1.0 * a / b;
//		cout << fixed << setprecision(c) << sum << endl;
//
//	}
//
//	return 0;
//}

// 死循环， 因为 double 是不能直接用 != 或者 == 的，用误差判别
//int main()
//{
//
//	double i;
//	for (i = 0; i != 10; i+=0.1)
//	{
//		cout << fixed << setprecision(1) << i << endl;
//	}
//
//	return 0;
//}

////1~9组成3个三位数，要求大小比例为1:2:3，且不能有重复数字,打印出所有符合的3个三位数
//int main()
//{
//	int arr[9];
//	int a, b, c;
//	for (a = 123; a < 345; a++)
//	{
//		b = a * 2;
//		c = a * 3;
//		arr[0] = a / 100;
//		arr[1] = a / 10 % 10;
//		arr[2] = a % 10;
//		arr[3] = b / 100;
//		arr[4] = b / 10 % 10;
//		arr[5] = b % 10;
//		arr[6] = c / 100;
//		arr[7] = c / 10 % 10;
//		arr[8] = c % 10;
//
//
//		int i, j;
//
//		for (i = 0; i < 8; i++)//不断比较，看是否有重复数字
//		{
//			for (j = i + 1; j < 9; j++)
//			{
//				if (arr[i] == arr[j] || arr[i] == 0 || arr[j] == 0)//还要排除0
//				{
//					break;
//				}
//			}
//			if (j < 9)//优化，如果j小于9，在某次arr[i]外循环中比较他就没有完成一个完整的内循环
//				//也就是说，在某个外循环的某个被比较项比较时候，出现了重复或者0
//				//剩下的外循环也没必要继续执行了
//			{
//				break;
//			}
//
//
//		}
//
//		if (i == 8 && j == 9)//如果外循环全部执行完，最后一次内循环也没问题
//		{
//			cout << a << " " << b << " " << c << endl;
//		}
//
//	}
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//
//	int n;
//	int k;
//	cin >> n >> k;
//	int arr[10005] = { 0 };
//	for (int i = 1; i <= k; i++)
//	{
//		for (int j = i; i*j <= n; j++)
//		{
//			arr[i * j] += 1;
//		}
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (arr[i] % 2 == 1)
//			cout << i << " ";
//	}
//
//
//	return 0;
//}

//#include<iostream>
//#include<string.h>//定义memset
//#define MAXN 1010
//using namespace std;
//
//int a[MAXN];
//int main()
//{
//
//	int n, k, first = 1;
//	memset(a, 0, sizeof(a));//清零
//	cin >> n >> k;
//	for (int i = 1; i <= k; i++)
//	{
//		for (int j = 1; j <= n; j++)//用n的增长取模判断是不是,我用k个人的倍数判断
//			if (j % i == 0)
//				a[j] = !a[j];//注意方法
//	}
//		for (int i = 1; i <= n; i++)
//		{
//			if (a[i])
//			{
//				//用first标识符控制空格输出，第一个前面不输出空格，更改后后面的在输出前输出空格
//				if (first)
//					first = 0;
//				else
//				{
//					cout << " ";
//				}
//				cout << i;
//			}
//		}
//		cout << endl;
//
//
//	return 0;
//}
//
//
//
//

////蛇形填数
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int arr[10][10] = {0};
//	int count = 1;
//	int x, y;
//	arr[x = 0][y = n - 1] = 1;
//	while (count < n * n)//填写的n个数
//	{
//		//从arr[0][n-1]到arr[n-1][n-1],用x+1预判下一步，且如果预填的位置为0
//		//此时x是预判前的实际坐标
//		while (x + 1 < n && !arr[x + 1][y])
//			arr[++x][y] = ++count;
//		//从arr[n-1][n-1]到arr[n-1][0]
//		while (y - 1 >= 0 && !arr[x][y - 1])
//			arr[x][--y] = ++count;
//		//从arr[n-1][0]到arr[0][0]
//		while (x - 1 >= 0 && !arr[x - 1][y])
//			arr[--x][y] = ++count;
//		//从arr[0][0]到arr[0][n-1]
//		//第一次遇到已满位置，不用更改循环条件，只要加上如果位置不为空就退出循环
//		while (y + 1 < n && !arr[x][y + 1])
//			arr[x][++y] = ++count;
//	}
//	for (x = 0; x < n; x++)
//	{
//		for (y = 0; y < n; y++)
//		{
//			cout << arr[x][y] << " ";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}

////竖式问题
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
////#include<cstring>
//using namespace std;
//
//int main()
//{
//
//	int count = 0;
//	char s[20];
//	char buf[99];//buf临时数组存放临时结果
//	scanf("%s", s);
//	int abc;
//	int de;
//	for ( abc = 111; abc <= 999; abc++)
//	{
//		for ( de = 11; de <= 99; de++)
//		{
//			int x = abc * (de % 10);
//			int y = abc * (de / 10);
//			int z = abc * de;
//			sprintf(buf, "%d%d%d%d%d", abc, de, x, y, z);
//			// 把整数打印成一个字符串保存在s中。
//			//sprintf(s, "%d", 123); // 产生"123"
//			//也就是说现在buf中都是int转过来的字符
//			int ok = 0;
//			for (int i = 0; i < strlen(buf); i++)
//			{
//				if (strchr(s, buf[i]) == NULL)
//				{
//					ok = 1;
//				}
//			}
//
//			if (!ok)
//			{
//				printf("<%d>\n", ++count);
//				printf("%5d\nX%4d\n-----\n%5d\n%4d\n-----\n%5d\n\n", abc, de, x, y, z);
//			}
//
//		}
//
//	}
//
//	cout << "The number of solutions = " << count;
//	return 0;
//}

//TeX中的引号
//#include<iostream>
//#include<cstring>
//#include<string>
//#include<string.h>
//
//using namespace std;
//
//int main()
//{
//	string arr;
//	getline(cin, arr);
//	int size = arr.size();
//	arr.find('\'')
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int c, q = 1;//注意c用int形，其结束返回的EOF是int形，如果强制转换成char将无法和正常的char区分开来
//	while ((c = getchar() )!= EOF)
//	{
//		if (c == '"')
//		{
//			printf("%s", q ? "``" : "..");//注意是%s,将其当字符串输出""内
//			//a?b:c意思是a真则b否则c
//			q = !q;
//		}
//		else
//		{
//			printf("%c", c);//将int形强制%c输出
//		}
//	}
//
//	return 0;
//}

////键盘输出右移问题
////擅于用常量数组简化问题
////这个方法巧妙解决不同操作系统对换行的问题
//#include<stdio.h>
//#include<string.h>
//char s[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";//常量数组,不需指明大小，编译器会完成运算
////1、在常量数组c中为什么有  \\   这”两个“字符呢？
////实际上我们应该想到转义字符这个概念。不只是在C语言中，在Java、C++中也同样，用 \\ 这个字符（没错，它是一个字符）来表示真正意义上的反斜线即 \ 。
//int main()
//{
//	int i, c;
//	//printf("%d", strlen(s));//数组长度是47，只包含一个\
//	while (((c = getchar() )!= EOF))
//	{
//		for (i = 1; s[i] && s[i] != c; i++);//这tm是；号，假for
//		//找错位后的字符在常量表中的位置，不会出现`QAZ所以输入第一个从i=1开始
//		//这个假for实际上在对i赋值
//		//找到s[i]==c的对应的i,并且s[i]要存在，你最后一次s[47]=='\0'就是结束循环
//		if (s[i])//如果找到输出他的前一个字符
//			putchar(s[i - 1]);
//		else//没有就输出原来字符，比如?,这个i加到后面超过数组范围就找不到了
//		{
//			putchar(c);
//			//printf("%d\n", i);//找不到打印的i是47，也就是s[47]=='\0'
//			//其ASCII码值是0，进不了第一个if
//		}
//
//	}
//
//	return 0;
//}

////不同操作系统会产生问题，其换行符不同
//#include<cstdio>
//#include<iostream>
//#include<cstring>
//
//using namespace std;
//
//int main()
//{
//    char s[] = "`1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./";
//    int len = strlen(s);//46
//    int c;
//    while ((c = getchar()) != EOF)
//    {
//        if (c == ' ')cout << " ";
//        else if (c == '\n')cout << endl;//不同操作系统会产生问题
//        else
//        {
//            int i = 0;
//            int a = 1;
//            for (i = 0; i < len; i++)
//            {
//                if (s[i] == c)
//                {
//                    cout << s[i - 1];
//                    a = 0;
//                }
//
//            }
//            //cout << i << endl;
//            if (i == len&&a==1)
//            {
//                //cout << i << endl;
//                cout <<char(c);
//            }
//
//
//
//
//        }
//    }
//    return 0;
//}

////fgets版本
//#include<cstdio>
//#include<cstring>
//#include<map>
//
//using namespace std;
//
//char s[] = "`1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./";
//
//int main()
//{
//    char str[1000];
//    map<char, int>mp;
//    for (int i = 0; i < strlen(s); i++)
//        mp[s[i]] = i;
//    while (fgets(str, 1000, stdin) != NULL)
//    {
//        str[strlen(str) - 1] = '\0';
//        for (int i = 0; i < strlen(str); i++)
//        {
//            if (str[i] == ' ')putchar(' ');
//            else putchar(s[mp[str[i]] - 1]);
//        }
//        putchar('\n');
//    }
//    return 0;
//}

////c++ gets版本
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//using namespace std;
//int main() {
//	string c = "1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
//	char b[100];
//	gets(b);
//	for (int i = 0; i < strlen(b); i++) {
//		int Index = c.find(b[i]);
//		if (Index == -1)
//			cout << b[i];
//		else
//			cout << c[Index - 1];
//	}
//	cout << endl;
//}

////回文词
//#define  _CRT_SECURE_NO_WARNINGS
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
//	while (scanf("%s", s) == 1)
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
//		printf("%s -- is %s.\n\n", s, msg[m * 2 + p]);
//	}
//
//	return 0;
//}

//////猜数字游戏
//#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#define maxn 1010
//
//int main()
//{
//	int n, a[maxn], b[maxn];
//	int kase = 0;
//	while (scanf("%d", &n) == 1 && n)//n==0时输入结束
//	{
//		printf("Game %d:\n", ++kase);//第几次游戏
//		for (int i = 0; i < n; i++)
//			scanf("%d", &a[i]);//输入答案序列
//		while(1)//一直循环输入猜测序列，直到if判断break跳出
//		{
//			int A = 0, B = 0;
//			for (int i = 0; i < n; i++)
//			{
//				scanf("%d", &b[i]);
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
//			printf("    (%d,%d)\n", A, B - A);//总共共同出现数字的个数-对的位置个数=出现了但不对
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
////#include<cstring>
////#include<string>
//#define maxn 10005
//using namespace std;
////不用给一个数就枚举n-1次,先遍历10000以内所有数，把所有有最小生成元的数的生成元找出，建立一个生成元表
////最后给数的时候查表就行
//
//int main()
//{
//	int arr[maxn]={0};//生成元表
//	int x, y;
//	for (int i = 1; i < maxn; i++)
//	{
//		x = i;
//		y = i;
//		while (x > 0)
//		{
//			y += x % 10;
//			x /= 10;
//		}
//		if (arr[y] == 0 || i < arr[y])//如果该数还没赋值生成元或者已经赋值的生成元大于该新加入的生成元
//			arr[y] = i;
//	}
//	int t;
//	int n;
//	cin >> t;
//	while (t--)
//	{
//		cin >> n;
//		cout << arr[n] << " ";
//	}
//
//
//
//	return 0;
//}

////环状序列
//#include<iostream>
//#include<string>
//#include<cstring>
//#define maxsize 105
//using namespace std;
//
//int main()
//{
//	char arr[maxsize];
//	cin >> arr;
//	int len = strlen(arr);
//	int ans = arr[0];//用ans表示目前位置字典序最小串在输入串中的起始位置
//	int temp = 0;
//	while (len--)
//	{
//		for (int i = 0; i < len-1; i++)//ans目前存储了最小的开始的头
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				temp = i + 1;
//				ans = temp ? ans : ans > temp;
//			}
//		}
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#define maxn 105
//
////环状串s表示法是否比q表示法字典序小
//int less(const char* s, int p, int q)
//{
//	int n = strlen(s);
//	for (int i = 0; i < n; i++)
//	{
//		if (s[(p + i) % n] != s[(q + i) % n])//从起始开始判断，找到第一个不相等的字母
//			return s[(p + i) % n] < s[(q + i) % n];//这不是判断，而是一个提问，主函数判断是真是假
//	}
//	return 0;
//}
//
//int main()
//{
//	int T;
//	char s[maxn];
//	scanf("%d", &T);
//	while (T--)
//	{
//		scanf("%s", s);
//		int ans = 0;
//		int n = strlen(s);
//		for (int i = 1; i < n; i++)
//		{
//			if (less(s, i, ans))//如果i开头表示串的第一个不相等的字母更小
//				ans = i;//更新字典序最小排序开头
//		}
//		for (int i = 0; i < n; i++)
//		{
//			putchar(s[(i + ans) % n]);//%n就是为了循环输出
//		}
//		putchar('\n');
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#define maxn 1000
//int main()
//{
//	char s[maxn];
//	scanf("%s", s);
//	int tot = 0;
//	for (int i = 0; i < strlen(s); i++)
//	{
//		if (s[i] == '1')
//			tot++;
//	}
//
//	return 0;
//}

////练习3-1 得分
//#include<iostream>
//#include<string>
//#include<cstring>
//using namespace std;
//
//int main()
//{
//	char s[85];
//	cin >> s;
//	int len = strlen(s);
//	int count = 0;
//	int sum = 0;
//	for (int i = 0; i < len; i++)
//	{
//		if (s[i] == 'O')
//		{
//			++count;
//			sum += count;
//		}
//		else
//		{
//			count = 0;
//		}
//	}
//	cout << sum;
//
//	return 0;
//}


////练习3-2分子量
//#include<iostream>
//#include<iomanip>
//const double C1 = 12.01;
//const double H1 = 1.008;
//const double O1 = 16.00;
//const double N1 = 14.01;
//using namespace std;
//
//int main()
//{
//	char arr[10] = { 0 };
//	cin >> arr;
//	int len = strlen(arr);
//	double sum = 0;
//	int i = 0;
//	double temp = 0;
//	while (i < len)
//	{
//		cout << i << endl;
//		if (arr[i] > 65)//写出'A'也可以
//		{
//			switch (arr[i])
//			{
//			case 'C': temp = C1; break;
//			case 'H': temp = H1; break;
//			case 'O': temp = O1; break;
//			case 'N': temp = N1; break;
//			}
//			if (arr[i + 1] && arr[i + 1] < 65)
//			{
//				sum += temp * (arr[i + 1] - '0');
//				cout << temp << arr[i + 1] - '0' << endl;
//			}
//			else
//			{
//				sum += temp;
//			}
//			cout << sum << endl;
//		}
//		i++;//不是字符就直接下一次循环，不用else然后i++
//	}
//	cout << fixed << setprecision(3) << sum << "g / mol";
//
//	return 0;
//}



////3-3数数字
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	char arr1[10005];//想输入一段不定长的int类型数据但不会
//	int arr2[11] = { 0 };
//	cin >> arr1;
//	int len = strlen(arr1);
//	int i = 0;
//	int j = len;
//	while (j)
//	{
//		switch (arr1[i++]-'0')
//		{
//		case 0: arr2[0]++; break;
//		case 1: arr2[1]++; break;
//		case 2: arr2[2]++; break;
//		case 3: arr2[3]++; break;
//		case 4: arr2[4]++; break;
//		case 5: arr2[5]++; break;
//		case 6: arr2[6]++; break;
//		case 7: arr2[7]++; break;
//		case 8: arr2[8]++; break;
//		case 9: arr2[9]++; break;
//		}
//
//		j -= 1;
//	}
//	for (int i = 0; i < 10; i++) {
//		cout << arr2[i] << " ";
//	}
//
//	return 0;
//}


////#include<iostream>
////#include<vector>
////using namespace std;
////
////
////
////int main()
////{
////	int arr[11] = { 0 };
////
////	vector<int>A;
////	int number;
////	while (1)
////	{
////		cin >> number;
////		A.push_back(number);
////		if (cin.get() == '\n')
////			break;
////	}
////	int len = A.size();
////	for (int i = 0; i < len; i++)
////	{
////		switch (A[i])
////		{
////		case 0: arr[0]++; cout << "jin0"; break;
////		case 1: arr[1]++; cout << "jin1"; break;
////		case 2: arr[2]++; cout << "jin2"; break;
////		case 3: arr[3]++; cout << "jin3"; break;
////		case 4: arr[4]++; cout << "jin4"; break;
////		case 5: arr[5]++; cout << "jin5"; break;
////		case 6: arr[6]++; cout << "jin6"; break;
////		case 7: arr[7]++; cout << "jin7"; break;
////		case 8: arr[8]++; cout << "jin8"; break;
////		case 9: arr[9]++; cout << "jin9"; break;
////			
////		default:cout << "jinde" << endl;break;
////
////		}
////	}
////	//cout << A[0] << endl;
////		for (int i = len-1; i >=0; i--)
////	{
////		cout << A[i] << endl;
////	}
////		//cout << A[2];
////	//for (int i = 0; i <= 9; i++)
////	//{
////	//	cout << arr[i] << " ";
////	//}
////
////	return 0;
////}