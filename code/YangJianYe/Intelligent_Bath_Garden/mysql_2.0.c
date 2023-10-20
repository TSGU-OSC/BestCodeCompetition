#include <winsock2.h>
#include "include/mysql.h"
#include <stdio.h>

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
    conn = mysql_real_connect(conn, "mysql.sqlpub.com", "bathroom", "1bb2c89136ccd159", "bath_data_base", 3306, NULL, 0);
    // 用户名为lewis,密码为123,连接的数据库为test
    if (conn) {
        printf("数据库连接成功!\n");
        mysql_query(mysql, "select Status from data where Positionx='1' AND Positiony='1';");
        MYSQL_RES* res = mysql_store_result(mysql);
        while( (row = mysql_fetch_row(res)) != NULL ){
            printf("%s", row[0]);
        }
    } else
        printf("数据库连接失败!\n");
    // mysql_close(conn); // 关闭mysql连接
    getchar();
    return 0;
}