#pragma once

#include "Json/JsonParser.h"

class Game;

namespace Parser
{
	void parseClassifier(Game& game, const rapidjson::Value& elem);
}
