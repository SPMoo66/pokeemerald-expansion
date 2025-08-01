#include "global.h"
#include "battle.h"
#include "battle_anim.h"
#include "battle_controllers.h"
#include "battle_message.h"
#include "battle_setup.h"
#include "battle_tower.h"
#include "battle_z_move.h"
#include "data.h"
#include "event_data.h"
#include "frontier_util.h"
#include "graphics.h"
#include "international_string_util.h"
#include "item.h"
#include "link.h"
#include "menu.h"
#include "palette.h"
#include "recorded_battle.h"
#include "string_util.h"
#include "strings.h"
#include "test_runner.h"
#include "text.h"
#include "trainer_hill.h"
#include "window.h"
#include "line_break.h"
#include "constants/abilities.h"
#include "constants/battle_dome.h"
#include "constants/battle_string_ids.h"
#include "constants/frontier_util.h"
#include "constants/items.h"
#include "constants/moves.h"
#include "constants/opponents.h"
#include "constants/species.h"
#include "constants/trainers.h"
#include "constants/trainer_hill.h"
#include "constants/weather.h"
#include "trainer_slide.h"
#include "battle_message.h"

static u32 BattlerHPPercentage(u32 battler, u32 operation, u32 threshold);
static u32 GetEnemyMonCount(u32 firstId, u32 lastId, bool32 onlyAlive);
static bool32 DoesTrainerHaveSlideMessage(enum DifficultyLevel difficulty, u32 trainerId, u32 slideId);
static bool32 ShouldRunTrainerSlidePlayerLandsFirstCriticalHit(enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlideEnemyLandsFirstCriticalHit(enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlidePlayerLandsFirstSuperEffectiveHit(u32 battler, enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlidePlayerLandsFirstSTABMove(u32 firstId, u32 lastId, enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlidePlayerLandsFirstDown(u32 firstId, u32 lastId);
static bool32 ShouldRunTrainerSlideEnemyMonUnaffected(u32 firstId, u32 lastId, enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlideLastSwitchIn(u32 battler);
static bool32 ShouldRunTrainerSlideLastHalfHP(u32 firstId, u32 lastId, u32 battler);
static bool32 ShouldRunTrainerSlideLastLowHp(u32 firstId, u32 lastId, u32 battler);
static void SetTrainerSlideParamters(u32 battler, u32* firstId, u32* lastId, u32* trainerId, u32* retValue);
static bool32 IsSlideInitalizedOrPlayed(enum TrainerSlideType slideId);



static const u8 sText_FirstDownRoxanne[] = _("I just have to apply what I've\nlearned in school. Then, I'll win!{PAUSE_UNTIL_PRESS}");
static const u8 sText_FirstDownBrawly[] = _("Whoa, that's what I'm talking about!{PAUSE_UNTIL_PRESS}");
static const u8 sText_FirstDownWattson[] = _("Wahaha! What a shock!{PAUSE_UNTIL_PRESS}");
static const u8 sText_FirstDownFlannery[] = _("Shoot, what line am I supposed to say?{PAUSE_UNTIL_PRESS}");
static const u8 sText_FirstDownNorman[] = _("Oh? You've become strong!{PAUSE_UNTIL_PRESS}");
static const u8 sText_FirstDownWinona[] = _("Ha!\nCome, rise up!{PAUSE_UNTIL_PRESS}");
static const u8 sText_FirstDownLizaTate[] = _("Liza: The stars will guide us!{PAUSE_UNTIL_PRESS}");
static const u8 sText_FirstDownJuan[] = _("Yes! Let me embrace your artistry!{PAUSE_UNTIL_PRESS}");
static const u8 sText_FirstDownSidney[] = _("Yeah! My blood's pumping!{PAUSE_UNTIL_PRESS}");
static const u8 sText_FirstDownPhoebe[] = _("Are the bonds you share enough to\nbeat ours?{PAUSE_UNTIL_PRESS}");
static const u8 sText_FirstDownGlacia[] = _("Is that the best that one from\nHoenn can bring?{PAUSE_UNTIL_PRESS}");
static const u8 sText_FirstDownDrake[] = _("Is that luck… or skill?{PAUSE_UNTIL_PRESS}");
static const u8 sText_FirstDownWallace[] = _("Encore! Encore!{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastSwitchRoxanne[] = _("No… What was I supposed to do in\nthis situation?{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastSwitchBrawly[] = _("Great show!\nBut there's no wave I can't conquer!{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastSwitchWattson[] = _("Let's see if you get past this last\ntrap I've laid!{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastSwitchFlannery[] = _("Ah! Trainer!\nI've not lost yet!{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastSwitchNorman[] = _("{B_PLAYER_NAME}, I'm so proud…{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastSwitchWinona[] = _("Every great tale has its climax…\nEn garde!{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastSwitchLizaTate[] = _("Tate: Liza, focus!{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastSwitchJuan[] = _("Glitz! Glamor!\nShow me all you have!{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastSwitchSidney[] = _("Keep it up, or I'll knock you out!{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastSwitchPhoebe[] = _("Down to the last…\nWe can do this.{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastSwitchGlacia[] = _("A trainer of your strength has been\nsuch a rare occurrence!{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastSwitchDrake[] = _("Pay attention now. It's far from over!{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastSwitchWallace[] = _("Keep this dance going!{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastSwitchMaxieMtChimney[] = _("I must last…\nUntil the Meteorite…{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastSwitchMaxieMagmaHideout[] = _("Where is… Groudon?{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastSwitchMaxieMossdeep[] = _("No… Not this plan too!{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastSwitchArchie[] = _("How 'boat that?\nWe're down to the last…{PAUSE_UNTIL_PRESS}");
static const u8 sText_MegaLizaTate[] = _("Tate: Now!\nLiza: Mega Evolution!{PAUSE_UNTIL_PRESS}");
static const u8 sText_MegaJuan[] = _("Now, to display even greater beauty!\nDance with me!{PAUSE_UNTIL_PRESS}");
static const u8 sText_MegaSidney[] = _("What a show!\nCome on, Centiskorch!{PAUSE_UNTIL_PRESS}");
static const u8 sText_MegaPhoebe[] = _("Hydreigon, help me finish this out!{PAUSE_UNTIL_PRESS}");
static const u8 sText_MegaGlacia[] = _("Let me cool down your drive.{PAUSE_UNTIL_PRESS}");
static const u8 sText_MegaDrake[] = _("Flygon, let's put an end to this!{PAUSE_UNTIL_PRESS}");
static const u8 sText_MegaWallace[] = _("Yes, more power is what I'll need to\nkeep up with you!{PAUSE_UNTIL_PRESS}");
static const u8 sText_MegaMaxieMagmaHideout[] = _("Sandaconda!\nUse this power!{PAUSE_UNTIL_PRESS}");
static const u8 sText_MegaArchie[] = _("No! More power!{PAUSE_UNTIL_PRESS}");
static const u8 sText_CriticalHitMaxie[] = _("Child! Stop that at once!{PAUSE_UNTIL_PRESS}");
static const u8 sText_CriticalHitArchie[] = _("Ha! Bring it on, kid!{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastHalfSidney[] = _("Come on, time for the photo finish!{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastHalfPhoebe[] = _("{B_PLAYER_NAME}, it seems that\nyou've overcome a lot.{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastHalfGlacia[] = _("What a fiery spirit you have within you!{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastHalfDrake[] = _("Yes… it seems like you may know what\nyou need to be a trainer.{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastHalfWallace[] = _("And now, the final step!{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastHalfMaxieMossdeep[] = _("Hah… Is this… the end?{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastHalfArchie[] = _("Hah…\nIt's looking pretty grim now.{PAUSE_UNTIL_PRESS}");
static const u8 sText_BeforeFirstTurnWallace[] = _("I know your strength, but now is your\nchance to show the world!{PAUSE_UNTIL_PRESS}");
static const u8 sText_FirstSuperEffectiveHit_Brendan[] = _("Ack!\nYou know about type matchups already?{PAUSE_UNTIL_PRESS}");
static const u8 sText_BeforeFirstTurn_Brendan[] = _("Let's do this, {B_PLAYER_NAME}!{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastSwitch_Brendan[] = _("Pressed to the very end!{PAUSE_UNTIL_PRESS}");
static const u8 sText_Mega_Brendan[] = _("Mega evolution!\nIt's just what I need to beat you!{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastHalf_Brendan[] = _("Wow, {B_PLAYER_NAME}…\nYou really are…{PAUSE_UNTIL_PRESS}");
static const u8 sText_FirstSuperEffectiveHit_May[] = _("Oh no!\nDon't use that move against me!{PAUSE_UNTIL_PRESS}");
static const u8 sText_BeforeFirstTurn_May[] = _("Let's both do our best, {B_PLAYER_NAME}!{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastSwitch_May[] = _("My last…\nI'm counting on you!{PAUSE_UNTIL_PRESS}");
static const u8 sText_Mega_May[] = _("{B_PLAYER_NAME}, can you keep up with this?{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastHalf_May[] = _("{B_PLAYER_NAME}…\nYou could just be able…{PAUSE_UNTIL_PRESS}");

static const u8 sText_BeforeFirstTurn_Jakson1[] = _("Alright now, show me what you've got\nso far!{PAUSE_UNTIL_PRESS}");
static const u8 sText_BeforeFirstTurn_Jakson2[] = _("Don't think you'll recognize anything.\nMy team won't make it that easy on\lyou.{PAUSE_UNTIL_PRESS}");
static const u8 sText_BeforeFirstTurn_Jakson3[] = _("{B_PLAYER_NAME}… One final battle.\nLet's get this started.{PAUSE_UNTIL_PRESS}");
static const u8 sText_BeforeFirstTurn_Harper1[] = _("So… I select attacks…?{PAUSE_UNTIL_PRESS}");
static const u8 sText_BeforeFirstTurn_Harper2[] = _("Another fight, then? Well, feel free\nto throw it if you don't care.{PAUSE_UNTIL_PRESS}");
static const u8 sText_BeforeFirstTurn_Harper3[] = _("No more confusion. No more questions.\nI'm ready for this, {B_PLAYER_NAME}.{PAUSE_UNTIL_PRESS}");
static const u8 sText_BeforeFirstTurn_Redd1[] = _("Heh. Like riding a bike.{PAUSE_UNTIL_PRESS}");
static const u8 sText_BeforeFirstTurn_Redd2[] = _("Rival {B_PLAYER_NAME} challenges me to a\nbattle! Let's see if you're keeping up.{PAUSE_UNTIL_PRESS}");
static const u8 sText_BeforeFirstTurn_Redd3[] = _("Nowhere to go but to victory or defeat.\nLet's do this, {B_PLAYER_NAME}.{PAUSE_UNTIL_PRESS}");
static const u8 sText_BeforeFirstTurn_Sakura1[] = _("It's time to crush you just like the\nrest{EMOJI_TILDE}{PAUSE_UNTIL_PRESS}");
static const u8 sText_BeforeFirstTurn_Sakura2[] = _("Cuteness Inspector Sakura, reporting\nfor duty!{PAUSE_UNTIL_PRESS}");
static const u8 sText_BeforeFirstTurn_Sakura3[] = _("Now, {B_PLAYER_NAME}, judgment comes for\nyour final team.{PAUSE_UNTIL_PRESS}");
static const u8 sText_BeforeFirstTurn_Baron1[] = _("Wait, what's going on?{PAUSE_UNTIL_PRESS}");
static const u8 sText_BeforeFirstTurn_Baron2[] = _("Yes. A battle. I've got this. I indeed\ndo have this handled. Buttons and all.{PAUSE_UNTIL_PRESS}");
static const u8 sText_BeforeFirstTurn_Baron3[] = _("Please do try your best. I'll face your\ntest of me just as you face mine.{PAUSE_UNTIL_PRESS}");

static const u8 sText_FirstSuperEffectiveHit_Jakson1[] = _("Ah, so you do know your type matchups!\nGood! You're not completely new to this.{PAUSE_UNTIL_PRESS}");
static const u8 sText_FirstSuperEffectiveHit_Jakson2[] = _("Ah… I was hoping you wouldn't see\nthat opening.{PAUSE_UNTIL_PRESS}");
static const u8 sText_FirstSuperEffectiveHit_Jakson3[] = _("Just a necessary sacrifice!{PAUSE_UNTIL_PRESS}");
static const u8 sText_FirstSuperEffectiveHit_Harper1[] = _("Woah?! That did SO much more!{PAUSE_UNTIL_PRESS}");
static const u8 sText_FirstSuperEffectiveHit_Harper2[] = _("I knew I should've switched…{PAUSE_UNTIL_PRESS}");
static const u8 sText_FirstSuperEffectiveHit_Harper3[] = _("Agh. Do you know my critters better\nthan I do, maybe?{PAUSE_UNTIL_PRESS}");
static const u8 sText_FirstSuperEffectiveHit_Redd1[] = _("Shoot, I forgot about that matchup!{PAUSE_UNTIL_PRESS}");
static const u8 sText_FirstSuperEffectiveHit_Redd2[] = _("Ah… Right. That's a weakness now,\nisn't it?{PAUSE_UNTIL_PRESS}");
static const u8 sText_FirstSuperEffectiveHit_Redd3[] = _("Damn, you remembered that one. I'll\njust have to strike back even harder!{PAUSE_UNTIL_PRESS}");
static const u8 sText_FirstSuperEffectiveHit_Sakura1[] = _("Good one!\nBut don't forget I can do that too!{PAUSE_UNTIL_PRESS}");
static const u8 sText_FirstSuperEffectiveHit_Sakura2[] = _("All punishment will be paid back\ntwofold!{PAUSE_UNTIL_PRESS}");
static const u8 sText_FirstSuperEffectiveHit_Sakura3[] = _("Hmph! Tis just a scratch.{PAUSE_UNTIL_PRESS}");
static const u8 sText_FirstSuperEffectiveHit_Baron1[] = _("Why did the gauge thing go down that\nmuch?! Did I do something wrong?{PAUSE_UNTIL_PRESS}");
static const u8 sText_FirstSuperEffectiveHit_Baron2[] = _("So that's a weakness… I'll try to\nremember that one for next time!{PAUSE_UNTIL_PRESS}");
static const u8 sText_FirstSuperEffectiveHit_Baron3[] = _("That's okay. We won't be able to get\nthrough a battle without some of\lour weaknesses getting hit.{PAUSE_UNTIL_PRESS}");

static const u8 sText_MegaEvolution_Jakson[] = _("Watch this comeback! Tyranitar!{PAUSE_UNTIL_PRESS}");
static const u8 sText_MegaEvolution_Harper[] = _("Time to get BIG! Corviknight!{PAUSE_UNTIL_PRESS}");
static const u8 sText_MegaEvolution_Redd[] = _("Charizard… mega evolve to…!{PAUSE_UNTIL_PRESS}");
static const u8 sText_MegaEvolution_Sakura[] = _("Haxorus, bring down the blade of\njudment on your foe!{PAUSE_UNTIL_PRESS}");
static const u8 sText_MegaEvolution_Baron[] = _("Alright, just press {START_BUTTON} and…{PAUSE_UNTIL_PRESS}");

static const u8 sText_LastSwitch_Jakson1[] = _("You've got me on the ropes. Nice\nstrategizing!{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastSwitch_Jakson2[] = _("You keep pushing me to last resorts.\nDon't think this is over yet!{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastSwitch_Jakson3[] = _("Do you think I haven't planned for\nthis? Time for the turnabout!{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastSwitch_Harper1[] = _("Uh… Just the one left? Shoot.{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastSwitch_Harper2[] = _("Hey! You don't need to fight back\nTHAT enthusiastically.{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastSwitch_Harper3[] = _("…Just the one left? Okay.\nWe can do this. I can do this.{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastSwitch_Redd1[] = _("Tsk. And that was a top percentage\nRattata you took out.{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastSwitch_Redd2[] = _("I choose you, Pikachu!{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastSwitch_Redd3[] = _("It's now that I need my research to\nall pay off. Here goes nothing!{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastSwitch_Sakura1[] = _("You pushed me to use all of my\nPokémon? What a twist…!{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastSwitch_Sakura2[] = _("I saved the best for last!{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastSwitch_Sakura3[] = _("The ultimate finale is here!{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastSwitch_Baron1[] = _("Oh, I had more? I think this is my last?{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastSwitch_Baron2[] = _("Uh… last one. I'll do my best to give\nyou a challenge to the end.{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastSwitch_Baron3[] = _("Just calm down… think…\nI can do this. I can.{PAUSE_UNTIL_PRESS}");

static const u8 sText_LastHalf_Jakson2[] = _("One last play. I need to see how\nyou handle this strategy.{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastHalf_Jakson3[] = _("We're here again… Alright. One last\ntry. One last strategy. Face it like\lyou have so well before.{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastHalf_Harper2[] = _("Hey, would it be okay if I grabbed\nanother from the box real quick…\lNo?{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastHalf_Harper3[] = _("What left to do…? Is this the\nextent of what I can achieve?{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastHalf_Redd2[] = _("In cases like this… what to do…?{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastHalf_Redd3[] = _("Right at the finish line! Come on!{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastHalf_Sakura2[] = _("Hah… You've… uh… activated my\ntrap card? What else is there left\lto try…?{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastHalf_Sakura3[] = _("Even on the edge of defeat, Sakura\nshall find a way to win! That is the\lfate of such things!{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastHalf_Baron2[] = _("Well, this doesn't look good.{PAUSE_UNTIL_PRESS}");
static const u8 sText_LastHalf_Baron3[] = _("This is okay. It is. I'll go to the very\nend, but perhaps this is for the best.{PAUSE_UNTIL_PRESS}");


static const u8* const sTrainerSlides[DIFFICULTY_COUNT][TRAINERS_COUNT][TRAINER_SLIDE_COUNT] =
{
    [DIFFICULTY_NORMAL] =
    {
        [TRAINER_ROXANNE_1] =
		{
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN] = sText_FirstDownRoxanne,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitchRoxanne,
        },
        [TRAINER_BRAWLY_1] =
		{
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN] = sText_FirstDownBrawly,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitchBrawly,
        },
        [TRAINER_WATTSON_1] =
		{
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN] = sText_FirstDownWattson,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitchWattson,
        },
        [TRAINER_FLANNERY_1] =
		{
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN] = sText_FirstDownFlannery,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitchFlannery
        },
        [TRAINER_NORMAN_1] =
		{
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN] = sText_FirstDownNorman,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitchNorman
        },
        [TRAINER_WINONA_1] =
		{
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN] = sText_FirstDownWinona,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitchWinona
        },
        [TRAINER_TATE_AND_LIZA_1] =
		{
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN] = sText_FirstDownLizaTate,
            [TRAINER_SLIDE_MEGA_EVOLUTION] = sText_MegaLizaTate,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitchLizaTate
        },
        [TRAINER_JUAN_1] =
		{
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN] = sText_FirstDownJuan,
            [TRAINER_SLIDE_MEGA_EVOLUTION] = sText_MegaJuan,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitchJuan
        },
        [TRAINER_SIDNEY] =
		{
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN] = sText_FirstDownSidney,
            [TRAINER_SLIDE_MEGA_EVOLUTION] = sText_MegaSidney,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitchSidney,
            [TRAINER_SLIDE_LAST_HALF_HP] = sText_LastHalfSidney
        },
        [TRAINER_PHOEBE] =
		{
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN] = sText_FirstDownPhoebe,
            [TRAINER_SLIDE_MEGA_EVOLUTION] = sText_MegaPhoebe,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitchPhoebe,
            [TRAINER_SLIDE_LAST_HALF_HP] = sText_LastHalfPhoebe
        },
        [TRAINER_GLACIA] =
		{
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN] = sText_FirstDownGlacia,
            [TRAINER_SLIDE_MEGA_EVOLUTION] = sText_MegaGlacia,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitchGlacia,
            [TRAINER_SLIDE_LAST_HALF_HP] = sText_LastHalfGlacia
        },
        [TRAINER_DRAKE] =
		{
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN] = sText_FirstDownDrake,
            [TRAINER_SLIDE_MEGA_EVOLUTION] = sText_MegaDrake,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitchDrake,
            [TRAINER_SLIDE_LAST_HALF_HP] = sText_LastHalfDrake
        },
        [TRAINER_WALLACE] =
		{
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] = sText_BeforeFirstTurnWallace,
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN] = sText_FirstDownWallace,
            [TRAINER_SLIDE_MEGA_EVOLUTION] = sText_MegaWallace,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitchWallace,
            [TRAINER_SLIDE_LAST_HALF_HP] = sText_LastHalfWallace
        },
        [TRAINER_ARCHIE] =
		{
            [TRAINER_SLIDE_MEGA_EVOLUTION] = sText_MegaArchie,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitchArchie,
            [TRAINER_SLIDE_LAST_HALF_HP] = sText_LastHalfArchie,
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT] = sText_CriticalHitArchie
        },
        [TRAINER_MAXIE_MT_CHIMNEY] =
		{
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitchMaxieMtChimney,
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT] = sText_CriticalHitMaxie
        },
        [TRAINER_MAXIE_MAGMA_HIDEOUT] =
		{
            [TRAINER_SLIDE_MEGA_EVOLUTION] = sText_MegaMaxieMagmaHideout,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitchMaxieMagmaHideout,
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT] = sText_CriticalHitMaxie
        },
        [TRAINER_MAXIE_MOSSDEEP] =
		{
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitchMaxieMossdeep,
            [TRAINER_SLIDE_LAST_HALF_HP] = sText_LastHalfMaxieMossdeep,
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT] = sText_CriticalHitMaxie
        },
        [TRAINER_GIOVANNI_REFUGE] =
		{
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] = COMPOUND_STRING("You're about to learn why you\nshouldn't have interfered!{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_MEGA_EVOLUTION] = COMPOUND_STRING("More power! Obey me!!{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("Arrgh!! This isn't over!!{PAUSE_UNTIL_PRESS}")
        },
        [TRAINER_BRENDAN_ROUTE_103_MUDKIP] = 
        {
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT] = sText_FirstSuperEffectiveHit_Brendan,
        },
        [TRAINER_BRENDAN_ROUTE_103_TORCHIC] = 
        {
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT] = sText_FirstSuperEffectiveHit_Brendan,
        },
        [TRAINER_BRENDAN_ROUTE_103_TREECKO] = 
        {
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT] = sText_FirstSuperEffectiveHit_Brendan,
        },
        [TRAINER_MAY_ROUTE_103_MUDKIP] = 
        {
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT] = sText_FirstSuperEffectiveHit_May,
        },
        [TRAINER_MAY_ROUTE_103_TORCHIC] = 
        {
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT] = sText_FirstSuperEffectiveHit_May,
        },
        [TRAINER_MAY_ROUTE_103_TREECKO] = 
        {
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT] = sText_FirstSuperEffectiveHit_May,
        },
        [TRAINER_BRENDAN_RUSTBORO_MUDKIP] = 
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] = sText_BeforeFirstTurn_Brendan,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitch_Brendan,
        },
        [TRAINER_BRENDAN_RUSTBORO_TORCHIC] = 
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] = sText_BeforeFirstTurn_Brendan,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitch_Brendan,
        },
        [TRAINER_BRENDAN_RUSTBORO_TREECKO] = 
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] = sText_BeforeFirstTurn_Brendan,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitch_Brendan,
        },
        [TRAINER_MAY_RUSTBORO_MUDKIP] = 
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] = sText_BeforeFirstTurn_May,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitch_May,
        },
        [TRAINER_MAY_RUSTBORO_TORCHIC] = 
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] = sText_BeforeFirstTurn_May,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitch_May,
        },
        [TRAINER_MAY_RUSTBORO_TREECKO] = 
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] = sText_BeforeFirstTurn_May,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitch_May,
        },
        [TRAINER_BRENDAN_ROUTE_110_MUDKIP] = 
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] = sText_BeforeFirstTurn_Brendan,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitch_Brendan,
        },
        [TRAINER_BRENDAN_ROUTE_110_TORCHIC] = 
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] = sText_BeforeFirstTurn_Brendan,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitch_Brendan,
        },
        [TRAINER_BRENDAN_ROUTE_110_TREECKO] = 
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] = sText_BeforeFirstTurn_Brendan,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitch_Brendan,
        },
        [TRAINER_MAY_ROUTE_110_MUDKIP] = 
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] = sText_BeforeFirstTurn_May,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitch_May,
        },
        [TRAINER_MAY_ROUTE_110_TORCHIC] = 
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] = sText_BeforeFirstTurn_May,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitch_May,
        },
        [TRAINER_MAY_ROUTE_110_TREECKO] = 
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] = sText_BeforeFirstTurn_May,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitch_May,
        },
        [TRAINER_BRENDAN_ROUTE_119_MUDKIP] = 
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] = sText_BeforeFirstTurn_Brendan,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitch_Brendan,
        },
        [TRAINER_BRENDAN_ROUTE_119_TORCHIC] = 
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] = sText_BeforeFirstTurn_Brendan,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitch_Brendan,
        },
        [TRAINER_BRENDAN_ROUTE_119_TREECKO] = 
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] = sText_BeforeFirstTurn_Brendan,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitch_Brendan,
        },
        [TRAINER_MAY_ROUTE_119_MUDKIP] = 
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] = sText_BeforeFirstTurn_May,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitch_May,
        },
        [TRAINER_MAY_ROUTE_119_TORCHIC] = 
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] = sText_BeforeFirstTurn_May,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitch_May,
        },
        [TRAINER_MAY_ROUTE_119_TREECKO] = 
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] = sText_BeforeFirstTurn_May,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitch_May,
        },
        [TRAINER_BRENDAN_LILYCOVE_MUDKIP] = 
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] = sText_BeforeFirstTurn_Brendan,
            [TRAINER_SLIDE_MEGA_EVOLUTION] = sText_Mega_Brendan,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitch_Brendan,
        },
        [TRAINER_BRENDAN_LILYCOVE_TORCHIC] = 
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] = sText_BeforeFirstTurn_Brendan,
            [TRAINER_SLIDE_MEGA_EVOLUTION] = sText_Mega_Brendan,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitch_Brendan,
        },
        [TRAINER_BRENDAN_LILYCOVE_TREECKO] = 
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] = sText_BeforeFirstTurn_Brendan,
            [TRAINER_SLIDE_MEGA_EVOLUTION] = sText_Mega_Brendan,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitch_Brendan,
        },
        [TRAINER_MAY_LILYCOVE_MUDKIP] = 
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] = sText_BeforeFirstTurn_May,
            [TRAINER_SLIDE_MEGA_EVOLUTION] = sText_Mega_May,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitch_May,
        },
        [TRAINER_MAY_LILYCOVE_TORCHIC] = 
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] = sText_BeforeFirstTurn_May,
            [TRAINER_SLIDE_MEGA_EVOLUTION] = sText_Mega_May,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitch_May,
        },
        [TRAINER_MAY_LILYCOVE_TREECKO] = 
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] = sText_BeforeFirstTurn_May,
            [TRAINER_SLIDE_MEGA_EVOLUTION] = sText_Mega_May,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitch_May,
        },
        [TRAINER_BRENDAN_SKY_PILLAR_MUDKIP] = 
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] = sText_BeforeFirstTurn_Brendan,
            [TRAINER_SLIDE_MEGA_EVOLUTION] = sText_Mega_Brendan,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitch_Brendan,
            [TRAINER_SLIDE_LAST_HALF_HP] = sText_LastHalf_Brendan,
        },
        [TRAINER_BRENDAN_SKY_PILLAR_TORCHIC] = 
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] = sText_BeforeFirstTurn_Brendan,
            [TRAINER_SLIDE_MEGA_EVOLUTION] = sText_Mega_Brendan,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitch_Brendan,
            [TRAINER_SLIDE_LAST_HALF_HP] = sText_LastHalf_Brendan,
        },
        [TRAINER_BRENDAN_SKY_PILLAR_TREECKO] = 
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] = sText_BeforeFirstTurn_Brendan,
            [TRAINER_SLIDE_MEGA_EVOLUTION] = sText_Mega_Brendan,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitch_Brendan,
            [TRAINER_SLIDE_LAST_HALF_HP] = sText_LastHalf_Brendan,
        },
        [TRAINER_MAY_SKY_PILLAR_MUDKIP] = 
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] = sText_BeforeFirstTurn_May,
            [TRAINER_SLIDE_MEGA_EVOLUTION] = sText_Mega_May,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitch_May,
            [TRAINER_SLIDE_LAST_HALF_HP] = sText_LastHalf_May,
        },
        [TRAINER_MAY_SKY_PILLAR_TORCHIC] = 
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] = sText_BeforeFirstTurn_May,
            [TRAINER_SLIDE_MEGA_EVOLUTION] = sText_Mega_May,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitch_May,
            [TRAINER_SLIDE_LAST_HALF_HP] = sText_LastHalf_May,
        },
        [TRAINER_MAY_SKY_PILLAR_TREECKO] = 
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] = sText_BeforeFirstTurn_May,
            [TRAINER_SLIDE_MEGA_EVOLUTION] = sText_Mega_May,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitch_May,
            [TRAINER_SLIDE_LAST_HALF_HP] = sText_LastHalf_May,
        },
        [TRAINER_WALLY_MAUVILLE] = 
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] = COMPOUND_STRING("Go…! Pokémon?"),
        },
        [TRAINER_WALLY_PETALBURG] = 
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] = COMPOUND_STRING("Go! Pokémon!"),
        },
        [TRAINER_WALLY_VR_1] = 
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] = COMPOUND_STRING("Let's go, team!"),
            [TRAINER_SLIDE_MEGA_EVOLUTION] = COMPOUND_STRING("Come on, Gallade!"),
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("Not so fast, {B_PLAYER_NAME}!\nIt's not over yet!"),
        },

        [TRAINER_JAKSON_1] =
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] =                      sText_BeforeFirstTurn_Jakson1,
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT] = sText_FirstSuperEffectiveHit_Jakson1,
            [TRAINER_SLIDE_LAST_SWITCHIN] =                          sText_LastSwitch_Jakson1,
        },
        [TRAINER_HARPER_1] =
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] =                      sText_BeforeFirstTurn_Harper1,
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT] = sText_FirstSuperEffectiveHit_Harper1,
            [TRAINER_SLIDE_LAST_SWITCHIN] =                          sText_LastSwitch_Harper1,
        },
        [TRAINER_REDD_1] =
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] =                      sText_BeforeFirstTurn_Redd1,
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT] = sText_FirstSuperEffectiveHit_Redd1,
            [TRAINER_SLIDE_LAST_SWITCHIN] =                          sText_LastSwitch_Redd1,
        },
        [TRAINER_SAKURA_1] =
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] =                      sText_BeforeFirstTurn_Sakura1,
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT] = sText_FirstSuperEffectiveHit_Sakura1,
            [TRAINER_SLIDE_LAST_SWITCHIN] =                          sText_LastSwitch_Sakura1,
        },
        [TRAINER_BARON_1] =
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] =                      sText_BeforeFirstTurn_Baron1,
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT] = sText_FirstSuperEffectiveHit_Baron1,
            [TRAINER_SLIDE_LAST_SWITCHIN] =                          sText_LastSwitch_Baron1,
        },

        [TRAINER_JAKSON_2] =
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] =                      sText_BeforeFirstTurn_Jakson2,
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT] = sText_FirstSuperEffectiveHit_Jakson2,
            [TRAINER_SLIDE_LAST_SWITCHIN] =                          sText_LastSwitch_Jakson2,
            [TRAINER_SLIDE_LAST_HALF_HP] =                           sText_LastHalf_Jakson2,
        },
        [TRAINER_HARPER_2] =
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] =                      sText_BeforeFirstTurn_Harper2,
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT] = sText_FirstSuperEffectiveHit_Harper2,
            [TRAINER_SLIDE_LAST_SWITCHIN] =                          sText_LastSwitch_Harper2,
            [TRAINER_SLIDE_LAST_HALF_HP] =                           sText_LastHalf_Harper2,
        },
        [TRAINER_REDD_2] =
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] =                      sText_BeforeFirstTurn_Redd2,
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT] = sText_FirstSuperEffectiveHit_Redd2,
            [TRAINER_SLIDE_LAST_SWITCHIN] =                          sText_LastSwitch_Redd2,
            [TRAINER_SLIDE_LAST_HALF_HP] =                           sText_LastHalf_Redd2,
        },
        [TRAINER_SAKURA_2] =
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] =                      sText_BeforeFirstTurn_Sakura2,
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT] = sText_FirstSuperEffectiveHit_Sakura2,
            [TRAINER_SLIDE_LAST_SWITCHIN] =                          sText_LastSwitch_Sakura2,
            [TRAINER_SLIDE_LAST_HALF_HP] =                           sText_LastHalf_Sakura2,
        },
        [TRAINER_BARON_2] =
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] =                      sText_BeforeFirstTurn_Baron2,
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT] = sText_FirstSuperEffectiveHit_Baron2,
            [TRAINER_SLIDE_LAST_SWITCHIN] =                          sText_LastSwitch_Baron2,
            [TRAINER_SLIDE_LAST_HALF_HP] =                           sText_LastHalf_Baron2,
        },

        [TRAINER_JAKSON_3] =
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] =                      sText_BeforeFirstTurn_Jakson2,
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT] = sText_FirstSuperEffectiveHit_Jakson2,
            [TRAINER_SLIDE_LAST_SWITCHIN] =                          sText_LastSwitch_Jakson2,
            [TRAINER_SLIDE_LAST_HALF_HP] =                           sText_LastHalf_Jakson2,
        },
        [TRAINER_HARPER_3] =
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] =                      sText_BeforeFirstTurn_Harper2,
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT] = sText_FirstSuperEffectiveHit_Harper2,
            [TRAINER_SLIDE_LAST_SWITCHIN] =                          sText_LastSwitch_Harper2,
            [TRAINER_SLIDE_LAST_HALF_HP] =                           sText_LastHalf_Harper2,
        },
        [TRAINER_REDD_3] =
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] =                      sText_BeforeFirstTurn_Redd2,
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT] = sText_FirstSuperEffectiveHit_Redd2,
            [TRAINER_SLIDE_LAST_SWITCHIN] =                          sText_LastSwitch_Redd2,
            [TRAINER_SLIDE_LAST_HALF_HP] =                           sText_LastHalf_Redd2,
        },
        [TRAINER_SAKURA_3] =
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] =                      sText_BeforeFirstTurn_Sakura2,
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT] = sText_FirstSuperEffectiveHit_Sakura2,
            [TRAINER_SLIDE_LAST_SWITCHIN] =                          sText_LastSwitch_Sakura2,
            [TRAINER_SLIDE_LAST_HALF_HP] =                           sText_LastHalf_Sakura2,
        },
        [TRAINER_BARON_3] =
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] =                      sText_BeforeFirstTurn_Baron2,
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT] = sText_FirstSuperEffectiveHit_Baron2,
            [TRAINER_SLIDE_LAST_SWITCHIN] =                          sText_LastSwitch_Baron2,
            [TRAINER_SLIDE_LAST_HALF_HP] =                           sText_LastHalf_Baron2,
        },

        [TRAINER_JAKSON_4] =
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] =                      sText_BeforeFirstTurn_Jakson2,
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT] = sText_FirstSuperEffectiveHit_Jakson2,
            [TRAINER_SLIDE_LAST_SWITCHIN] =                          sText_LastSwitch_Jakson2,
            [TRAINER_SLIDE_LAST_HALF_HP] =                           sText_LastHalf_Jakson2,
        },
        [TRAINER_HARPER_4] =
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] =                      sText_BeforeFirstTurn_Harper2,
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT] = sText_FirstSuperEffectiveHit_Harper2,
            [TRAINER_SLIDE_LAST_SWITCHIN] =                          sText_LastSwitch_Harper2,
            [TRAINER_SLIDE_LAST_HALF_HP] =                           sText_LastHalf_Harper2,
        },
        [TRAINER_REDD_4] =
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] =                      sText_BeforeFirstTurn_Redd2,
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT] = sText_FirstSuperEffectiveHit_Redd2,
            [TRAINER_SLIDE_LAST_SWITCHIN] =                          sText_LastSwitch_Redd2,
            [TRAINER_SLIDE_LAST_HALF_HP] =                           sText_LastHalf_Redd2,
        },
        [TRAINER_SAKURA_4] =
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] =                      sText_BeforeFirstTurn_Sakura2,
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT] = sText_FirstSuperEffectiveHit_Sakura2,
            [TRAINER_SLIDE_LAST_SWITCHIN] =                          sText_LastSwitch_Sakura2,
            [TRAINER_SLIDE_LAST_HALF_HP] =                           sText_LastHalf_Sakura2,
        },
        [TRAINER_BARON_4] =
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] =                      sText_BeforeFirstTurn_Baron2,
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT] = sText_FirstSuperEffectiveHit_Baron2,
            [TRAINER_SLIDE_LAST_SWITCHIN] =                          sText_LastSwitch_Baron2,
            [TRAINER_SLIDE_LAST_HALF_HP] =                           sText_LastHalf_Baron2,
        },

        [TRAINER_JAKSON_5] =
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] =                      sText_BeforeFirstTurn_Jakson3,
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT] = sText_FirstSuperEffectiveHit_Jakson3,
            [TRAINER_SLIDE_MEGA_EVOLUTION] =                         sText_MegaEvolution_Jakson,
            [TRAINER_SLIDE_LAST_SWITCHIN] =                          sText_LastSwitch_Jakson3,
            [TRAINER_SLIDE_LAST_HALF_HP] =                           sText_LastHalf_Jakson3,
        },
        [TRAINER_HARPER_5] =
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] =                      sText_BeforeFirstTurn_Harper3,
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT] = sText_FirstSuperEffectiveHit_Harper3,
            [TRAINER_SLIDE_MEGA_EVOLUTION] =                         sText_MegaEvolution_Harper,
            [TRAINER_SLIDE_LAST_SWITCHIN] =                          sText_LastSwitch_Harper3,
            [TRAINER_SLIDE_LAST_HALF_HP] =                           sText_LastHalf_Harper3,
        },
        [TRAINER_REDD_5] =
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] =                      sText_BeforeFirstTurn_Redd3,
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT] = sText_FirstSuperEffectiveHit_Redd3,
            [TRAINER_SLIDE_MEGA_EVOLUTION] =                         sText_MegaEvolution_Redd,
            [TRAINER_SLIDE_LAST_SWITCHIN] =                          sText_LastSwitch_Redd3,
            [TRAINER_SLIDE_LAST_HALF_HP] =                           sText_LastHalf_Redd3,
        },
        [TRAINER_SAKURA_5] =
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] =                      sText_BeforeFirstTurn_Sakura3,
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT] = sText_FirstSuperEffectiveHit_Sakura3,
            [TRAINER_SLIDE_MEGA_EVOLUTION] =                         sText_MegaEvolution_Sakura,
            [TRAINER_SLIDE_LAST_SWITCHIN] =                          sText_LastSwitch_Sakura3,
            [TRAINER_SLIDE_LAST_HALF_HP] =                           sText_LastHalf_Sakura3,
        },
        [TRAINER_BARON_5] =
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] =                      sText_BeforeFirstTurn_Baron3,
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT] = sText_FirstSuperEffectiveHit_Baron3,
            [TRAINER_SLIDE_MEGA_EVOLUTION] =                         sText_MegaEvolution_Baron,
            [TRAINER_SLIDE_LAST_SWITCHIN] =                          sText_LastSwitch_Baron3,
            [TRAINER_SLIDE_LAST_HALF_HP] =                           sText_LastHalf_Baron3,
        },
    },
};

