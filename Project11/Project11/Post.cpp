#include <iostream>

#include "Post.h"

using namespace std;


void Post::SetText(const char* text)
{
	cout << "����: " << text << endl;
	cout << "���: " << comments << endl;

}

void Post::GetText()
{

}

void Post::AddLike()
{
	if (like = 0)
	{
		like++;
		return;
	}
	

}

void Post::SubLike()
{
	if (like != 0)
	{
		like--;
		return;
	}
	else
		cout << "�� �̻� ������ ���ƿ� ���� �����ϴ�" << endl;
}


void Post::AddComment(Comment* comments)
{

}
