#define _CRT_SECURE_NO_WARNINGS
#include "pvzclass.h"
#include "Events/Events.h"
#include <random>
#define ROW_NUM 6480
#define ROW_SERIES 324
#define PUMPKIN_PROC_CHANCE 7
#define UNDER_PROC_CHANCE 5

typedef std::uniform_int_distribution<int> RndD_UID;

PlantType::PlantType Standard_Plantlist[] =
{
	PlantType::Peashooter,	PlantType::Sunflower,	PlantType::Wallnut,		PlantType::PotatoMine,	PlantType::SnowPea,		PlantType::Chomper,		PlantType::Repeater,
	PlantType::Puffshroom,	PlantType::Fumeshroom,	PlantType::Hypnoshroom,	PlantType::Scaredyshroom,PlantType::Iceshroom,
	PlantType::Threepeater, PlantType::Torchwood,	PlantType::Tallnut,
	PlantType::Seashroom,	PlantType::Plantern,	PlantType::Cactus,		PlantType::Blover,		PlantType::SplitPea,	PlantType::Starfruit,	PlantType::Magnetshroom,
	PlantType::Cabbagepult, PlantType::Kernelpult,	PlantType::Garlic,		PlantType::UmbrellaLeaf,PlantType::Marigold,	PlantType::Melonpult,
	PlantType::GatlingPea,	PlantType::Cattail,		PlantType::WinterMelon,	PlantType::GoldMagnet,	PlantType::Spikerock,	PlantType::Explodenut
};
RndD_UID RndU_StandardPlant(0, sizeof(Standard_Plantlist) / sizeof(PlantType::PlantType) - 1);

PlantType::PlantType Attacker_Plantlist[] =
{
	PlantType::Peashooter,	PlantType::PotatoMine,	PlantType::SnowPea,		PlantType::Chomper,		PlantType::Repeater,
	PlantType::Puffshroom,	PlantType::Fumeshroom,	PlantType::Hypnoshroom,	PlantType::Scaredyshroom,
	PlantType::Threepeater,
	PlantType::Seashroom,	PlantType::Cactus,		PlantType::SplitPea,	PlantType::Starfruit,
	PlantType::Cabbagepult, PlantType::Kernelpult,	PlantType::Melonpult,
	PlantType::GatlingPea,	PlantType::Cattail,		PlantType::WinterMelon,	PlantType::Spikerock
};
RndD_UID RndU_Attacker(0, sizeof(Attacker_Plantlist) / sizeof(PlantType::PlantType) - 1);

PlantType::PlantType Standard_Plantlist1[] =
{
	PlantType::Peashooter,	PlantType::Sunflower,	PlantType::SnowPea,		PlantType::Repeater,
	PlantType::Fumeshroom,	PlantType::Hypnoshroom,	PlantType::Scaredyshroom,
	PlantType::Threepeater,
	PlantType::Seashroom,	PlantType::Plantern,	PlantType::Cactus,		PlantType::Blover,		PlantType::SplitPea,	PlantType::Starfruit,
	PlantType::Cabbagepult, PlantType::Kernelpult,	PlantType::Garlic,		PlantType::UmbrellaLeaf,PlantType::Marigold,	PlantType::Melonpult,
	PlantType::GatlingPea,	PlantType::Cattail,		PlantType::WinterMelon,	PlantType::Spikerock
};
RndD_UID RndU_StandardPlant1(0, sizeof(Standard_Plantlist1) / sizeof(PlantType::PlantType) - 1);

PlantType::PlantType Standard_Plantlist2[] =
{
	PlantType::Peashooter,	PlantType::Sunflower,	PlantType::PotatoMine,	PlantType::SnowPea,		PlantType::Repeater,
	PlantType::Fumeshroom,	PlantType::Hypnoshroom,	PlantType::Scaredyshroom,PlantType::Iceshroom,
	PlantType::Threepeater, PlantType::Torchwood,
	PlantType::Seashroom,	PlantType::Cactus,		PlantType::Blover,		PlantType::SplitPea,	PlantType::Starfruit,	PlantType::Magnetshroom,
	PlantType::Cabbagepult, PlantType::Garlic,		PlantType::UmbrellaLeaf,PlantType::Marigold,	PlantType::Melonpult,
	PlantType::GatlingPea,	PlantType::Cattail,		PlantType::WinterMelon,	PlantType::Spikerock
};
RndD_UID RndU_StandardPlant2(0, sizeof(Standard_Plantlist2) / sizeof(PlantType::PlantType) - 1);

