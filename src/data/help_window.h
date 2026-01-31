// Add entries here
// These entries are example entries which you can replace, but they exist to get you started.
// Remember to modify include/constants/help_window.h to include identifiers so they can be used in event scripts.
const struct HelpWindow gHelpWindowInfo[] =
{
/*    [HELP_EXPANSION_1_START] =
    {
        .header = COMPOUND_STRING("A New Adventure Begins!"),
        .desc = COMPOUND_STRING("Travel to Slateport Harbor and meet\n"
                                "up with your friends to begin!"
                            ),
        .headerFont = FONT_NORMAL,
        .descFont = FONT_NORMAL
    },*/
    [HELP_POKEDEX] =
    {
        .header = COMPOUND_STRING("Information: Pokédex"),
        .desc = COMPOUND_STRING("The Pokédex in Emeralbody is more advanced\n"
                                "than normal.\n\n"
                                "Use the Stats and Evo tabs within to view\n"
                                "learnsets, evolution methods, alternate\n"
                                "forms, and more."
                            ),
    },
    [HELP_SHOP_INVENTORY] =
    {
        .header = COMPOUND_STRING("Information: Shop Inventory"),
        .desc = COMPOUND_STRING("After obtaining gym badges, the inventory\n"
                                "of shops will update, including the vendor\n"
                                "in Slateport City that sells evolution items.\n\n"
                                "Check out the documentation for details!"
                            ),
    },
    [HELP_FLYING] =
    {
        .header = COMPOUND_STRING("Information: Flying"),
        .desc = COMPOUND_STRING("After obtaining the second gym badge, you\n"
                                "will be able to use Fly outside of battle.\n\n"
                                "Open the party menu in the field and select\n"
                                "one of your Pokémon to use Fly.\n\n"
                                "No HMs are required."
                            ),
    },
    [HELP_TERASTALLIZATION] =
    {
        .header = COMPOUND_STRING("Information: Terastallization"),
        .desc = COMPOUND_STRING("In battle, press {START_BUTTON} to Terastallize!\n\n"
                                "The Pokémon must not currently be able\n"
                                "to Mega Evolve.\n"
                                "You can only Terastallize once per battle.\n\n"
                                "You can also Mega Evolve once per battle."
                            ),
    },
    [HELP_MEGA_EVOLUTION] =
    {
        .header = COMPOUND_STRING("Information: Mega Evolution"),
        .desc = COMPOUND_STRING("In battle, press {START_BUTTON} to Mega Evolve!\n\n"
                                "The Pokémon must hold their Mega Stone\n"
                                "to be able to Mega Evolve.\n"
                                "You can only Mega Evolve once per battle.\n\n"
                                "You can also Terastallize once per battle."
                            ),
    },/*
    [HELP_GIMMIGHOUL_COINS] =
    {
        .header = COMPOUND_STRING("Information: Evolving Gimmighoul into Gholdengo"),
        .desc = COMPOUND_STRING("To evolve Gimmighoul into Gholdengo, you\n"
                                "need to gather 999 {COLOR RED}Gimmighoul Coins{COLOR DARK_GRAY}.\n\n"
                                "You can find Gimmighoul Coins scattered\n"
                                "all around Paldea."
                            ),
        .headerFont = FONT_NARROWER,
    },*/
    // Add more entries
};
