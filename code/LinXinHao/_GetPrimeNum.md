该程序用来计算前n项的质数，将范围里的质数一一打印，并打印总数。

其中0，1可以跳过，所以将point初始化为2，如第11行。

并且除了2以外没有偶数为质数，所以质数中只有2, 3相邻，于是当检测到不为2的质数时point加上2，如25到34行。

关于判断质数的函数，若该数为合数，则必然存在一个非1的因数在1到该数的平方根（包括该平方根）中的，
所以循环只到该数的平方根，如50~56行。