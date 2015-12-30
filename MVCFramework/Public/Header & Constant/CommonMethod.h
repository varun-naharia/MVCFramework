//
//  CommonMethod.h
//  MVCFramework
//
//  Created by TechWizard on 23/12/15.
//  Copyright (c) 2015 Varun Naharia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface CommonMethod : NSObject

+(void)setNavigationTitle:(UINavigationItem *)navItem :(NSString *)title;
+(NSString *)changeLanguageWithlocalizedStringForKey:(NSString *)key;

@end
