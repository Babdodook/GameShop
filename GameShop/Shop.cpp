#pragma once
#include<iostream>
#include<string>
#include"Shop.h"

Shop::Shop(std::string name, std::string fileName)
	: m_name(name), m_fileName(fileName)
{
	m_fileStream.open(m_fileName);

	if (!m_fileStream.is_open())
	{
		std::cout << "파일 열기 실패" << std::endl;
		throw std::bad_exception();
	}
}

void Shop::ReadData()
{
	std::string data = "";

	while (std::getline(m_fileStream, data))
	{
		std::string splitData = data;

		std::string type, name, description, weight, value;
		std::string potionType;
		int damage, defense, capacity;

		splitData = splitData.substr(splitData.find("\"") + 1);
		type = splitData.substr(0, splitData.find("\""));
		splitData = splitData.substr(splitData.find("\"") + 1);

		splitData = splitData.substr(splitData.find("\"") + 1);
		name = splitData.substr(0, splitData.find("\""));
		splitData = splitData.substr(splitData.find("\"") + 1);

		splitData = splitData.substr(splitData.find("\"") + 1);
		description = splitData.substr(0, splitData.find("\""));
		splitData = splitData.substr(splitData.find("\"") + 1);

		splitData = splitData.substr(splitData.find(" ") + 1);
		weight = atoi(splitData.substr(0, splitData.find(" ")))
		splitData = splitData.substr(splitData.find(" ") + 1);
	}
}