//
//  UIDevice+Util.m
//  MVCFramework
//
//  Created by TechWizard on 23/12/15.
//  Copyright (c) 2015 Varun Naharia. All rights reserved.
//

#import "UIDevice+Util.h"
#import "sys/sysctl.h"
@implementation UIDevice (Resolutions)
+ (UIDeviceResolution) currentResolution {
    if(UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone){
        if ([[UIScreen mainScreen] respondsToSelector: @selector(scale)]) {
            CGSize result = [[UIScreen mainScreen] bounds].size;
            result = CGSizeMake(result.width * [UIScreen mainScreen].scale, result.height * [UIScreen mainScreen].scale);
            if (result.height <= 480.0f)
                return UIDevice_iPhoneStandardRes;
            return (result.height > 960 ? UIDevice_iPhoneTallerHiRes : UIDevice_iPhoneHiRes);
        } else
            return UIDevice_iPhoneStandardRes;
    } else
        return (([[UIScreen mainScreen] respondsToSelector: @selector(scale)]) ? UIDevice_iPadHiRes : UIDevice_iPadStandardRes);
}


+ (BOOL)isRunningOniPhone5{
    if ([self currentResolution] == UIDevice_iPhoneTallerHiRes) {
        return YES;
    }
    return NO;
}


+ (BOOL)isRunningOniPhone{
    return (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone);
}



@end

@implementation UIDevice (Util)

-(NSInteger)currentVersion{
    if([self.systemVersion floatValue] < 6.0){
        return IosVersion5;
    }
    if([self.systemVersion floatValue] < 7.0){
        return IosVersion6;
    }
    if ([self.systemVersion floatValue] < 8.0){
        return IosVersion7;
    }
    return IosVersion8;
}

-(BOOL)isVersion:(NSInteger)version{
    UIDevice * device=[UIDevice currentDevice];
    return [device currentVersion] == version?YES:NO;
}


+(int)heightDifference
{
    UIDevice * device=[UIDevice currentDevice];
    if([device isVersion:IosVersion7] || [device isVersion:IosVersion8]){
        return 20;
    }
    return 0;
}
+(BOOL)isIos6{
    UIDevice * device=[UIDevice currentDevice];
    return [device isVersion:IosVersion6];
}
+(BOOL)isLaterThanIos6{
    UIDevice * device=[UIDevice currentDevice];
    return [device isVersion:IosVersion7] || [device isVersion:IosVersion8];
}
+(BOOL)isIos7{
    UIDevice * device=[UIDevice currentDevice];
    return [device isVersion:IosVersion7];
}
+(BOOL)isIos8{
    UIDevice * device=[UIDevice currentDevice];
    return [device isVersion:IosVersion8];
}

+(BOOL)isIphone4{
    return [[UIDevice currentDevice] deviceVersion] == iPhone4?YES:NO;
}
+(BOOL)isLaterThanIphone5{
    if ([[UIScreen mainScreen] bounds].size.height == 568){
        return TRUE;
    }
    if([[UIDevice currentDevice] deviceVersion] == iPhone6){
        return TRUE;
    }
    return FALSE;
}
+(BOOL)isIphone5{
    return ([[UIScreen mainScreen] bounds].size.height == 568)?TRUE:FALSE;
}
+(BOOL)isIphone6{
    return [[UIDevice currentDevice] deviceVersion] == iPhone6?YES:NO;
}

-(NSInteger) deviceVersion{
    size_t size;
    sysctlbyname("hw.machine", NULL, &size, NULL, 0);
    char * machine = (char *)malloc(size);
    sysctlbyname("hw.machine", machine, &size, NULL, 0);
    NSString * platform = [NSString stringWithCString:machine encoding:NSUTF8StringEncoding];
    
    free(machine);
    
    if([platform hasPrefix:@"iPhone3"]||[platform hasPrefix:@"iPhone4"]){
        return iPhone4;
    }
    if([platform hasPrefix:@"iPhone5"]||[platform hasPrefix:@"iPhone6"]){
        return iPhone5;
    }
    return 0;
}

+(BOOL)isScreemSizeOf_3_5{
    UIDeviceResolution resolution=  [UIDevice currentResolution];
    return (resolution==UIDevice_iPhoneStandardRes||resolution==UIDevice_iPhoneHiRes)?YES:NO;
}

+(BOOL)isScreemSizeOf_4_0{
    UIDeviceResolution resolution=  [UIDevice currentResolution];
    return (resolution==UIDevice_iPhoneTallerHiRes)?YES:NO;
}
+ (BOOL)isRetina
{
    if ([[UIScreen mainScreen] respondsToSelector:@selector(displayLinkWithTarget:selector:)] && ([UIScreen mainScreen].scale == 2.0 || [UIScreen mainScreen].scale == 3.0))
        return YES;
    else
        return NO;
}

@end