static const u8* const sFrontierTrainerSlides[DIFFICULTY_COUNT][FRONTIER_TRAINERS_COUNT][TRAINER_SLIDE_COUNT] =
{
    [DIFFICULTY_NORMAL] =
    {
    },
};

static const u8* const sTestTrainerSlides[DIFFICULTY_COUNT][TRAINERS_COUNT][TRAINER_SLIDE_COUNT] =
{
#include "../test/battle/trainer_slides.h"
};

static u32 BattlerHPPercentage(u32 battler, u32 operation, u32 threshold)
{
    switch (operation)
    {
        case LESS_THAN:
            return gBattleMons[battler].hp < (gBattleMons[battler].maxHP / threshold);
        case EQUAL:
            return gBattleMons[battler].hp == (gBattleMons[battler].maxHP / threshold);
        case GREATER_THAN:
            return gBattleMons[battler].hp > (gBattleMons[battler].maxHP / threshold);
        case LESS_THAN_OR_EQUAL:
            return gBattleMons[battler].hp <= (gBattleMons[battler].maxHP / threshold);
        case GREATER_THAN_OR_EQUAL:
            return gBattleMons[battler].hp >= (gBattleMons[battler].maxHP / threshold);
        case NOT_EQUAL:
        default:
            return gBattleMons[battler].hp != (gBattleMons[battler].maxHP / threshold);
    }
}

