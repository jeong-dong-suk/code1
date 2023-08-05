#include <iostream>

#include "Post.h"

using namespace std;


void Post::SetText(const char* text)
{
	cout << "내용: " << text << endl;
	cout << "댓글: " << comments << endl;

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
		cout << "더 이상 감소할 좋아요 수가 없습니다" << endl;
}


void Post::AddComment(Comment* comments)
{

}
