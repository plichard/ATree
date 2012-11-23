// ATree.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ATree.h"

int _tmain(int argc, _TCHAR* argv[])
{
	ATree<int> tree(ATREE_TYPE::LOWER | ATREE_TYPE::UPPER);
	char test;
	unsigned char i = 0;
	//getchar();
	while(1)
	{
		//test = getchar();
		//printf_s("map:%d->%d\n",test,tree.Map(test));
		tree.Map(i);
		i++;
	}

	return 0;
}

