﻿#include "CardType.h"

const char* CardType::ToString(CardType cardt)
{
	switch (cardt)
	{
	case CardType::None:
		return "CardTypeNone";
	case CardType::Peashooter:
		return "Peashooter";
	case CardType::Sunflower:
		return "Sunflower";
	case CardType::CherryBomb:
		return "CherryBomb";
	case CardType::Wallnut:
		return "Wallnut_Plant";
	case CardType::PotatoMine:
		return "PotatoMine";
	case CardType::SnowPea:
		return "SnowPea";
	case CardType::Chomper:
		return "Chomper";
	case CardType::Repeater:
		return "Repeater";
	case CardType::Puffshroom:
		return "Puffshroom";
	case CardType::Sunshroom:
		return "Sunshroom";
	case CardType::Fumeshroom:
		return "Fumeshroom";
	case CardType::CraveBuster:
		return "CraveBuster";
	case CardType::Hypnoshroom:
		return "Hypnoshroom";
	case CardType::Scaredyshroom:
		return "Scaredyshroom";
	case CardType::Iceshroom:
		return "Iceshroom";
	case CardType::Doomshroom:
		return "Doomshroom";
	case CardType::LilyPad:
		return "LilyPad";
	case CardType::Squash:
		return "Squash";
	case CardType::Threepeater:
		return "Threepeater";
	case CardType::TangleKelp:
		return "TangleKelp";
	case CardType::Jalapeno:
		return "Jalapeno";
	case CardType::Spickweed:
		return "Spickweed";
	case CardType::Torchwood:
		return "Torchwood";
	case CardType::Tallnut:
		return "Tallnut";
	case CardType::Seashroom:
		return "Seashroom";
	case CardType::Plantern:
		return "Plantern";
	case CardType::Cactus:
		return "Cactus";
	case CardType::Blover:
		return "Blover";
	case CardType::SplitPea:
		return "SplitPea";
	case CardType::Starfruit:
		return "Starfruit";
	case CardType::Pumpkin:
		return "Pumpkin";
	case CardType::Magnetshroom:
		return "Magnetshroom";
	case CardType::Cabbagepult:
		return "Cabbagepult";
	case CardType::FlowerPot:
		return "FlowerPot";
	case CardType::Kernelpult:
		return "Kernelpult";
	case CardType::CoffeeBean:
		return "CoffeeBean";
	case CardType::Garlic:
		return "Garlic";
	case CardType::UmbrellaLeaf:
		return "UmbrellaLeaf";
	case CardType::Marigold:
		return "Marigold";
	case CardType::Melonpult:
		return "Melonpult";
	case CardType::GatlingPea:
		return "GatlingPea";
	case CardType::TwinSunflower:
		return "TwinSunflower";
	case CardType::Gloomshroom:
		return "Gloomshroom";
	case CardType::Cattail:
		return "Cattail";
	case CardType::WinterMelon:
		return "WinterMelon";
	case CardType::GoldMagnet:
		return "GoldMagnet";
	case CardType::Spikerock:
		return "Spikerock";
	case CardType::CobCannon:
		return "CobCannon";
	case CardType::Imitater:
		return "Imitater";
	case CardType::Explodenut:
		return "Explodenut";
	case CardType::GiantWallnut:
		return "GiantWallnut";
	case CardType::Sprout:
		return "Sprout";
	case CardType::LeftRepeater:
		return "LeftRepeater";
	case CardType::Refresh:
		return "Refresh";
	case CardType::Crater:
		return "Crater";
	case CardType::Sun:
		return "Sun";
	case CardType::Diamond:
		return "Diamond";
	case CardType::SnorkedZombie:
		return "SnorkedZombie";
	case CardType::Trophy:
		return "Trophy";
	case CardType::Zombie:
		return "Zombie";
	case CardType::ConeheadZombie:
		return "ConeheadZombie";
	case CardType::PoleVaultingZombie:
		return "PoleVaultingZombie";
	case CardType::BucketheadZombie:
		return "BucketheadZombie";
	case CardType::LadderZombie:
		return "LadderZombie";
	case CardType::DiggerZombie:
		return "DiggerZombie";
	case CardType::BungeeZombie:
		return "BungeeZombie";
	case CardType::FootballZombie:
		return "FootballZombie";
	case CardType::BalloonZombie:
		return "BalloonZombie";
	case CardType::ScreenDoorZombie:
		return "ScreenDoorZombie";
	case CardType::Zomboin:
		return "Zomboin";
	case CardType::PogoZombie:
		return "PogoZombie";
	case CardType::DancingZombie:
		return "DancingZombie";
	case CardType::Gigagargantuar:
		return "Gigagargantuar";
	case CardType::Imp:
		return "Imp";
	default:
		return "InValid_Value_Of_CardType";
	}
}
