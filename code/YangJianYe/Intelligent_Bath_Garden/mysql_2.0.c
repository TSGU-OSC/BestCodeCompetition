#include <winsock2.h>
#include "include/mysql.h"
#include <stdio.h>

int main()
{
    MYSQL* mysql;
    MYSQL_ROW row;
    MYSQL* conn; // ����һ��ָ��mysql�������͵�ָ��
    conn = mysql_init(NULL); // mysql�ĳ�ʼ��
    if (!conn) // �ж��Ƿ��ʼ���ɹ�
    {
        printf("mysql��ʼ��ʧ��!\n");
        return EXIT_FAILURE;
    }
    conn = mysql_real_connect(conn, "mysql.sqlpub.com", "bathroom", "1bb2c89136ccd159", "bath_data_base", 3306, NULL, 0);
    // �û���Ϊlewis,����Ϊ123,���ӵ����ݿ�Ϊtest
    if (conn) {
        printf("���ݿ����ӳɹ�!\n");
        /*mysql_query(mysql, "select Status from data where Positionx='1' AND Positiony='1';");
        MYSQL_RES* res = mysql_store_result(mysql);
        while( (row = mysql_fetch_row(res)) != NULL ){
            printf("%s", row[0]);
        }*/
    } else
        printf("���ݿ�����ʧ��!\n");
    // mysql_close(conn); // �ر�mysql����
    getchar();
    return 0;
}