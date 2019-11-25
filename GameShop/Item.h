#pragma once
#include<iostream>

class Item {
public:
	Item(std::string name, std::string description, int weight, int value);
	Item(const Item& item) = default;
	Item(Item&& item) = default;
	virtual ~Item() = default;

	Item& operator=(const Item& rhs) = default;
	Item& operator=(Item&& rhs) = default;

	virtual void Describe() const;
private:
	std::string m_name;				//	이름
	std::string m_description;		//	설명
	int m_weight;					//	무게
	int m_value;					//	가격
};

class Weapon : public Item {
public:
	Weapon(std::string name, std::string description, int weight, int value, int damage);
	Weapon(const Weapon& weapon) = default;
	Weapon(Weapon&& weapon) = default;
	virtual ~Weapon() = default;

	Weapon& operator=(const Weapon& rhs) = default;
	Weapon& operator=(Weapon&& rhs) = default;

	void Describe() const override;
private:
	int m_damage;					//	공격력
};

class Armor : public Item {
public:
	Armor(std::string name, std::string description, int weight, int value, int defense);
	Armor(const Armor& armor) = default;
	Armor(Armor&& armor) = default;
	virtual ~Armor() = default;

	Armor& operator=(const Armor& rhs) = default;
	Armor& operator=(Armor&& rhs) = default;

	void Describe() const override;
private:
	int m_defense;					//	방어력
};

class Potion : public Item {
	Potion(std::string type, std::string name, std::string description, int weight, int value, int capacity);
	Potion(const Potion& potion) = default;
	Potion(Potion&& potion) = default;
	virtual ~Potion() = default;

	Potion& operator=(const Potion& rhs) = default;
	Potion& operator=(Potion&& rhs) = default;

	void Describe() const override;
private:
	std::string m_type;				//	포션 타입 (HP or MP)
	int m_capacity;					//	힐링 수치
};