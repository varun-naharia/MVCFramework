//
//  Constants.h
//  App
//

//  Copyright (c) 2012 Imaginato. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UIConstants : NSObject

extern NSString *const ALERT_TITLE;


#define CellRateScoreImageWidth 16
#define CellRateScoreImageHeight 16
#define CellRateScoreOffset 2
#define SUBVIEWHEIGHT DeviceHeight-114-NAVIGATION_BAR_HEIGHT-DEFAULT_BOTTOM_BUTTON_HEIGHT

#define TOTAL_PRICE_LEVEL 4

extern float const WATERFALL_SPACING_WIDTH;
extern float const WATERFALL_SPACING_HEIGHT;

extern double const DEFAULT_BUTTON_TITLE_SIZE;

//------ DEFAULT FORMATTING ------------
extern NSString *const DEFAULT_FONT_NAME;
extern NSString *const DEFAULT_FONT_BOLD_NAME;
extern NSString *const DEFAULT_FONT_LIGHT_NAME;

extern double const DEFAULT_STATIC_CELL_LABEL_FONT_SIZE;
extern double const DEFAULT_BACKGROUND_DARK_HUE;
extern double const DEFAULT_BACKGROUND_DARK_SAT;
extern double const DEFAULT_BACKGROUND_DARK_BRI;
extern double const DEFAULT_BACKGROUND_NORMAL_HUE;
extern double const DEFAULT_BACKGROUND_NORMAL_SAT;
extern double const DEFAULT_BACKGROUND_NORMAL_BRI;
extern double const DEFAULT_BACKGROUND_LIGHT_HUE;
extern double const DEFAULT_BACKGROUND_LIGHT_SAT;
extern double const DEFAULT_BACKGROUND_LIGHT_BRI;

extern double const DEFAULT_HIGHLIGHT_HUE;
extern double const DEFAULT_HIGHLIGHT_SAT;
extern double const DEFAULT_HIGHLIGHT_BRI;





extern double const DEFAULT_FRAME_BRI;
extern double const DEFAULT_FRAME_HUE;
extern double const DEFAULT_FRAME_SAT;


//button
extern double const NAVIGATION_BAR_HEIGHT;
extern double const DEFAULT_BOTTOM_BUTTON_HEIGHT;
extern double const BUTTON_MAIN_HUE;
extern double const BUTTON_MAIN_SAT;
extern double const BUTTON_MAIN_BRI;

extern double const BUTTON_GRAY_HUE ;
extern double const BUTTON_GRAY_SAT;
extern double const BUTTON_GRAY_BRI;

extern NSString *const POST_COUNT_FONT_NAME;

extern double const DEFAULT_BORDER_HUE;
extern double const DEFAULT_BORDER_SAT;
extern double const DEFAULT_BORDER_BRI;

extern double const DEFAULT_COUNT_FONT_SIZE;


extern double const DEFAULT_FONT_LIGHT_HUE;
extern double const DEFAULT_FONT_LIGHT_SAT;
extern double const DEFAULT_FONT_LIGHT_BRI;
extern double const DEFAULT_FONT_NORMAL_HUE;
extern double const DEFAULT_FONT_NORMAL_SAT;
extern double const DEFAULT_FONT_NORMAL_BRI;
extern double const DEFAULT_FONT_BOLD_HUE;
extern double const DEFAULT_FONT_BOLD_SAT;
extern double const DEFAULT_FONT_BOLD_BRI;

extern double const DEFAULT_FONT_INVERSE_BOLD_HUE;
extern double const DEFAULT_FONT_INVERSE_BOLD_SAT;
extern double const DEFAULT_FONT_INVERSE_BOLD_BRI;

//------ SEARCH RESULTS FORMATTING --------

extern double const POST_COUNT_FONT_SIZE;
extern double const POST_COUNT_FONT_HUE;
extern double const POST_COUNT_FONT_SAT;
extern double const POST_COUNT_FONT_BRI;

extern NSString *const ITEM_TITLE_FONT_NAME;
extern double const ITEM_TITLE_FONT_SIZE;
extern double const ITEM_TITLE_FONT_H;
extern double const ITEM_TITLE_FONT_S;
extern double const ITEM_TITLE_FONT_B;

