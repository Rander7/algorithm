//����Ҫ����һ�����ֽ������򣬵��ǲ�֪���ж��ٸ�����
//ʹ��STL�е�vector
//��C++��׼�У�STL����֯Ϊ�����13��ͷ�ļ���<algorithm>��<deque>��<functional>��<iterator>��<vector>��<list>��<map>��<memory>��<numeric>��<queue>��<set>��<stack>��<utility>��

//#include<iostream>
//#include<vector>//����vectorͷ�ļ�
//using namespace std;
//
////����δ֪���ȵ������������д��
//int main()
//{
//	vector<int>array;//Ԫ��Ϊint�͵�����array
//	int number;
//
//	while (1)
//	{
//		cin >> number;
//		array.push_back(number);
//		//ÿ����һ�����־Ͱ�����ӵ���������
//		if (cin.get() == '\n')//����ǻس���������ѭ��
//			break;
//
//	}
//
//	int len = array.size();//�������鳤��len
//
//	for (int i = 0; i < len; i++)
//	{
//		cout << array[i] << endl;
//	}
//
//	return 0;
//}


//#include <iostream>//��֪���ȵ�
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



//����cin���ٸ�ϰ
//cin�����س����ո�tab�� ���������ǻ������������������ַ�����û�н��������ַ�������
//��ָ�������������ַ�֮ǰ��Ҳ����˵����һ��ͨ���������뺯����ȡʱ���ǿ��Զ����������ַ��ġ�


//cin.get �Ķ�ȡ�ַ�����
//1.��ȡ�ַ�
//#include<iostream>
//using namespace std;
//int main()
//{
//    int len = 0;
//    cin >> len;
//
//    int j = 0;
//        cin.ignore();//������len��Ļس������˻�����������char������ȡ
//        //cin.ignore���س���������������ܹ���������
//    while (len)
//    {
//        cout << "len:" << len << endl;
//        char str[100];
//
//        cin.get(str[j]);
//                cin.ignore();//����԰��س����ÿһ������
//
//        cout << "str:" << int(str[j]) << '\t';
//        j++;
//        len--;
//    }
//    return 0;
//}


//2 ��ȡ�ַ���
//�Իس�����������ȡ��ǰ������Ļس���ֱ�ӽ���������ָ���겻�������س�����
//������3���س���֮���ٴ�ʹ��cin.get��Ȼ��������4���س����Ƕ�ȡ����������ֵ��

//�����㲻�����룬�����ֱ�ӽ�������Ϊǰһ������Ļس���û�������������ڻ���������ʱ��ȡ�����ǻ������Ļس���ֱ�ӽ�����

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
//        //    ���룺jkl jkl jkl
//        //    �����jkl jkl jkl
//        //    ���룺abcdeabcdeabcdeabcdeabcde ������25���ַ���
//        //    �����abcdeabcdeabcdeabcd              ������19���ַ� + 1��'\0'��
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







//cin.getline �Ķ�ȡ�ַ�����
//
//��ȡ�ַ������س�������
//�������س�����ʱ�򣬴˴ζ�ȡ�������Ὣָ�����Ƶ��س���֮�󣬴Ӷ���һ�ζ�ȡ���ǻس���֮����ַ���
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
//        //����ȡ�س�֮����ַ������������������ַ���ʱ����Ҫignore
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
//    cin.clear();  // ��������־   
//    cin.ignore(numeric_limits<std::streamsize>::max(), '\n'); //����������ĵ�ǰ��
//    cin.getline(str2, 20);
//    cout << "str1:" << str1 << endl;
//    cout << "str2:" << str2 << endl;
//    system("pause");
//    return 0;
//}


//Ҳ������cin.get()�ж��ļ���ȡ����
//(c =cin.get() )!= EOF



