#include "EntityStats.h"

EntityStats::EntityStats() {
	entityStatistics[EntityStat::MaximumHealth] = 1000;
	entityStatistics[EntityStat::CurrentHealth] = 1000;
	entityStatistics[EntityStat::PhysicalDefense] = 100;
	entityStatistics[EntityStat::MagicalDefense] = 100;
	entityStatistics[EntityStat::PhysicalDamageModifier] = 100;
	entityStatistics[EntityStat::MagicDamageModifier] = 100;
}

EntityStats::EntityStats(int maxHealth, int currentHealth, int physicalDefense, int magicalDefense, int physicalDamageMod, int magicDamageMod) {
	entityStatistics[EntityStat::MaximumHealth] = maxHealth;
	entityStatistics[EntityStat::CurrentHealth] = currentHealth;
	entityStatistics[EntityStat::PhysicalDefense] = physicalDefense;
	entityStatistics[EntityStat::MagicalDefense] = magicalDefense;
	entityStatistics[EntityStat::PhysicalDamageModifier] = physicalDamageMod;
	entityStatistics[EntityStat::MagicDamageModifier] = magicDamageMod;
}

int EntityStats::getStat(EntityStat stat) const {
	return entityStatistics.at(stat);

}

void EntityStats::modifyStat(EntityStat stat, int targetValue) {
	entityStatistics[stat] = targetValue;

}