PlantType::PlantType Standard_Plantlist3[] =
{
	PlantType::Peashooter,	PlantType::Wallnut,		PlantType::PotatoMine,	PlantType::SnowPea,		PlantType::Repeater,
	PlantType::Puffshroom,	PlantType::Fumeshroom,	PlantType::Hypnoshroom,	PlantType::Scaredyshroom,PlantType::Iceshroom,
	PlantType::Threepeater, PlantType::Torchwood,	PlantType::Tallnut,
	PlantType::Seashroom,	PlantType::Plantern,	PlantType::Cactus,		PlantType::Blover,		PlantType::SplitPea,	PlantType::Starfruit,	PlantType::Magnetshroom,
	PlantType::Cabbagepult, PlantType::Marigold,	PlantType::Melonpult,
	PlantType::GatlingPea,	PlantType::Cattail,		PlantType::WinterMelon,	PlantType::GoldMagnet,	PlantType::Spikerock
};
RndD_UID RndU_StandardPlant3(0, sizeof(Standard_Plantlist3) / sizeof(PlantType::PlantType) - 1);

PlantType::PlantType Standard_Plantlist4[] =
{
	PlantType::Peashooter,	PlantType::Sunflower,	PlantType::Wallnut,		PlantType::PotatoMine,	PlantType::SnowPea,		PlantType::Chomper,		PlantType::Repeater,
	PlantType::Puffshroom,	PlantType::Fumeshroom,	PlantType::Hypnoshroom,	PlantType::Scaredyshroom,PlantType::Iceshroom,
	PlantType::Threepeater, PlantType::Tallnut,
	PlantType::Seashroom,	PlantType::Plantern,	PlantType::Cactus,		PlantType::Blover,		PlantType::SplitPea,	PlantType::Starfruit,	PlantType::Magnetshroom,
	PlantType::Cabbagepult, PlantType::Kernelpult,	PlantType::Garlic,		PlantType::Marigold,	PlantType::Melonpult,
	PlantType::GatlingPea,	PlantType::WinterMelon,	PlantType::GoldMagnet,	PlantType::Spikerock,	PlantType::Explodenut
};
RndD_UID RndU_StandardPlant4(0, sizeof(Standard_Plantlist4) / sizeof(PlantType::PlantType) - 1);

PlantType::PlantType Pumpkin_Plantlist[] =
{
	PlantType::Pumpkin,		PlantType::Gloomshroom
};
RndD_UID RndU_PumpkinPlant(0, sizeof(Pumpkin_Plantlist) / sizeof(PlantType::PlantType) - 1);
RndD_UID RndU_PumpkinProc(1, PUMPKIN_PROC_CHANCE);

PlantType::PlantType Under_Plantlist[] =
{
	PlantType::LilyPad,		PlantType::FlowerPot
};
RndD_UID RndU_UnderPlant(0, sizeof(Under_Plantlist) / sizeof(PlantType::PlantType) - 1);
RndD_UID RndU_UnderProc(1, UNDER_PROC_CHANCE);

PlantType::PlantType All_Plantlist[] =
{
	PlantType::Peashooter,	PlantType::Sunflower,	PlantType::Wallnut,		PlantType::PotatoMine,	PlantType::SnowPea,		PlantType::Chomper,		PlantType::Repeater,
	PlantType::Puffshroom,	PlantType::Fumeshroom,	PlantType::Hypnoshroom,	PlantType::Scaredyshroom,PlantType::Iceshroom,
	PlantType::LilyPad,		PlantType::Threepeater, PlantType::Torchwood,	PlantType::Tallnut,
	PlantType::Seashroom,	PlantType::Plantern,	PlantType::Cactus,		PlantType::Blover,		PlantType::SplitPea,	PlantType::Starfruit,	PlantType::Pumpkin,		PlantType::Magnetshroom,
	PlantType::Cabbagepult, PlantType::FlowerPot,	PlantType::Kernelpult,	PlantType::Garlic,		PlantType::UmbrellaLeaf,PlantType::Marigold,	PlantType::Melonpult,
	PlantType::GatlingPea,	PlantType::Gloomshroom, PlantType::Cattail,		PlantType::WinterMelon,	PlantType::GoldMagnet,	PlantType::Spikerock,	PlantType::Explodenut
};
RndD_UID RndU_AllPlant(0, sizeof(All_Plantlist) / sizeof(PlantType::PlantType) - 1);

RndD_UID RndU_Position(0, 4);

int result[20];

std::random_device device;
std::mt19937_64 RndE(device());
FILE* fp;

int series[ROW_NUM];

int count(int* plants, PlantType::PlantType type, int lim)
{
	int tmp = 0;
	for (register int i = 0; i < lim; i++)
		if ((int)type == *(plants + i))
			tmp++;
	return(tmp);
}

bool exist(int* plants, PlantType::PlantType type, int lim)
{
	return(count(plants, type, lim) > 0);
}