static u32 GetEnemyMonCount(u32 firstId, u32 lastId, bool32 onlyAlive)
{
    u32 i, count = 0;

    for (i = firstId; i < lastId; i++)
    {
        u32 species = GetMonData(&gEnemyParty[i], MON_DATA_SPECIES_OR_EGG, NULL);
        if (species != SPECIES_NONE
                && species != SPECIES_EGG
                && (!onlyAlive || GetMonData(&gEnemyParty[i], MON_DATA_HP, NULL)))
            count++;
    }

    return count;
}

static const u8* const *GetTrainerSlideArray(enum DifficultyLevel difficulty, u32 trainerId, u32 slideId)
{
    if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
        return sFrontierTrainerSlides[difficulty][trainerId];
    else if (TESTING)
        return sTestTrainerSlides[difficulty][trainerId];
    else
        return sTrainerSlides[difficulty][trainerId];
}

static bool32 DoesTrainerHaveSlideMessage(enum DifficultyLevel difficulty, u32 trainerId, u32 slideId)
{
    const u8* const *trainerSlides = GetTrainerSlideArray(difficulty, trainerId, slideId);
    const u8* const *trainerSlidesNormal = GetTrainerSlideArray(DIFFICULTY_NORMAL, trainerId, slideId);

    if (trainerSlides[slideId] == NULL)
        return (trainerSlidesNormal[slideId] != NULL);
    else
        return TRUE;
}

