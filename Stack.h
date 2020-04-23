#include "LinkedList.h"


//1. ���ø� Ŭ������ Ȯ���ؾ���
//2. Stack�������� Delete �Լ� �������ؾ���
//����: first, current_size�� class�� ��� �����̱� ������ this �����͸� ����Ͽ� �����;���

template <typename T>
//LinkedList class�� ��ӹ���
class Stack : public LinkedList<T> {
public:
	virtual bool Delete(T &element) {
		//first�� 0�̸� false��ȯ
		if (this->first == NULL)
			return false;

		Node<T> *top = this->first;
		if (top->link == NULL)
		{
			delete top;
			this->current_size--;
			return true;
		}

		Node<T> *current = top->link;
		this->first = current;
		element = top->data;
		delete top;
		this->current_size--;

			// LinkedList�� �޸� Stack�� current�� ����Ű�� ���� ����

		return true;
	}
};
