#pragma once
#include "ATreeNode.h"

enum ATREE_TYPE{
	LOWER = 1,
	UPPER = 2,
	NUMBER = 4,

	DEFAULT = (LOWER | UPPER | NUMBER)
};

template<class T>
class ATree
{
public:

	ATree(int allowed_chars):m_pSeek(nullptr)
	{
		m_pRoot = new ATreeNode<T>();
		for(int i = 0; i < 256; i++)
		{
			m_pCharMap[i] = -1;
		}

		char current_id = 0;
		if(allowed_chars & ATREE_TYPE::LOWER)
		{
			for(int i = 'a'; i <= 'z';i++)
			{
				m_pCharMap[i] = current_id++;
			}
		}

		if(allowed_chars & ATREE_TYPE::UPPER)
		{
			for(int i = 'A'; i <= 'Z';i++)
			{
				m_pCharMap[i] = current_id++;
			}
		}

		if(allowed_chars & ATREE_TYPE::NUMBER)
		{
			for(int i = '0'; i <= '9';i++)
			{
				m_pCharMap[i] = current_id++;
			}
		}
	}
	~ATree(void)
	{
	}

	inline char Map(unsigned char c)
	{
		return m_pCharMap[c];
	}

private:
	
	ATreeNode<T>* m_pRoot;
	ATreeNode<T>* m_pSeek;

	unsigned char m_pCharMap[256];
};

