#pragma once

#include <iostream>

#include "Comment.h"

using namespace std;

class Post
{
private:
	char text;
	char comments;
	int like;
public:
	void SetText(const char* text);
	void GetText();
	void AddLike();
	void SubLike();
	void AddComment(Comment * comments);
	
};


