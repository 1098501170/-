#define _CRT_SECURE_NO_WARNINGS 1
//定义变量 放在第一行
// 初识常量变量.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

//int main()
//{
//    //创建一个变量
//    //变量类型：char; int(%d); short; long; long long; float(%f); double(%lf);
//    //类型 变量的名字 = 20
//    int age = 20;
//    double weight = 75.3;
//    age = age + 1;
//    weight = weight - 10;
//    printf("%d\n", age);
//    printf("%lf\n", weight);
//    return 0;
//}
//int a = 100;//大括号外面定义的是全局变量
//int main()
//{
//	//大括号内的都是局部变量
//	//当局部变量和全局变量名字产生冲突的时候，局部优先起作用
//	//不建议把全局变量和局部变量的名字写成一样的
//	int a = 10;
//	a = a + 20;
//	printf("%d\n", a);
//
//	return 0;
//}
//写一个代码求两个整数的和
//scanf函数是输入函数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf_s("%d %d", &a, &b);
//	sum = a + b;
//	printf("sum=%d\n", sum);
//	return 0;
//}
//研究
//int main(viod)
//{
//	int a = 0;
//	int b = 0;
//	int x = 0;
//	scanf("%d %d", &a, &b);
//	printf("x=%d\n", a + b);
//	return 0;
//}
//练习  计算15-37的结果
int main(viod)
{
	printf("15-37的结果是%d。\n", 15 - 37);

	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
