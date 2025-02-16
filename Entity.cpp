#include "Entity.h"


Entity::Entity() {
	name = "New Entity";

	entityStatMap = EntityStats();

}

Entity::Entity(std::string entityName, EntityStats entityStats){
	name = entityName;

	entityStatMap = entityStats;

}

std::string Entity::getName() const {
	return name;

}

int Entity::getStat(EntityStat stat) const {
	return entityStatMap.getStat(stat);

}

void Entity::modifyStat(EntityStat stat, int targetValue) {
	entityStatMap.modifyStat(stat, targetValue);

}

void Entity::showEntityInfo() {
	std::cout << "Showing Entity: " << getName() << "\n"
		<< getStat(EntityStat::CurrentHealth) << "/" << getStat(EntityStat::MaximumHealth) << " HP \n"
		<< getStat(EntityStat::PhysicalDefense) << " Physical Defense \n"
		<< getStat(EntityStat::MagicalDefense) << " Magical Defense \n"
		<< getStat(EntityStat::PhysicalDamage) << " Physical Damage \n"
		<< getStat(EntityStat::MagicalDamage) << " Magical Damage \n" << std::endl;

}

void Entity::takeDamage(int damageAmount) {
	modifyStat(EntityStat::CurrentHealth, std::max(0, (getStat(EntityStat::CurrentHealth) - damageAmount)));

	if (getStat(EntityStat::CurrentHealth) == 0) {
		die();

	}
}

void Entity::heal(int healAmount) {
	modifyStat(EntityStat::CurrentHealth, std::max(getStat(EntityStat::CurrentHealth), (getStat(EntityStat::CurrentHealth) - healAmount)));

}

void Entity::die() const {
	std::cout << name << " has died." << std::endl;

}