void SetTrainerSlideMessage(enum DifficultyLevel difficulty, u32 trainerId, u32 slideId)
{
    const u8* const *trainerSlides = GetTrainerSlideArray(difficulty, trainerId, slideId);
    const u8* const *trainerSlidesNormal = GetTrainerSlideArray(DIFFICULTY_NORMAL, trainerId, slideId);

    if (trainerSlides[slideId] != NULL)
        gBattleStruct->trainerSlideMsg = trainerSlides[slideId];
    else
        gBattleStruct->trainerSlideMsg = trainerSlidesNormal[slideId];
}

static bool32 ShouldRunTrainerSlidePlayerLandsFirstCriticalHit(enum TrainerSlideType slideId)
{
    return IsTrainerSlideInitialized(slideId);
}

static bool32 ShouldRunTrainerSlideEnemyLandsFirstCriticalHit(enum TrainerSlideType slideId)
{
    return IsTrainerSlideInitialized(slideId);
}

static bool32 ShouldRunTrainerSlidePlayerLandsFirstSuperEffectiveHit(u32 battler, enum TrainerSlideType slideId)
{
    if (!IsTrainerSlideInitialized(slideId))
        return FALSE;

    if (!IsBattlerAlive(battler))
        return FALSE;

    return TRUE;
}

