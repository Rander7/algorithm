////ǧ��֮�� ʼ������
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

////���ŵ��
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
//	scanf("%d", &n);	/*�Ӽ��̶�ȡ��Ҫ��ӡ������*/
//	for (i = 1; i <= n; i++)	/*һ����ӡn��*/
//	{
//		for (j = 1; j < i; j++)	/*��i�д�ӡ��#����֮ǰ��Ҫ�������i-1�����ո�*/
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * (n - i) + 1; j++)	/*��i��һ����� 2*(n-i)+1����#����*/
//		{
//			printf("#");
//		}
//		printf("\n");	/*��i�������ϣ�׼����һ�е����*/
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
//			sum += 1.0 / i / i;//�пӣ�65535�˻�����int��Χ
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

// ��ѭ���� ��Ϊ double �ǲ���ֱ���� != ���� == �ģ�������б�
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

////1~9���3����λ����Ҫ���С����Ϊ1:2:3���Ҳ������ظ�����,��ӡ�����з��ϵ�3����λ��
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
//		for (i = 0; i < 8; i++)//���ϱȽϣ����Ƿ����ظ�����
//		{
//			for (j = i + 1; j < 9; j++)
//			{
//				if (arr[i] == arr[j] || arr[i] == 0 || arr[j] == 0)//��Ҫ�ų�0
//				{
//					break;
//				}
//			}
//			if (j < 9)//�Ż������jС��9����ĳ��arr[i]��ѭ���бȽ�����û�����һ����������ѭ��
//				//Ҳ����˵����ĳ����ѭ����ĳ�����Ƚ���Ƚ�ʱ�򣬳������ظ�����0
//				//ʣ�µ���ѭ��Ҳû��Ҫ����ִ����
//			{
//				break;
//			}
//
//
//		}
//
//		if (i == 8 && j == 9)//�����ѭ��ȫ��ִ���꣬���һ����ѭ��Ҳû����
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
//#include<string.h>//����memset
//#define MAXN 1010
//using namespace std;
//
//int a[MAXN];
//int main()
//{
//
//	int n, k, first = 1;
//	memset(a, 0, sizeof(a));//����
//	cin >> n >> k;
//	for (int i = 1; i <= k; i++)
//	{
//		for (int j = 1; j <= n; j++)//��n������ȡģ�ж��ǲ���,����k���˵ı����ж�
//			if (j % i == 0)
//				a[j] = !a[j];//ע�ⷽ��
//	}
//		for (int i = 1; i <= n; i++)
//		{
//			if (a[i])
//			{
//				//��first��ʶ�����ƿո��������һ��ǰ�治����ո񣬸��ĺ����������ǰ����ո�
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

////��������
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
//	while (count < n * n)//��д��n����
//	{
//		//��arr[0][n-1]��arr[n-1][n-1],��x+1Ԥ����һ���������Ԥ���λ��Ϊ0
//		//��ʱx��Ԥ��ǰ��ʵ������
//		while (x + 1 < n && !arr[x + 1][y])
//			arr[++x][y] = ++count;
//		//��arr[n-1][n-1]��arr[n-1][0]
//		while (y - 1 >= 0 && !arr[x][y - 1])
//			arr[x][--y] = ++count;
//		//��arr[n-1][0]��arr[0][0]
//		while (x - 1 >= 0 && !arr[x - 1][y])
//			arr[--x][y] = ++count;
//		//��arr[0][0]��arr[0][n-1]
//		//��һ����������λ�ã����ø���ѭ��������ֻҪ�������λ�ò�Ϊ�վ��˳�ѭ��
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

////��ʽ����
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
//	char buf[99];//buf��ʱ��������ʱ���
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
//			// ��������ӡ��һ���ַ���������s�С�
//			//sprintf(s, "%d", 123); // ����"123"
//			//Ҳ����˵����buf�ж���intת�������ַ�
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

//TeX�е�����
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
//	int c, q = 1;//ע��c��int�Σ���������ص�EOF��int�Σ����ǿ��ת����char���޷���������char���ֿ���
//	while ((c = getchar() )!= EOF)
//	{
//		if (c == '"')
//		{
//			printf("%s", q ? "``" : "..");//ע����%s,���䵱�ַ������""��
//			//a?b:c��˼��a����b����c
//			q = !q;
//		}
//		else
//		{
//			printf("%c", c);//��int��ǿ��%c���
//		}
//	}
//
//	return 0;
//}

////���������������
////�����ó������������
////���������������ͬ����ϵͳ�Ի��е�����
//#include<stdio.h>
//#include<string.h>
//char s[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";//��������,����ָ����С�����������������
////1���ڳ�������c��Ϊʲô��  \\   �⡱�������ַ��أ�
////ʵ��������Ӧ���뵽ת���ַ���������ֻ����C�����У���Java��C++��Ҳͬ������ \\ ����ַ���û������һ���ַ�������ʾ���������ϵķ�б�߼� \ ��
//int main()
//{
//	int i, c;
//	//printf("%d", strlen(s));//���鳤����47��ֻ����һ��\
//	while (((c = getchar() )!= EOF))
//	{
//		for (i = 1; s[i] && s[i] != c; i++);//��tm�ǣ��ţ���for
//		//�Ҵ�λ����ַ��ڳ������е�λ�ã��������`QAZ���������һ����i=1��ʼ
//		//�����forʵ�����ڶ�i��ֵ
//		//�ҵ�s[i]==c�Ķ�Ӧ��i,����s[i]Ҫ���ڣ������һ��s[47]=='\0'���ǽ���ѭ��
//		if (s[i])//����ҵ��������ǰһ���ַ�
//			putchar(s[i - 1]);
//		else//û�о����ԭ���ַ�������?,���i�ӵ����泬�����鷶Χ���Ҳ�����
//		{
//			putchar(c);
//			//printf("%d\n", i);//�Ҳ�����ӡ��i��47��Ҳ����s[47]=='\0'
//			//��ASCII��ֵ��0�������˵�һ��if
//		}
//
//	}
//
//	return 0;
//}

