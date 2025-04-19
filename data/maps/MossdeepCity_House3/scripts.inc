MossdeepCity_House3_MapScripts::
	.byte 0

MossdeepCity_House3_EventScript_SuperRodFisherman::
	lock
	faceplayer
	msgbox MossdeepCity_House3_Text_GoAfterSeafloorPokemon, MSGBOX_DEFAULT
	release
	end

MossdeepCity_House3_Text_GoAfterSeafloorPokemon:
	.string "You should go after the seafloor\n"
	.string "Pokémon with your Super Rod.$"

