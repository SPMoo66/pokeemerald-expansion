#ifndef GUARD_SCRIPT_POKEMON_UTIL_H
#define GUARD_SCRIPT_POKEMON_UTIL_H

u32 ScriptGiveMon(enum Species species, u8 level, enum Item item);
u8 ScriptGiveEgg(enum Species species);
void CreateScriptedWildMon(enum Species species, u8 level, enum Item item);
void CreateScriptedDoubleWildMon(enum Species species, u8 level, enum Item item, u8 abilityNum, enum Species species2, u8 level2, enum Item item2, u8 abilityNum2, u16 move11, u16 move12, u16 move13, u16 move14, u16 move21, u16 move22, u16 move23, u16 move24);
void ScriptSetMonMoveSlot(u8 monIndex, enum Move move, u8 slot);
void ReducePlayerPartyToSelectedMons(void);
void HealPlayerParty(void);
void Script_GetChosenMonOffensiveEVs(void);
void Script_GetChosenMonDefensiveEVs(void);
void Script_GetChosenMonOffensiveIVs(void);
void Script_GetChosenMonDefensiveIVs(void);

#endif // GUARD_SCRIPT_POKEMON_UTIL_H
