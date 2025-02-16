#include "EntityStats.h"

EntityStats::EntityStats() {
	entityStatistics[EntityStat::MaximumHealth] = 1000;
	entityStatistics[EntityStat::CurrentHealth] = 1000;
	entityStatistics[EntityStat::PhysicalDefense] = 100;
	entityStatistics[EntityStat::MagicalDefense] = 100;
	entityStatistics[EntityStat::PhysicalDamage] = 100;
	entityStatistics[EntityStat::MagicalDamage] = 100;
}

EntityStats::EntityStats(int maxHealth, int currentHealth, int physicalDefense, int magicalDefense, int physicalDamage, int magicalDamage) {
	entityStatistics[EntityStat::MaximumHealth] = maxHealth;
	entityStatistics[EntityStat::CurrentHealth] = currentHealth;
	entityStatistics[EntityStat::PhysicalDefense] = physicalDefense;
	entityStatistics[EntityStat::MagicalDefense] = magicalDefense;
	entityStatistics[EntityStat::PhysicalDamage] = physicalDamage;
	entityStatistics[EntityStat::MagicalDamage] = magicalDamage;
}

int EntityStats::getStat(EntityStat stat) const {
	return entityStatistics.at(stat);

}

void EntityStats::modifyStat(EntityStat stat, int targetValue) {
	entityStatistics[stat] = targetValue;

}