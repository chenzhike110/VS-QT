#ifndef USER_H
#define USER_H
#include<iostream>
using namespace std;
class user
{
public:
	// ��ʼ������
	user(string name, string pass);

private:
	// �û�ID
	string id;
	// �û�����
	string password;
	// ���
	double money;
	// �û���
	char* name;
};

#endif // !USER_H