static bool32 ShouldRunTrainerSlidePlayerLandsFirstSTABMove(u32 firstId, u32 lastId, enum TrainerSlideType slideId)
{
    if (!IsTrainerSlideInitialized(slideId))
        return FALSE;

    if (GetEnemyMonCount(firstId, lastId, TRUE) != GetEnemyMonCount(firstId, lastId, FALSE))
        return FALSE;

    return TRUE;
}

static bool32 ShouldRunTrainerSlidePlayerLandsFirstDown(u32 firstId, u32 lastId)
{
    return ((GetEnemyMonCount(firstId, lastId, TRUE) == (GetEnemyMonCount(firstId, lastId, FALSE) - 1)));
}

static bool32 ShouldRunTrainerSlideEnemyMonUnaffected(u32 firstId, u32 lastId, enum TrainerSlideType slideId)
{
    if (!IsTrainerSlideInitialized(slideId))
        return FALSE;

    return (GetEnemyMonCount(firstId, lastId, TRUE) == GetEnemyMonCount(firstId, lastId, FALSE));
}

static bool32 ShouldRunTrainerSlideLastSwitchIn(u32 battler)
{
    return !CanBattlerSwitch(battler);
}

static bool32 ShouldRunTrainerSlideLastHalfHP(u32 firstId, u32 lastId, u32 battler)
{
    if (GetEnemyMonCount(firstId, lastId, TRUE) != 1)
        return FALSE;

    if (BattlerHPPercentage(battler, GREATER_THAN, 2))
        return FALSE;

    return (BattlerHPPercentage(battler, GREATER_THAN, 4));
}