//Cuisine, Occassion, any tags
extern NSString *const ITEM_TAG_FONT_NAME;
extern double const ITEM_TAG_FONT_SIZE;
extern double const ITEM_TAG_FONT_H;
extern double const ITEM_TAG_FONT_S;
extern double const ITEM_TAG_FONT_B;

//Item Statistic (counts, distance, price level..)
extern NSString *const ITEM_STAT_FONT_NAME;
extern double const ITEM_STAT_FONT_SIZE;
extern double const ITEM_STAT_FONT_H;
extern double const ITEM_STAT_FONT_S;
extern double const ITEM_STAT_FONT_B;

//Item Rating
extern NSString *const ITEM_RATING_FONT_NAME;
extern double const ITEM_RATING_FONT_SIZE;
extern double const ITEM_RATING_FONT_H;
extern double const ITEM_RATING_FONT_S;
extern double const ITEM_RATING_FONT_B;


//-------- Table Formatting
extern NSString *const TABLE_SECTION_HEADER_FONT_NAME;
extern double const TABLE_SECTION_HEADER_FONT_SIZE;

//-------- DETAIL FORMATTING --------------




extern NSString *const IMAGE_SUFFIX_LARGE;
extern NSString *const IMAGE_SUFFIX_MEDIUM;
extern NSString *const IMAGE_SUFFIX_SMALL;

extern double const IMAGE_WIDTH;
extern double const POST_CONTENT_WIDTH;
extern double const POST_MESSAGE_CONTENT_WIDTH;
extern double const POST_CELL_MARGIN;

extern double const PAGE_TITLE_FONT_SIZE;
extern double const PAGE_TITLE_CAPTION_FONT_SIZE;
extern double const DEFAULT_INFO_HEADER_FONT_SIZE;
extern double const DEFAULT_INFO_DATA_FONT_SIZE;

extern double const CUISINE_TITLE_FONT_SIZE;
extern NSString *const POST_TITLE_FONT_NAME;
extern double const POST_TITLE_FONT_SIZE;

extern double const POST_TITLE_CAPTION_FONT_SIZE;
extern NSString *const POST_TIMESTAMP_FONT_NAME;
extern double const POST_TIMESTAMP_FONT_SIZE;
extern double const POST_PROFILE_IMAGE_WIDTH;
extern double const POST_PROFILE_IMAGE_HEIGHT;

extern NSString *const POST_MESSAGE_FONT_NAME;
extern double const POST_MESSAGE_FONT_SIZE;
extern double const POST_MESSAGE_SPACING;
extern double const POST_COMMENT_FONT_SIZE;
extern double const POST_COMMENT_NAME_FONT_SIZE;
extern double const POST_COMMENT_TIMESTAMP_FONT_SIZE;
extern double const POST_DETAIL_TITLE_FONT_SIZE;
extern double const POST_DETAIL_TITLE_CAPTION_FONT_SIZE;
extern double const POST_DETAIL_NICKNAME_FONT_SIZE;
extern double const POST_DETAIL_TIMESTAMP_FONT_SIZE;
extern double const POST_DETAIL_DESCRIPION_FONT_SIZE;

extern NSString *const POST_MESSAGE_NICKNAME_FONT_NAME;
extern double const POST_MESSAGE_NICKNAME_FONT_SIZE;
extern NSString *const POST_MESSAGE_TIMESTAMP_FONT_NAME;
extern double const POST_MESSAGE_TIMESTAMP_FONT_SIZE;


extern NSString *const PERSONAL_MENU_FONT_NAME;
extern double const PERSONAL_MENU_FONT_SIZE;

extern NSString *const SECTION_HEADER_FONT_NAME;
extern double const SECTION_HEADER_HEIGHT;
extern double const SECTION_HEADER_FONT_SIZE;
//FOUNDATION_EXPORT double const DEFAULT_CELLGROUP_BACKGROUND_HUE;
//FOUNDATION_EXPORT double const DEFAULT_CELLGROUP_BACKGROUND_SATURATION;
//FOUNDATION_EXPORT double const DEFAULT_CELLGROUP_BACKGROUND_BRIGHTNESS;