////��ͬ����ϵͳ��������⣬�任�з���ͬ
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
//        else if (c == '\n')cout << endl;//��ͬ����ϵͳ���������
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

////fgets�汾
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

////c++ gets�汾
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

////���Ĵ�
//#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<ctype.h>//�ַ�����ͷ�ļ�
////�ַ������ʾ��ǵ�һ���ַ��ĵ�ַ
////%sͨ���ַ����׵�ַ��������ַ���
//const char* rev = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
////char* revֻ��һ�������ַ����׵�ַ��ָ�����
////rev�д�Ÿ��ַ������׵�ַ
//const char* msg[] = { "not a palindrome","a regular palindrome","a mirrored string","a mirrored palindrome" };
////������Ԫ�ض���char *ָ�룬��4��Ԫ�ر���4���ڴ��ַ��msg[0]����"not a palindrome"�ĵ�ַ
//char r(char ch)
//{
//	if (isalpha(ch))//������ַ�
//		return rev[ch - 'A'];
//	return rev[ch - '0' + 25];//ǰ26�Ǵ�д��ĸ,��10������
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
//				p = 0;//���ǻ��Ĵ�
//			if(r(s[i])!=r(s[len-1-i]))
//				m=0;//���Ǿ���
//
//		}
//
//		printf("%s -- is %s.\n\n", s, msg[m * 2 + p]);
//	}
//
//	return 0;
//}

//////��������Ϸ
//#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#define maxn 1010
//
//int main()
//{
//	int n, a[maxn], b[maxn];
//	int kase = 0;
//	while (scanf("%d", &n) == 1 && n)//n==0ʱ�������
//	{
//		printf("Game %d:\n", ++kase);//�ڼ�����Ϸ
//		for (int i = 0; i < n; i++)
//			scanf("%d", &a[i]);//���������
//		while(1)//һֱѭ������²����У�ֱ��if�ж�break����
//		{
//			int A = 0, B = 0;
//			for (int i = 0; i < n; i++)
//			{
//				scanf("%d", &b[i]);
//				if (a[i] == b[i])
//					A++;//λ����ͬ��������Ŀ
//			}
//
//			if (b[0] == 0)
//				break;//�����²�����û��0��ֻ�жϵ�һ�����ǲ���0�Ϳ��ԣ��²����н���
//			for (int d = 1; d <= 9; d++)
//			{
//				int c1 = 0, c2 = 0;//ͳ������d�ڴ����кͲ²����и������ֶ��ٴ�
//				for (int i = 0; i < n; i++)
//				{
//					if (a[i] == d)
//						c1++;
//					if (b[i] == d)
//						c2++;
//				}
//				//min(c1,c2�����Ǹ����ֶ�B�Ĺ���
//				if (c1 < c2)
//					B += c1;
//				else
//					B += c2;
//			}
//
//			printf("    (%d,%d)\n", A, B - A);//�ܹ���ͬ�������ֵĸ���-�Ե�λ�ø���=�����˵�����
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
////���ø�һ������ö��n-1��,�ȱ���10000����������������������С����Ԫ����������Ԫ�ҳ�������һ������Ԫ��
////��������ʱ�������
//
//int main()
//{
//	int arr[maxn]={0};//����Ԫ��
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
//		if (arr[y] == 0 || i < arr[y])//���������û��ֵ����Ԫ�����Ѿ���ֵ������Ԫ���ڸ��¼��������Ԫ
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

////��״����
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
//	int ans = arr[0];//��ans��ʾĿǰλ���ֵ�����С�������봮�е���ʼλ��
//	int temp = 0;
//	while (len--)
//	{
//		for (int i = 0; i < len-1; i++)//ansĿǰ�洢����С�Ŀ�ʼ��ͷ
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
////��״��s��ʾ���Ƿ��q��ʾ���ֵ���С
//int less(const char* s, int p, int q)
//{
//	int n = strlen(s);
//	for (int i = 0; i < n; i++)
//	{
//		if (s[(p + i) % n] != s[(q + i) % n])//����ʼ��ʼ�жϣ��ҵ���һ������ȵ���ĸ
//			return s[(p + i) % n] < s[(q + i) % n];//�ⲻ���жϣ�����һ�����ʣ��������ж������Ǽ�
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
//			if (less(s, i, ans))//���i��ͷ��ʾ���ĵ�һ������ȵ���ĸ��С
//				ans = i;//�����ֵ�����С����ͷ
//		}
//		for (int i = 0; i < n; i++)
//		{
//			putchar(s[(i + ans) % n]);//%n����Ϊ��ѭ�����
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

////��ϰ3-1 �÷�
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


////��ϰ3-2������
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
//		if (arr[i] > 65)//д��'A'Ҳ����
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
//		i++;//�����ַ���ֱ����һ��ѭ��������elseȻ��i++
//	}
//	cout << fixed << setprecision(3) << sum << "g / mol";
//
//	return 0;
//}



////3-3������
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	char arr1[10005];//������һ�β�������int�������ݵ�����
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