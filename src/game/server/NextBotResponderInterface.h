#pragma once
#ifndef _NEXT_BOT_EVENT_RESPONDER_INTERFACE_H_
#define _NEXT_BOT_EVENT_RESPONDER_INTERFACE_H_
#define NULL 0
class Path;
class CTakeDamageInfo;
class CBaseEntity;

struct CSoundParameters;
struct animevent_t;

//-------------------------------------------------------------------------------------------------------------------------
enum MoveToFalureType
{
	FAIL_NO_PATH_EXISTS,
	FAIL_STUCK,
	FAIL_FELL_OFF,
};
//--------------------------------------------------------------------------------------------------------------------------
/**
 * Events propagated to/between components.
 * To add an event, add its signature here and implement its propagation
 * to derived classes via FirstContainedResponder() and NextContainedResponder().
 * NOTE: Also add a translator to the Action class in NextBotBehavior.h.
 */
class INextBotEventResponder
{
public:
	DECLARE_CLASS_NOBASE(INextBotEventResponder);

	virtual ~INextBotEventResponder(){}

	virtual INextBotEventResponder *FirstContaintedResponder(void) const { return NULL; }
	virtual INextBotEventResponder* NextContainedResponder(INextBotEventResponder* current) const { return NULL; }

};