////���������������
////�����ó������������
////���������������ͬ����ϵͳ�Ի��е�����
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//using namespace std;
//char s[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";//��������,����ָ����С�����������������
////1���ڳ�������c��Ϊʲô��  \\   �⡱�������ַ��أ�
////ʵ��������Ӧ���뵽ת���ַ���������ֻ����C�����У���Java��C++��Ҳͬ������ \\ ����ַ���û������һ���ַ�������ʾ���������ϵķ�б�߼� \ ��
//int main()
//{
//	int i, c;
//	//printf("%d", strlen(s));//���鳤����47��ֻ����һ��'\'
//	while (((c =cin.get() )!= EOF))
//	{
//		for (i = 1; s[i] && s[i] != c; i++);//��tm�ǣ��ţ���for
//		//�Ҵ�λ����ַ��ڳ������е�λ�ã��������`QAZ���������һ����i=1��ʼ
//		//�����forʵ�����ڶ�i��ֵ
//		//�ҵ�s[i]==c�Ķ�Ӧ��i,����s[i]Ҫ���ڣ������һ��s[47]=='\0'���ǽ���ѭ��
//		if (s[i])//����ҵ��������ǰһ���ַ�
//			cout.put(s[i - 1]);
//		else//û�о����ԭ���ַ�������?,���i�ӵ����泬�����鷶Χ���Ҳ�����
//		{
//			cout.put(c);
//			//printf("%d\n", i);//�Ҳ�����ӡ��i��47��Ҳ����s[47]=='\0'
//			//��ASCII��ֵ��0�������˵�һ��if
//		}
//
//	}
//
//	return 0;
//}




//COUT����ʶ
//�������
//ostream& operator<<(type);
//������������ԭ�Ϳ���֪��������ֵ��ostream���͵����ã���Ϳ���ʹ��cout << ʵ���������
//cout << ��We have " << count << " unhatched chickens.\n��;

//����ַ�cout.put()
//cout << 'W';//�����ڷ��а汾2.0,��������W��ASCII�룬��ǰ�汾������ַ�W
//cout.put('W');//�����ڷ��а汾2.0,��������W�ַ�����ǰ�汾�����W�ַ�
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	cout << 'W';//����ַ�W
//	cout.put('W');//����ַ�W
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


//����ַ���cout.write()
//��һ�������ṩ����Ҫ��ʾ���ַ�����ַ��
//�ڶ�������ָʾ����ʾ�����ַ���cout.write()��Ա���������ж��ַ����Ƿ��β��
//ָ����ʾ�����ַ�����ʾ��������ʹ�������ˡ�
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


//2.6 ����������
//����һ����512bytes�����䱶����
//����ʾ�����ʱ�������������ջ���
//1.����һ�����и���������endl
//2.���������ʱ
//3.ʹ�ù��� flush()����
//ʹ�÷�����flush(cout); ����cout << flush; (��������� << ������)

//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "����������*******************************************************************" << endl;
//	cout << "Enter a number: ";
//	float num;
//	cin >> num;
//	cout << "Hello, good-looking! " << flush;
//	cout << "Wait just a moment, please." << endl;
//
//	return 0;
//}




////cout�Բ�ͬ������ʾ����
////1.�޷�ʹ�ö�������ʾ��
////2.�ڸ��Ľ�����ʾ��ʽ֮��ϵͳĬ�Ϻ���ʹ�ø÷�ʽ��ʾ���ݣ��������ʾΪ����������ʽ����Ҫ�������ý�����ʾ��ʽ
////���ָ�ʽ��
////hex(cout);
////cout << hex;
////cout.setf(ios_base::dec);
////��ʾbool���ͣ�
////cout.setf(ios_base::boolalpha);//true��ʾλtrue,false��ʾλfalse
//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "cout�Բ�ͬ������ʾ����***********************************************************" << endl;
//	/*cout�Բ�ͬ������ʾ����*/
//	int i = 90;
//	cout << "��ʮ������ʾi��" << dec << i << endl;//��ʮ������ʾ
//	cout << "�԰˽�����ʾi��" << oct << i << endl;//�԰˽�����ʾ
//	cout << "��16������ʾi��" << hex << i << endl;//��16������ʾ
//	//�������Ϊʮ������ʾ��ʽ�������ʹ�����·�ʽ
//	cout.setf(ios_base::dec);
//	cout << "��ʮ������ʾi��" << i << endl << endl;
//	/*bool����������ʾ*/
//	cout << "bool����������ʾ" << endl;
//	bool is_true = true;
//	cout.setf(ios_base::boolalpha);//������ʾΪtrue��false
//	cout << "is_true = " << is_true << endl;
//	is_true = false;
//	cout << "is_true = " << is_true << endl << endl;
//
//	return 0;
//}