static bool32 ShouldRunTrainerSlideLastLowHp(u32 firstId, u32 lastId, u32 battler)
{
    if (GetEnemyMonCount(firstId, lastId, TRUE) != 1)
        return FALSE;

    return (BattlerHPPercentage(battler, LESS_THAN_OR_EQUAL, 4));
}

static void SetTrainerSlideParamters(u32 battler, u32* firstId, u32* lastId, u32* trainerId, u32* retValue)
{
    if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS)
    {
        if (gBattlerPartyIndexes[battler] >= MULTI_PARTY_SIZE)
        {
            *firstId = MULTI_PARTY_SIZE;
            *lastId = PARTY_SIZE;
            *trainerId = SanitizeTrainerId(TRAINER_BATTLE_PARAM.opponentB);
            *retValue = TRAINER_SLIDE_TARGET_TRAINER_B;
        }
        else
        {
            *firstId = 0;
            *lastId = MULTI_PARTY_SIZE;
            *trainerId = SanitizeTrainerId(TRAINER_BATTLE_PARAM.opponentA);
        }
    }
    else
    {
        *firstId = 0;
        *lastId = PARTY_SIZE;
        *trainerId = SanitizeTrainerId(TRAINER_BATTLE_PARAM.opponentA);
    }
}

enum TrainerSlideTargets ShouldDoTrainerSlide(u32 battler, enum TrainerSlideType slideId)
{
    u32 firstId, lastId, trainerId;
    u32 retValue = TRAINER_SLIDE_TARGET_TRAINER_A;
    bool32 shouldRun = FALSE;