bool invalid(int* plants)
{
	// 三叶草不能超过一个
	if (count(plants, PlantType::Blover, 5) > 1)
		return(true);
	// 火树不能超过三个
	if (count(plants, PlantType::Torchwood, 5) > 3)
		return(true);
	// 阵型没有稳定输出型植物
	bool tmp = false;
	for (register int i = 0; i < sizeof(Attacker_Plantlist) / sizeof(PlantType::PlantType); i++)
	{
		if (exist(plants, Attacker_Plantlist[i], 5))
		{
			tmp = true;
			break;
		}
	}
	if (!tmp)
		return(true);
	// 有三叶草但阵型没蘑菇，这不允许
	if (exist(plants, PlantType::Blover, 5) && !(exist(plants, PlantType::Fumeshroom, 5) || exist(plants, PlantType::Puffshroom, 5)
		|| exist(plants, PlantType::Scaredyshroom, 5) || exist(plants, PlantType::Seashroom, 5)) )
	// 有火树但其左侧没有豌豆，这不允许
	for(register int i = 0; i < 5; i++)
		if (plants[i] == PlantType::Torchwood)
		{
			bool answer = false;
			for(register int j = 0; j < i; j++)
				if (plants[j] == PlantType::Repeater || plants[j] == PlantType::Threepeater ||
					plants[j] == PlantType::GatlingPea || plants[j] == PlantType::SplitPea)
				{
					answer = true;
					break;
				}
			if (!answer)
				return(true);

			break; // 只需考虑最左侧的火树
		}
	return(false);
}

void generate_DaMaiVerRow(int id)
{
	// 初始刷阵
	for (register int i = 0; i < 5; i++)
	{
		//result[i] = (int)Standard_Plantlist[RndU_StandardPlant(RndE)];

		if (RndU_PumpkinProc(RndE) == 1)
			result[i + 5] = (int)Pumpkin_Plantlist[RndU_PumpkinPlant(RndE)];
		else
			result[i + 5] = -1;

		if (RndU_UnderProc(RndE) == 1)
			result[i + 10] = (int)Under_Plantlist[RndU_UnderPlant(RndE)];
		else
			result[i + 10] = -1;

		result[i + 15] = -1;
	}

	do
	{
		result[0] = (int)Standard_Plantlist1[RndU_StandardPlant1(RndE)];
		result[1] = (int)Standard_Plantlist2[RndU_StandardPlant2(RndE)];
		result[2] = (int)Standard_Plantlist3[RndU_StandardPlant3(RndE)];
		result[3] = (int)Standard_Plantlist4[RndU_StandardPlant4(RndE)];
		result[4] = (int)Standard_Plantlist[RndU_StandardPlant(RndE)];

		switch (series[id])
		{
		// 火树诱导刷阵
		case 0:
		{
			int torch_poslist[] = { 1, 2, 4 };
			int torch_pos = torch_poslist[RndE() % 3];
			result[torch_pos] = PlantType::Torchwood;

			PlantType::PlantType Pea_Plantlist[] = {
				PlantType::Repeater,	PlantType::Threepeater, PlantType::SplitPea,	PlantType::GatlingPea
			};
			result[RndE() % torch_pos] = Pea_Plantlist[RndE() % 4];
		}
		break;
		// 三叶草诱导刷阵
		case 1:
		{
			int blover_pos = RndU_Position	(RndE);
			result[blover_pos] = PlantType::Blover;

			PlantType::PlantType Shroom_Plantlist[] = {
				PlantType::Puffshroom,	PlantType::Fumeshroom,	PlantType::Scaredyshroom,	PlantType::Seashroom
			};
			int tmp = RndU_Position(RndE);
			while (tmp == blover_pos)
				tmp = RndU_Position(RndE);
			result[tmp] = Shroom_Plantlist[RndE() % 4];
		}
		break;
		// 灯刺诱导刷阵
		case 2:
		{
			int plantern_pos = RndU_Position(RndE);
			result[plantern_pos] = PlantType::Plantern;

			int tmp = RndU_Position(RndE);
			while (tmp == plantern_pos)
				tmp = RndU_Position(RndE);
			result[tmp] = PlantType::Spikerock;
		}
		break;
		// 不诱导，判定异常
		default:
			break;
		}
	} while (invalid(result));

	for (register int i = 0; i < 19; i++)
		std::fprintf(fp, "%d,", result[i]);
	std::fprintf(fp, "%d\n", result[19]);
}

int main()
{
	fp = fopen("rows.csv", "w");

	std::fprintf(fp, "%d 0\n", ROW_NUM);

	for (register int i = 0; i < ROW_NUM; i++)
		series[i] = i % ROW_SERIES;
	std::shuffle(series, series + ROW_NUM, RndE);

	for (register int i = 0; i < ROW_NUM; i++)
		generate_DaMaiVerRow(i);
	return 0;
}
