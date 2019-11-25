#pragma once
#include<fstream>
#include<vector>
#include"Item.h"

class Shop {
public:
	Shop() = default;
	Shop(std::string name, std::string fileName);

	void ReadData();
	//void ShowShopMenu() const;
private:
	std::string m_name;								//	���� �̸�
	std::string m_fileName;							//	���� �̸�
	std::ifstream m_fileStream;						//	���� ��Ʈ��

	std::vector<std::shared_ptr<Item>> m_items;		//	������ ���� �����̳�
};