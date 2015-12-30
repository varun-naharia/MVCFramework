//
//  NdUncaughtExceptionHandler.m
//  MVCFramework
//
//  Created by TechWizard on 23/12/15.
//  Copyright (c) 2015 Varun Naharia. All rights reserved.
//

#import "NdUncaughtExceptionHandler.h"

NSString *applicationDocumentsDirectory()
{
    return [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject];
}

void UncaughtExceptionHandler(NSException *exception) {
    
    NSFileManager *fileManager = [NSFileManager defaultManager];
    NSArray *arr=[exception callStackSymbols];
    NSString *reason=[exception reason];
    NSString *name=[exception name];
    
    NSString *url=[NSString stringWithFormat:@"=============Tracking exception report=============\nname:\n%@\nreason:\n%@\ncallStackSymbols:\n%@",name,reason,[arr componentsJoinedByString:@"\n"]];

    NSString *path = [applicationDocumentsDirectory() stringByAppendingPathComponent:@"Exception.txt"];
    if([fileManager fileExistsAtPath:path])
    {
        NSFileHandle *fileHandle=[NSFileHandle fileHandleForUpdatingAtPath:path];
        
        [fileHandle seekToEndOfFile];
        
        NSData *data=[url dataUsingEncoding:NSUTF8StringEncoding];
        
        [fileHandle writeData:data];
        [fileHandle closeFile];
    }
    
    else
    {
     [url writeToFile:path atomically:YES encoding:NSUTF8StringEncoding error:nil];
    }
}

@implementation NdUncaughtExceptionHandler

-(NSString *)applicationDocumentsDirectory {
    return [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject];
}

+ (void)setDefaultHandler
{
    NSSetUncaughtExceptionHandler (&UncaughtExceptionHandler);
}

+ (NSUncaughtExceptionHandler*)getHandler
{
    return NSGetUncaughtExceptionHandler();
}


@end