////
////���õ�ǰ�ֶο��cout.width()
////����ԭ�ͣ�
////int width();//���ص�ǰ�ֶο��
////int width(int i);//���ֶο������Ϊi,���ҷ���֮ǰ���ַ���ȣ��Ա�������һ�����ֶο�ȡ�
////ʹ�ø�ʽ��
////cout << width(����);
////ע�����
////1.width()ֻӰ����һ�ε�cout��Ȼ���ֶο�Ƚ��ָ�Ĭ��ֵ
////2.��ʾΪ�Ҷ��룬������ֶ�λ�ý�ʹ�ÿո����
////3.C++����ض����ݣ���������ͼ�ڿ��Ϊ2���ֶ��д�ӡһ��7λ����C++�������ֶΣ������ɸ����ݡ�
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
//    cout << 9.888889999 << endl;//������ض�
//
//    return 0;
//}



////��������ַ�cout.fill()
//#include<iostream>
//using namespace std;
//int main()
//{
//    cout << "��������ַ�****************************************************************************" << endl;
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



////���ĸ�������ʾ����cout.precision()
////Ĭ�����������ʾ��λ��Ч���֣�����ʹ��precision()���þ��ȣ�
////cout.precision(2);
////ע�����
////1.�����þ��Ⱥ󣬺����һֱʹ���������ֱ����һ�θ��ľ���
////2.����Ч����λ��С��������Ч����λ��ʱ��ʹ�ÿ�ѧ��������ʾ
//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "����С����ʾ���ȣ�precision()***********************************************************" << endl;
//	double j = 3333.1415926;
//	/*������ʾ��Ч����λ��*/
//	cout << "Ĭ�������ʾ(6λ)��" << j << endl;//���������ʱ��Ĭ������±�����λ��Ч����
//	cout.precision(9);//����ʹ��cout.precision(n)�������������ʱ����nλ��Ч����
//	cout << "������Ч����λ��Ϊ9λʱ��" << j << endl;
//	cout.precision(3);//����Ч����λ��С��������Ч����λ��ʱ��ʹ�ÿ�ѧ��������ʾ
//	cout << "������Ч����λ��Ϊ3λʱ��" << j << endl << endl;
//
//	return 0;
//}




//����С��λҪô��printf()������Ҫô��cout��䡣
//���⣺
//����һ�������ȸ�����������5λС����������������
//
//printf���������õģ�
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

//cout �������С��λ����Ҫͷ�ļ�#include <iomanip>
//
// setprecision()������������Ч����Ĭ����6λ
//setprecision()������������Ч���֣�fixed��setprecision����һ���þͱ�ɱ���С�������Ч���֡�
//fixed�и��ط���Ҫע����ǿ��Ա������Ч���ְ���0������fixed�Ļ�����ʹ����3����Ч���֣�С������0Ҳ���Զ�ʡ�ԡ�
//double b = 1.20001;
//cout << setprecision(2) << b << endl;         //������Ϊ1.2





//
///*

