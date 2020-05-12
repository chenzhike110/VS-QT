#ifndef USER_H
#define USER_H
#include<iostream>
using namespace std;
class user
{
public:
	// 初始化函数
	user(string name, string pass);

private:
	// 用户ID
	string id;
	// 用户密码
	string password;
	// 余额
	double money;
	// 用户名
	char* name;
};

#endif // !USER_H