    if (!(gBattleTypeFlags & BATTLE_TYPE_TRAINER) || IsOnPlayerSide(battler))
        return TRAINER_SLIDE_TARGET_NONE;

    SetTrainerSlideParamters(battler, &firstId, &lastId, &trainerId, &retValue);
    enum DifficultyLevel difficulty = GetCurrentDifficultyLevel();

    gBattleScripting.battler = battler;

    if (IsTrainerSlidePlayed(slideId))
        return TRAINER_SLIDE_TARGET_NONE;

    if (!DoesTrainerHaveSlideMessage(difficulty,trainerId,slideId))
        return TRAINER_SLIDE_TARGET_NONE;

    switch (slideId)
    {
        case TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT:
            shouldRun = ShouldRunTrainerSlidePlayerLandsFirstCriticalHit(slideId);
            break;
        case TRAINER_SLIDE_ENEMY_LANDS_FIRST_CRITICAL_HIT:
            shouldRun = ShouldRunTrainerSlideEnemyLandsFirstCriticalHit(slideId);
            break;
        case TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT:
            shouldRun = ShouldRunTrainerSlidePlayerLandsFirstSuperEffectiveHit(battler, slideId);
            break;
        case TRAINER_SLIDE_PLAYER_LANDS_FIRST_STAB_MOVE:
            shouldRun = ShouldRunTrainerSlidePlayerLandsFirstSTABMove(firstId, lastId, slideId);
            break;
        case TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN:
            shouldRun = ShouldRunTrainerSlidePlayerLandsFirstDown(firstId, lastId);
            break;
        case TRAINER_SLIDE_ENEMY_MON_UNAFFECTED:
            shouldRun = ShouldRunTrainerSlideEnemyMonUnaffected(firstId, lastId, slideId);
            break;
        case TRAINER_SLIDE_LAST_SWITCHIN:
            shouldRun = ShouldRunTrainerSlideLastSwitchIn(battler);
            break;
        case TRAINER_SLIDE_LAST_HALF_HP:
            shouldRun = ShouldRunTrainerSlideLastHalfHP(firstId, lastId, battler);
            break;
        case TRAINER_SLIDE_LAST_LOW_HP:
            shouldRun = ShouldRunTrainerSlideLastLowHp(firstId, lastId, battler);
            break;
        case TRAINER_SLIDE_BEFORE_FIRST_TURN:
        case TRAINER_SLIDE_MEGA_EVOLUTION:
        case TRAINER_SLIDE_Z_MOVE:
        case TRAINER_SLIDE_DYNAMAX:
            shouldRun = TRUE;
            break;
        default:
            return TRAINER_SLIDE_TARGET_NONE;
    }

