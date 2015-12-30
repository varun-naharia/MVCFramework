//
//  UIColor+Helper.m
//  MVCFramework
//
//  Created by TechWizard on 23/12/15.
//  Copyright (c) 2015 Varun Naharia. All rights reserved.
//

#import "UIColor+Helper.h"
#import "UIConstants.h"

@implementation UIColor (Helper)
+(UIColor*)colorLightGray{
    return [UIColor colorWithRed:171/255.0 green:171/255.0 blue:171/255.0 alpha:1];
}
+(UIColor*)colorDarkGray{
    return [UIColor colorWithRed:60/255.0 green:60/255.0 blue:60/255.0 alpha:1];
}
+(UIColor*)colorMidGray{
    return [UIColor colorWithRed:113/255.0 green:113/255.0 blue:113/255.0 alpha:1];
}
+(UIColor*)colorRed{
    return [UIColor colorWithRed:194/255.0 green:6/255.0 blue:10/255.0 alpha:1];
}

+(UIColor *)submitBtnRedColor
{
   return [UIColor colorWithRed:0.76 green:0 blue:0.04 alpha:1];
}

+(UIColor *)waterFallBgColor
{
    return [UIColor colorWithRed:0.90 green:0.90 blue:0.90 alpha:1];
}

+(UIColor *)detailBGColor
{
    return [UIColor colorWithRed:0.96 green:0.96 blue:0.96 alpha:1];
}

+(UIColor *)buttonRedColor
{
    return [UIColor colorWithRed:0.75 green:0.157 blue:0.07 alpha:1];
}
+(UIColor *)formBorderColor
{
    return [UIColor colorWithHue:(DEFAULT_BORDER_SAT/360.0)
                      saturation:DEFAULT_BORDER_SAT
                      brightness:DEFAULT_BORDER_BRI
                           alpha:1.0];
}
+(UIColor *)formBGColor
{
    return [UIColor colorWithRed:0.93 green:0.93 blue:0.93 alpha:1];
}

+(UIColor *)defaultColor
{
    return [UIColor colorWithRed:251/255.0 green:251/255.0 blue:251/255.0 alpha:1];
}
+(UIColor *)detailPageContentColor
{
    return [UIColor darkGrayColor];
}

+(UIColor *)buttonEnableColor
{
    return [UIColor buttonRedColor];
}

+(UIColor *)buttonDisableColor
{
    return [UIColor grayColor];
}

+(UIColor*)color111111
{
    return [UIColor colorWithRed:17/255.0 green:17/255.0 blue:17/255.0 alpha:1];
}

+(UIColor*)color222222{
    return [UIColor colorWithRed:34/255.0 green:34/255.0 blue:34/255.0 alpha:1];
}
+(UIColor*)color333333{
    return [UIColor colorWithRed:51/255.0 green:51/255.0 blue:51/255.0 alpha:1];
}
+(UIColor*)color666666{
    return [UIColor colorWithRed:102/255.0 green:102/255.0 blue:102/255.0 alpha:1];
}
+(UIColor*)color999999
{
    return [UIColor colorWithRed:153/255.0 green:153/255.0 blue:153/255.0 alpha:1];
}
+(UIColor*)color3BAF24
{
    return [UIColor colorWithRed:59/255.0 green:175/255.0 blue:36/255.0 alpha:1];
}
+(UIColor*)color6F6F6F
{
    return [UIColor colorWithRed:111/255.0 green:111/255.0 blue:111/255.0 alpha:1];
}

+(UIColor*)color58D3CC{
    return [UIColor colorWithRed:88/255.0 green:211/255.0 blue:204/255.0 alpha:1];
}
+(UIColor*)color6B6B6B{
    return [UIColor colorWithRed:107/255.0 green:107/255.0 blue:107/255.0 alpha:1];
}
+(UIColor*)color61D2C0{
    return [UIColor colorWithRed:97/255.0 green:210/255.0 blue:192/255.0 alpha:1];
}
+(UIColor*)color434343
{
    return [UIColor colorWithRed:67/255.0 green:67/255.0 blue:67/255.0 alpha:1];
}
+(UIColor*)colorFFC000
{
    return [UIColor colorWithRed:255/255.0 green:192/255.0 blue:0/255.0 alpha:1];
}
+(UIColor*)colorF4F4F4
{
    return [UIColor colorWithRed:244/255.0 green:244/255.0 blue:244/255.0 alpha:1];
}
+(UIColor*)colorFBFBFB
{
    return [UIColor colorWithRed:251/255.0 green:251/255.0 blue:251/255.0 alpha:1];
}
+(UIColor*)colorE1E1E1
{
    return [UIColor colorWithRed:225/255.0 green:225/255.0 blue:225/255.0 alpha:1];
}
+(UIColor*)colorE4E4E4
{
    return [UIColor colorWithRed:228/255.0 green:228/255.0 blue:228/255.0 alpha:1];
}
+(UIColor*)colorE7E7E7
{
    return [UIColor colorWithRed:231/255.0 green:231/255.0 blue:231/255.0 alpha:1];
}
+(UIColor*)colorEDEDED
{
    return [UIColor colorWithRed:237/255.0 green:237/255.0 blue:237/255.0 alpha:1];
}

