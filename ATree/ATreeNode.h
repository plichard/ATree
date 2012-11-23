#pragma once

template<class T>
class ATreeNode
{
public:
	ATreeNode(void): m_pChildren(nullptr)
	{
	}
	~ATreeNode(void)
	{
	}

	T* Data()
	{
		return m_pData;
	}

	ATreeNode<T>* Next(char c)
	{
		if(m_pChildren != nullptr)
		{
			return m_pChildren[c];
		}
	}

private:
	T* m_pData;
	ATreeNode<T>* m_pChildren;
	char m_size; //how many children can we have?
};
