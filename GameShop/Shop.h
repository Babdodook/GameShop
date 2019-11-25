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
	std::string m_name;								//	상점 이름
	std::string m_fileName;							//	파일 이름
	std::ifstream m_fileStream;						//	파일 스트림

	std::vector<std::shared_ptr<Item>> m_items;		//	아이템 저장 컨테이너
};