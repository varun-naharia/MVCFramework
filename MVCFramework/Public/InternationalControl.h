//
//  InternationalControl.h
//  MVCFramework
//
//  Created by TechWizard on 23/12/15.
//  Copyright (c) 2015 Varun Naharia. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface InternationalControl : NSObject
/*----------- Get the current resource file -----------*/
+(NSBundle *)bundle;

/*------------ Initialization language files ------------*/
+(void)initUserLanguage;

/*---------- Gets the application of the current language -------------*/
+(NSString *)userLanguage;

/*---------- Set the current language ----------*/
+(void)setUserlanguage:(NSString *)language;
@end
