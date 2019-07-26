#pragma once
#define TOUCH_ENABLE
/* TYPE DEFINITIONS */
typedef enum { 
	TR, 
	ENG, 
	ARABIC, 
	FR 
} Language;

typedef enum { 
	TOP_LEFT, 
	TOP_RIGHT, 
	TOP_MIDDLE, 
	CENTER, 
	CENTER_LEFT, 
	CENTER_RIGHT, 
	BOTTOM_LEFT, 
	BOTTOM_RIGHT, 
	BOTTOM_MIDDLE,
	CUSTOM_POS
} ofxFilikaAlignment;

typedef enum  {
	NONE,
	CUSTOM,
	RECTANGLE,
	ELLIPSE,
	IMAGE
} ofxFilikaBgMode;

typedef enum  {
	BUTTON_MODE_IMAGE,
	BUTTON_MODE_CUSTOM,
	BUTTON_MODE_SHAPE_ROUNRECT,
	BUTTON_MODE_SHAPE_RECTANGLE,
	BUTTON_MODE_SHAPE_ELLIPSE
}ofxFilikaButtonMode;
