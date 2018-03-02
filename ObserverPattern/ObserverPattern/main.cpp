#include "GameData.h"
#include "GameLover.h"
#include "GameSeller.h"
#include "GameHater.h"

int main(){
	GameData *gameData = new GameData();
	GameLover *lover = new GameLover(gameData);
	GameSeller *seller = new GameSeller(gameData);
	GameHater *hater = new GameHater(gameData);

	gameData->setMeasurements("��֮�켣", "Ӣ��ɱ", "��Խ����");
	delete gameData;
	delete lover;
	delete seller;
	delete hater;
	getchar();
	return 0;
}