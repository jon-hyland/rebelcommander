#ifndef __DEFINES_H__
#define __DEFINES_H__

#define SAFE_DELETE(p) { if(p) { delete (p); (p)=NULL; }}
#define SAFE_RELEASE(p) { if(p) { (p)->Release(); (p)=NULL; }}

#define PROGRAM_VERSION "v0.9.3"
#define FULLSCREEN 1					//windowed mode not finished (won't work with 8bit colors?)
#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480
#define COLORS 256
#define COLOR_DEPTH 8
#define TRANSPARENT_COLOR 253
#define WORLD_WIDTH 1280
#define WORLD_HEIGHT 480
#define SCREEN_OFFSET 220
#define CONTAINED_SCREEN_LEFT 220
#define CONTAINED_SCREEN_RIGHT 859
#define CONTAINED_SCREEN_TOP 0
#define CONTAINED_SCREEN_BOTTOM 479
#define STAR_COUNT 600
#define MAX_OBJECT_EVENTS 99
#define MAX_OBJECT_INSTANCES 99
#define MAX_FIRE_INSTANCES 99
#define MAX_UP_INSTANCES 10

#define MAX_SOUNDS 64
#define DS_NUMCHANNELS 16
#define DS_CHANSPERSAMPLE 2
#define DS_BITSPERSAMPLE 16
#define DS_SAMPLERATE 22050
#define MAX_SOUND_INSTANCES 5 

#define MAX_LEVEL_EVENTS 256
#define SHIP_SPEED_BASE	float(1.65)
#define SHIP_SPEED_MULTIPLE	float(1.2)
#define SHIP_INVINCIBILITY_TIME_ON_CREATE 2500
#define SPEED_UP_TIME 30000
#define JOYSTICK_AXIS_MIN 100
#define PLAYER_EXTRA_LIVES 2
#define GAME_OVER_WAIT_TIME 5000

#define	LOGO_SCREEN -2
#define	TITLE_SCREEN -1
#define MAIN_MENU 0
#define	LEVEL_ONE 1
#define	LEVEL_TWO 2
#define	LEVEL_THREE 3
#define LEVEL_COUNT 3

enum ObjectType{
		ORANGE_BLIP_OBJECT=0,
		GREEN_BLIP_OBJECT,
		GROUND_CANNON_OBJECT,
		BLUE_SLITH_OBJECT,
		GOLD_SLITH_OBJECT,
		SPARK_OBJECT,
		OBJECT_COUNT};

enum UpType{
		NOUP=0,
		SPEED_UP,
		WEAPON_UP,
		LIFE_UP,
		UP_COUNT};

enum SpriteType{
		BLUE_ALPHA_SPRITE=0,
		RED_ALPHA_SPRITE,
		GRAY_ALPHA_SPRITE,
		SHIP_SPRITE, 
		SHIP_UP_SPRITE, 
		SHIP_DOWN_SPRITE,
		SHIP_DYING_SPRITE, 
		ORANGE_BLIP_SPRITE,
		ORANGE_BLIP_DYING_SPRITE,
		GREEN_BLIP_SPRITE,
		GREEN_BLIP_DYING_SPRITE,
		GROUND_CANNON_SPRITE, 
		GROUND_CANNON_DYING_SPRITE, 
		SPEED_UP_SPRITE,
		WEAPON_UP_SPRITE,
		LIFE_UP_SPRITE,
		DEFAULT_FIRE_SPRITE,
		SHIP_BOMB_SPRITE,
		BLUE_SLITH_SPRITE,
		GOLD_SLITH_SPRITE,
		SLITH_DYING_SPRITE,
		SPARK_SPRITE,
		SPARK_DYING_SPRITE,
		SPRITE_COUNT};

enum ObjAction{
		OBJECT_ACTION_ONE=0,
		OBJECT_ACTION_TWO,
		OBJECT_ACTION_THREE,
		OBJECT_ACTION_FOUR,
		OBJECT_ACTION_FIVE,
		OBJECT_ACTION_SIX,
		OBJECT_ACTION_SEVEN,
		OBJECT_ACTION_EIGHT,
		OBJECT_ACTION_NINE,
		OBJECT_ACTION_TEN,
		OBJECT_ACTION_ELEVEN,
		OBJECT_ACTION_TWELVE,
		OBJ_EVENT_ID_COUNT};

enum ShipState{
		SHIP_NORMAL=0, 
		SHIP_UP, 
		SHIP_DOWN, 
		SHIP_DYING};

enum FireType{
		SHIP_LASER_ONE=0,
		SHIP_BOMB,
		ENEMY_FIRE_ONE,
		FIRE_COUNT};

enum SoundType{
		ALIEN_INTRO_SOUND=0,
		BLIP_DIE_SOUND,
		CONTINUE_WAIT_SOUND,
		ENGINE_LOOP_SOUND,
		GAMEOVER_WAIT_SOUND,
		GENERIC_DIE_1_SOUND,
		INVULNERABLE_SOUND,
		MENU_UP_SOUND,
		OK_SOUND,
		PING_SOUND,
		REBIRTH_SOUND,
		SCORE_SOUND,
		SELECT_SOUND,
		SHIP_DIE_SOUND,
		UPGRADE_SOUND,
		ZAP_1_SOUND,
		ZAP_2_SOUND,
		ZAP_3_SOUND,
		ZAP_FULL_SOUND,
		SOUND_COUNT};



//#define    KeyDown(data, n)    ((data[n] & 0x80) ? true : false)
//#define    KeyUp(data, n)    ((data[n] & 0x80) ? false : true)

#endif