//
//  CommonMethod.m
//  MVCFramework
//
//  Created by TechWizard on 23/12/15.
//  Copyright (c) 2015 Varun Naharia. All rights reserved.
//

#import "CommonMethod.h"
#import "InternationalControl.h"


@implementation CommonMethod


+(void)setNavigationTitle:(UINavigationItem *)navItem :(NSString *)title
{
    UILabel *lblTitle = [[UILabel alloc] init];
    lblTitle.text =title;
    lblTitle.backgroundColor=[UIColor clearColor];
    lblTitle.shadowOffset = CGSizeMake(0, 1);
    lblTitle.font = font12 ;
    lblTitle.textColor = [UIColor colorWithHexString:@"#ffffff"];
    lblTitle.text = [lblTitle.text uppercaseString];
    [lblTitle sizeToFit];
    navItem.titleView = lblTitle;
}

+(NSString *)changeLanguageWithlocalizedStringForKey:(NSString *)key
{
    [InternationalControl initUserLanguage];
    NSBundle *bundle = [InternationalControl bundle];
    return [bundle localizedStringForKey:key value:nil table:@"International"];
}

@end

