#pragma once

#include "Game/LevelFlags.h"
#include "TexturePacks/IndexedTexturePack.h"

class IndexedTexturePack2 : public IndexedTexturePack, public LevelFlags
{
public:
	using IndexedTexturePack::IndexedTexturePack;

	int32_t getFlags(uint32_t index, uint32_t subIndex) const override;
};