+(UIColor*)colorC2060A
{
    return [UIColor colorWithRed:194/255.0 green:6/255.0 blue:10/255.0 alpha:1];
}
+(UIColor*)colorCCCCCC
{
    return [UIColor colorWithRed:204/255.0 green:204/255.0 blue:204/255.0 alpha:1];
}
+(UIColor*)colorDDDDDD
{
    return [UIColor colorWithRed:221/255.0 green:221/255.0 blue:221/255.0 alpha:1];
}
+(UIColor*)colorEEEEEE
{
    return [UIColor colorWithRed:238/255.0 green:238/255.0 blue:238/255.0 alpha:1];
}

+(UIColor*)colorC2C2C2
{
    return [UIColor colorWithRed:194/255.0 green:194/255.0 blue:194/255.0 alpha:1];
}

+(UIColor*)colorAAAAAA{
    return [UIColor colorWithRed:170.0/255 green:170.0/255 blue:170.0/255 alpha:1];
}

+(UIColor*)color310234{
    return [UIColor colorWithRed:49.0/255 green:2.0/255 blue:52.0/255 alpha:1];
}
+(UIColor *)colorMenu{
    return [UIColor colorWithRed:102.0/255 green:0.0/255 blue:110.0/255 alpha:1];
}

+(UIColor*)color1C8CD4{
    return [UIColor colorWithHexString:@"1C8CD4"];
}

+ (UIColor *)colorWithHexString:(NSString *)hexString
{
    NSString *colorString = [[hexString stringByReplacingOccurrencesOfString:@"#" withString:@""] uppercaseString];
    CGFloat alpha, red, blue, green;
    switch([colorString length])
    {
        case 3: // #RGB
            alpha = 1.0f;
            red = [self colorComponentFrom:colorString start:0 length:1];
            green = [self colorComponentFrom:colorString start:1 length:1];
            blue = [self colorComponentFrom:colorString start:2 length:1];
            break;
        case 4: // #ARGB
            alpha = [self colorComponentFrom:colorString start:0 length:1];
            red = [self colorComponentFrom:colorString start:1 length:1];
            green = [self colorComponentFrom:colorString start:2 length:1];
            blue = [self colorComponentFrom:colorString start:3 length:1];
            break;
        case 6: // #RRGGBB
            alpha = 1.0f;
            red = [self colorComponentFrom:colorString start:0 length:2];
            green = [self colorComponentFrom:colorString start:2 length:2];
            blue = [self colorComponentFrom:colorString start:4 length:2];
            break;
        case 8: // #AARRGGBB
            alpha = [self colorComponentFrom:colorString start:0 length:2];
            red = [self colorComponentFrom:colorString start:2 length:2];
            green = [self colorComponentFrom:colorString start:4 length:2];
            blue = [self colorComponentFrom:colorString start:6 length:2];
            break;
        default:
            [NSException raise:@"Invalid color value" format:@"Color value %@ is invalid.  It should be a hex value of the form #RBG, #ARGB, #RRGGBB, or #AARRGGBB", hexString];
            break;
    }
    return [UIColor colorWithRed:red green:green blue:blue alpha:alpha];
}

+ (CGFloat)colorComponentFrom:(NSString *)string start:(NSUInteger)start length:(NSUInteger)length
{
    NSString *substring = [string substringWithRange:NSMakeRange(start, length)];
    NSString *fullHex = length == 2 ? substring : [NSString stringWithFormat:@"%@%@", substring, substring];
    unsigned hexComponent;
    [[NSScanner scannerWithString:fullHex] scanHexInt:&hexComponent];
    
    return hexComponent / 255.0;
}
@end