//Descriptions:			cout�ĳ����÷�
//*/
//#include <iostream>
//#include <iomanip>
//#include <cmath>
//
//int main()
//{
//	using namespace std;//�������ռ�std���������ֶ�������
//	cout << "�����ָ��*********************************************************************" << endl;
//	int eggs = 12;
//	const char* amount = "dozen";
//	cout << &eggs; // prints address of eggs variable
//	cout << amount; // prints the string "dozen"
//	cout << (void*)amount; // prints the address of the "dozen" string
//	cout << "�������***********************************************************************" << endl;
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
//	cout << "����������*******************************************************************" << endl;
//	cout << "Enter a number: ";
//	float num;
//	cin >> num;
//	cout << "Hello, good-looking! " << flush;
//	cout << "Wait just a moment, please." << endl;
//	cout << "cout��Բ�ͬ�������͵������ʽ***************************************************" << endl;
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
//	cout << "cout�Բ�ͬ������ʾ����***********************************************************" << endl;
//	/*cout�Բ�ͬ������ʾ����*/
//	i = 90;
//	cout << "��ʮ������ʾi��" << dec << i << endl;//��ʮ������ʾ
//	cout << "�԰˽�����ʾi��" << oct << i << endl;//�԰˽�����ʾ
//	cout << "��16������ʾi��" << hex << i << endl;//��16������ʾ
//	//�������Ϊʮ������ʾ��ʽ�������ʹ�����·�ʽ
//	cout.setf(ios_base::dec);
//	cout << "��ʮ������ʾi��" << i << endl << endl;
//	/*bool����������ʾ*/
//	cout << "bool����������ʾ" << endl;
//	bool is_true = true;
//	cout.setf(ios_base::boolalpha);//������ʾΪtrue��false
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
//	cout << 9.888889999 << endl;//������ض�
//	cout << "��������ַ�****************************************************************************" << endl;
//	cout.fill('*');
//	const char* staff[2] = { "Waldo Whipsnade", "Wilmarie Wooper" };
//	long bonus[2] = { 900, 1350 };
//	for (int i = 0; i < 2; i++)
//	{
//		cout << staff[i] << ": $";
//		cout.width(7);
//		cout << bonus[i] << "\n";
//	}
//	cout << "����С����ʾ���ȣ�precision()***********************************************************" << endl;
//	double j = 3333.1415926;
//	/*������ʾ��Ч����λ��*/
//	cout << "Ĭ�������ʾ(6λ)��" << j << endl;//���������ʱ��Ĭ������±�����λ��Ч����
//	cout.precision(9);//����ʹ��cout.precision(n)�������������ʱ����nλ��Ч����
//	cout << "������Ч����λ��Ϊ9λʱ��" << j << endl;
//	cout.precision(3);//����Ч����λ��С��������Ч����λ��ʱ��ʹ�ÿ�ѧ��������ʾ
//	cout << "������Ч����λ��Ϊ3λʱ��" << j << endl << endl;
//	cout << "ios_base��Ա����setf()��ʹ��***********************************************************" << endl;
//	cout << "һ��������setf()��********************************" << endl;
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
//	cout << "����������setf()��*********************************" << endl;
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
//	cout << "unsetf()��*********************************" << endl;
//	cout << boolalpha;
//	cout << true << endl;
//	cout.unsetf(ios_base::boolalpha); // display 1, 0
//	cout << true << endl;
//	//��С����ʾģʽ����ΪĬ��״̬��Ĭ��״̬��Ϊ���ģʽ�Ϳ�ѧ������ģʽ��δ����
//	cout.setf(0, ios_base::floatfield); // go to default mode
//	cout << "iomanipͷ�ļ�************************************************************************" << endl;
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





//λ������
//�ж���ż�ԣ�ǿ�ƣ���Ч�ʸ��ߣ���
//a & 1 = 0 ż��
//a & 1 = 1 ����

//�����������>>��
//����������ʽ�����е����������ƶ���Ӧλ��λ������λ�Ƴ�(����)
//����λ�Ŀ�λ������λ����������0��������1��

//�޷��������������>>>��
//����������ʽ�����е����������ƶ���Ӧλ������λ�Ƴ�(����)
//����λ�Ŀ�λ���㡣����������˵�ʹ��������ƣ�>>�� ��ͬ�����Ƕ��ڸ�����˵��ͬ��


//�������ԣ������������������Ϊ0��0������������������䱾�� 
//��һ�������б�2N+1����������ֻ��һ����������1�Σ�����N������������2�Ρ�����ҵ������һ�޶������ݣ�

//�ҳ����ڵ���v����С��2�ı���
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