//
//  UIDevice+Util.h
//  MVCFramework
//
//  Created by TechWizard on 23/12/15.
//  Copyright (c) 2015 Varun Naharia. All rights reserved.
//

#import <UIKit/UIKit.h>

enum {
    /*-------------- iPhone 1,3,3GS Standard Resolution (320x480px) --------*/
    UIDevice_iPhoneStandardRes      = 1,
    /*-------------- iPhone 4,4S HD Resolution(640x960px) ------------------*/
    UIDevice_iPhoneHiRes            = 2,
    /*-------------- iPhone 5 HD Resolution(640x1136px) --------------------*/
    UIDevice_iPhoneTallerHiRes      = 3,
    /*-------------- iPad 1,2 Standard Resolution (1024x768px) -------------*/
    UIDevice_iPadStandardRes        = 4,
    /*-------------- iPad 3 High Resolution(2048x1536px) -------------------*/
    UIDevice_iPadHiRes              = 5
};
typedef NSUInteger UIDeviceResolution;

@interface UIDevice (Resolutions)

+ (UIDeviceResolution) currentResolution;

+ (BOOL)isRunningOniPhone5;

+ (BOOL)isRunningOniPhone;

@end


typedef NS_ENUM(NSInteger,IosVersion){
    IosVersion5 = 5,
    IosVersion6 = 6,
    IosVersion7 = 7,
    IosVersion8 = 8
};

typedef NS_ENUM(NSInteger, DeviceVersion){
    iPhone4=0,
    iPhone5=1,
    iPhone6=2
};

typedef NS_ENUM(NSInteger, ScreemSize){
    ScreemSize_unknow,
    ScreemSize3_5,
    ScreemSize4_0,
};


@interface UIDevice (Util)

+(int)heightDifference;

-(BOOL)isVersion:(NSInteger)version;
+(BOOL)isLaterThanIos6;
+(BOOL)isIos7;
+(BOOL)isIos8;
+(BOOL)isIos6;


+(BOOL)isIphone4;
+(BOOL)isIphone5;
+(BOOL)isIphone6;
+(BOOL)isLaterThanIphone5;


+(BOOL)isScreemSizeOf_4_0;
+(BOOL)isScreemSizeOf_3_5;

+ (BOOL)isRetina;


@end





