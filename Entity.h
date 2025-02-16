#pragma once
#ifndef ENTITY_H
#define ENTITY_H

#include <iostream>
#include <string>
#include "EntityStats.h"

class Entity {
private:
	std::string name;
	EntityStats entityStatMap;

public:
	Entity();

	Entity(std::string entityName, EntityStats entityStats);

	std::string getName() const;

	int getStat(EntityStat stat) const;

	void modifyStat(EntityStat stat, int targetValue);

	void showEntityInfo();

	void takeDamage(int damageAmount);

	void heal(int healAmount);

	void die() const;

};

#endif