extern double const USER_MESSAGE_CONTENT_WIDTH;
extern double const USER_MESSAGE_SPACING ;
extern NSString *const USER_MESSAGE_FONT_NAME;
extern double const USER_MESSAGE_FONT_SIZE;
extern NSString *const USER_MESSAGE_NICKNAME_FONT_NAME;

extern double const TAG_CAMERA;
extern double const TAG_LIKES;
extern double const TAG_COMMENTS;
extern double const TAG_POST;
extern double const TAG_MESSAGE;
extern double const TAG_PROFILE;

//sizes

extern NSString *const DEFAULT_IMAGE_STRING;

extern float const CELL_CONTENT_OFFSET;

extern float const MARGIN_CONTENT_OFFSET;

//Avatar Image size
extern float const BIG_AVATAR_IMAGE_WIDTH;
extern float const BIG_AVATAR_IMAGE_HEIGHT;
extern float const MIDDLE_AVATAR_IMAGE_WIDTH;
extern float const MIDDLE_AVATAR_IMAGE_HEIGHT;
extern float const COMMENT_BIG_AVATAR_IMAGE_WIDTH;
extern float const COMMENT_BIG_AVATAR_IMAGE_HEIGHT;
extern float const COMMENT_SMALL_AVATAR_IMAGE_WIDTH;
extern float const COMMENT_SMALL_AVATAR_IMAGE_HEIGHT;
extern float const COMMENT_AVATAR_IMAGE_HEIGHT;
extern float const SMALL_AVATAR_IMAGE_WIDTH;
extern float const SMALL_AVATAR_IMAGE_HEIGHT;

//scrollview image
extern float const SCROLL_IMAGE_WIDTH;
extern float const SCROLL_IMAGE_HEIGHT;
extern float const SCROLL_IMAGE_OFFSET;

//Menu image
extern float const MENU_IMAGE_WIDTH;
extern float const MENU_IMAGE_HEIGHT;

//Booking PickerView
extern float const PICKER_VIEW_HEIGHT;


extern float const RATING_STAR_WIDTH;

extern double const DETAIL_SECTION_TITLE_SIZE;
extern double const DETAIL_BODY_FONT_SIZE;

//Upload Picture Size
extern double const UPLOAD_PICTURE_SIZE_WIDTH;


//HomeView
extern double const HOME_VIEW_SIZE_WIDTH;
extern double const DISH_VIEW_SIZE_WIDTH;

extern NSString *const GET_USERPOINTS_NOTIFICATION;


//UIFont
extern NSString *const FONT_OPEN_SANS_DEFAULT;
extern NSString *const FONT_OPEN_SANS_LIGHT;
extern NSString *const FONT_OPEN_SANS_ITALIC;
extern NSString *const FONT_MONTSERRAT_REGULAR;
extern NSString *const FONT_OPEN_SANS_SEMIBOLD;
extern NSString *const FONT_OPEN_SANS_BOLD;
extern NSString *const FONT_PROXIMANOVA_REGULAR;
extern NSString *const FONT_GOTHAM_MEDIUM;
extern NSString *const FONT_GOTHAM_BOOK;
extern NSString *const FONT_GOTHAM_LIGHT;

//UI PT SANS FONT
extern NSString *const FONT_PT_SANS_REGULAR;
extern NSString *const FONT_PT_SANS_BOLD;
extern NSString *const FONT_ARVO;
extern NSString *const FONT_ARVO_BOLD;


extern double const FONT_SIZE_10;
extern double const FONT_SIZE_11;
extern double const FONT_SIZE_12;
extern double const FONT_SIZE_13;
extern double const FONT_SIZE_14;
extern double const FONT_SIZE_15;
extern double const FONT_SIZE_16;
extern double const FONT_SIZE_18;


extern float const CELL_HEIGHT_45;
extern float const CELL_HEIGHT_50;
extern float const CELL_HEIGHT_70;
extern float const CELL_HEIGHT_120;

//map
extern float const DELTA_MAP;

#define MAIN_MENU_CELL_HEIGHT [[UIScreen mainScreen] bounds].size.height/3*2/8
#define NavibarHeight 64.



@end
