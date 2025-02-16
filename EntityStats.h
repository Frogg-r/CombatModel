#pragma once
#ifndef ENTITY_STATS_H
#define ENTITY_STATS_H

#include <iostream>
#include <unordered_map>

enum class EntityStat {
	MaximumHealth,
	CurrentHealth,
	PhysicalDefense,
	MagicalDefense,
	PhysicalDamage,
	MagicalDamage
};

class EntityStats {
private:
	std::unordered_map<EntityStat, int> entityStatistics;

public:
	EntityStats();

	EntityStats(int maxHealth, int currentHealth, int physicalDefense, int magicalDefense, int physicalDamage, int magicalDamage);

	int getStat(EntityStat stat) const;

	void modifyStat(EntityStat stat, int targetValue);
};

#endif