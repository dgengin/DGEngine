#pragma once

#include "Game.h"
#include "Json/JsonParser.h"

namespace Parser
{
	void parseNamer(Game& game, const rapidjson::Value& elem);
}
