//
//  NdUncaughtExceptionHandler.h
//  MVCFramework
//
//  Created by TechWizard on 23/12/15.
//  Copyright (c) 2015 Varun Naharia. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NdUncaughtExceptionHandler : NSObject


+(void)setDefaultHandler;

+(NSUncaughtExceptionHandler *)getHandler;

@end
