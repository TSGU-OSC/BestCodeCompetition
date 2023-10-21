/*
* Intelligent_Bath_Garden
*/

#include "include/mysql.h"
#include <stdio.h>
#include <winsock2.h>


int main()
{
    MYSQL* mysql;
    MYSQL_ROW row;
    MYSQL* conn; // 创建一个指向mysql数据类型的指针
    conn = mysql_init(NULL); // mysql的初始化
    if (!conn) // 判断是否初始化成功
    {
        printf("mysql初始化失败!\n");
        return EXIT_FAILURE;
    }
    conn = mysql_real_connect(conn, "example.com", "xxx", "......", "...", 3306, NULL, 0);
    // 因在线数据库规定以及安全考虑，此处数据库相关信息使用示例代替
    if (conn) {
        printf("数据库连接成功!\n");
    } else
        printf("数据库连接失败!\n");
    // mysql_close(conn); // 关闭mysql连接
    getchar();
    return 0;
}