    if (shouldRun == FALSE)
        return TRAINER_SLIDE_TARGET_NONE;

    MarkTrainerSlideAsPlayed(slideId);
    SetTrainerSlideMessage(difficulty,trainerId,slideId);
    return retValue;
}

static bool32 IsSlideInitalizedOrPlayed(enum TrainerSlideType slideId)
{
    if (IsTrainerSlideInitialized(slideId))
        return TRUE;

    if (IsTrainerSlidePlayed(slideId))
        return TRUE;

    return FALSE;
}

void TryInitializeFirstSTABMoveTrainerSlide(u32 battlerDef, u32 battlerAtk, u32 moveType)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_PLAYER_LANDS_FIRST_STAB_MOVE;

    if (IsSlideInitalizedOrPlayed(slideId))
        return;

    if ((IsOnPlayerSide(battlerDef)))
        return;

    if (IS_BATTLER_OF_TYPE(battlerAtk, moveType) == FALSE)
        return;

    InitalizeTrainerSlide(slideId);
}

void TryInitializeTrainerSlidePlayerLandsFirstCriticalHit(u32 target)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT;

    if (IsSlideInitalizedOrPlayed(slideId))
        return;

    if (IsOnPlayerSide(target))
        return;

    InitalizeTrainerSlide(slideId);
}

void TryInitializeTrainerSlideEnemyLandsFirstCriticalHit(u32 target)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_ENEMY_LANDS_FIRST_CRITICAL_HIT;

    if (IsSlideInitalizedOrPlayed(slideId))
        return;

    if (!IsOnPlayerSide(target))
        return;

    InitalizeTrainerSlide(slideId);
}

void TryInitializeTrainerSlidePlayerLandsFirstSuperEffectiveHit(u32 target)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT;

    if (IsSlideInitalizedOrPlayed(slideId))
        return;

    if (IsOnPlayerSide(target))
        return;

    InitalizeTrainerSlide(slideId);
}

void TryInitializeTrainerSlideEnemyMonUnaffected(u32 target)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_ENEMY_MON_UNAFFECTED;

    if (IsSlideInitalizedOrPlayed(slideId))
        return;

    if (IsOnPlayerSide(target))
        return;

    InitalizeTrainerSlide(slideId);
}

bool32 IsTrainerSlideInitialized(enum TrainerSlideType slideId)
{
    u32 arrayIndex = slideId / TRAINER_SLIDES_PER_ARRAY;
    u32 bitPosition = slideId % TRAINER_SLIDES_PER_ARRAY;

    return (gBattleStruct->slideMessageStatus.messageInitalized[arrayIndex] & (1 << bitPosition)) != 0;
}

bool32 IsTrainerSlidePlayed(enum TrainerSlideType slideId)
{
    u32 arrayIndex = slideId / TRAINER_SLIDES_PER_ARRAY;
    u32 bitPosition = slideId % TRAINER_SLIDES_PER_ARRAY;

    return (gBattleStruct->slideMessageStatus.messagePlayed[arrayIndex] & (1 << bitPosition)) != 0;
}

void InitalizeTrainerSlide(enum TrainerSlideType slideId)
{
    u32 arrayIndex = slideId / TRAINER_SLIDES_PER_ARRAY;
    u32 bitPosition = slideId % TRAINER_SLIDES_PER_ARRAY;

    gBattleStruct->slideMessageStatus.messageInitalized[arrayIndex] |= (1 << bitPosition);
}

void MarkTrainerSlideAsPlayed(enum TrainerSlideType slideId)
{
    u32 arrayIndex = slideId / TRAINER_SLIDES_PER_ARRAY;
    u32 bitPosition = slideId % TRAINER_SLIDES_PER_ARRAY;

    gBattleStruct->slideMessageStatus.messagePlayed[arrayIndex] |= (1 << bitPosition);
}
