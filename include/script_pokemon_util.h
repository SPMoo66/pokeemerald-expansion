#ifndef GUARD_SCRIPT_POKEMON_UTIL_H
#define GUARD_SCRIPT_POKEMON_UTIL_H

u32 ScriptGiveMon(u16 species, u8 level, u16 item);
u8 ScriptGiveEgg(u16 species);
void CreateScriptedWildMon(u16 species, u8 level, u16 item);
void CreateScriptedDoubleWildMon(u16 species, u8 level, u16 item, u8 abilityNum, u16 species2, u8 level2, u16 item2, u8 abilityNum2, u16 move11, u16 move12, u16 move13, u16 move14, u16 move21, u16 move22, u16 move23, u16 move24);
void ScriptSetMonMoveSlot(u8 monIndex, u16 move, u8 slot);
void ReducePlayerPartyToSelectedMons(void);
void HealPlayerParty(void);
void Script_GetChosenMonOffensiveEVs(void);
void Script_GetChosenMonDefensiveEVs(void);
void Script_GetChosenMonOffensiveIVs(void);
void Script_GetChosenMonDefensiveIVs(void);

#endif // GUARD_SCRIPT_POKEMON_UTIL_H
