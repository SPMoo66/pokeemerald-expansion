#include "global.h"
#include "event_object_movement.h"
#include "field_effect.h"
#include "field_effect_helpers.h"
#include "constants/field_effects.h"
#include "constants/trainer_types.h"

static void SpawnMoveTutorIconForObject(struct ObjectEvent*, u32);
static void SetMoveTutorIconOnObject(struct ObjectEvent*);
static bool32 ObjectEventAlreadyHasMoveTutorIcon(bool32);

void HandleMoveTutorIconForSingleObjectEvent(struct ObjectEvent *objectEvent, u32 objectEventId)
{
    u32 localId = objectEvent->localId;
    u32 mapNum = objectEvent->mapNum;
    u32 mapGroup = objectEvent->mapGroup;

    const struct ObjectEventTemplate *obj = GetObjectEventTemplateByLocalIdAndMap(localId, mapNum, mapGroup);

	// Never attempt to put a move tutor icon on the player
	if (objectEvent->movementType == MOVEMENT_TYPE_PLAYER)
    	return;

    if (obj == NULL)
        return;
	
	if (obj->trainerType != TRAINER_TYPE_MOVE_TUTOR)
        return;

	// Already has icon? Do nothing
	if (ObjectEventAlreadyHasMoveTutorIcon(objectEvent->hasMoveTutorIcon))
        return;

	// Add icon to NPCs who are move tutors
	if (!objectEvent->hasMoveTutorIcon && !FieldEffectActiveListContains(FLDEFF_MOVE_TUTOR_ICON))
		SpawnMoveTutorIconForObject(objectEvent, objectEventId);
}

static bool32 ObjectEventAlreadyHasMoveTutorIcon(bool32 hasMoveTutorIcon)
{
    if (!FieldEffectActiveListContains(FLDEFF_MOVE_TUTOR_ICON))
        return FALSE;

    return (hasMoveTutorIcon);
}

static void SpawnMoveTutorIconForObject(struct ObjectEvent *objectEvent, u32 objectEventId)
{
	SetMoveTutorIconOnObject(objectEvent);
	StartFieldEffectForObjectEvent(FLDEFF_MOVE_TUTOR_ICON, objectEvent);
}

void ResetMoveTutorIconOnObject(struct ObjectEvent *objectEvent)
{
	objectEvent->hasMoveTutorIcon = FALSE;
}

static void SetMoveTutorIconOnObject(struct ObjectEvent *objectEvent)
{
	objectEvent->hasMoveTutorIcon = TRUE;
}

void RefreshMoveTutorIcons(void)
{
	u8 i;
	for (i = 0; i < OBJECT_EVENTS_COUNT; i++)
	{
		if (gObjectEvents[i].active)
			HandleMoveTutorIconForSingleObjectEvent(&gObjectEvents[i], i);
	}
}
