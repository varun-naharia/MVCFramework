//
//  InternationalControl.m
//  MVCFramework
//
//  Created by TechWizard on 23/12/15.
//  Copyright (c) 2015 Varun Naharia. All rights reserved.
//

#import "InternationalControl.h"

@implementation InternationalControl
static NSBundle *bundle = nil;

+ ( NSBundle * )bundle{
    return bundle;
}
+(void)initUserLanguage{
    NSUserDefaults *def = [NSUserDefaults standardUserDefaults];
    NSString *string = [def valueForKey:@"userLanguage"];
    if(string.length == 0){
        
        NSArray* languages = [def objectForKey:@"AppleLanguages"];
        NSString *current = [languages objectAtIndex:0];
        string = current;
        [def setValue:current forKey:@"userLanguage"];
        [def synchronize];
    }
    
    NSString *path = [[NSBundle mainBundle] pathForResource:string ofType:@"lproj"];
//    NSLog(@"lproj====%@",path);
    bundle = [NSBundle bundleWithPath:path];
}

+(NSString *)userLanguage{
    NSUserDefaults *def = [NSUserDefaults standardUserDefaults];
    NSString *language = [def valueForKey:@"userLanguage"];
    return language;
}

+(void)setUserlanguage:(NSString *)language{
    
    NSUserDefaults *def = [NSUserDefaults standardUserDefaults];
    NSString *path = [[NSBundle mainBundle] pathForResource:language ofType:@"lproj" ];
    bundle = [NSBundle bundleWithPath:path];
    NSLog(@"bundle==%@",bundle);
    [def setValue:language forKey:@"userLanguage"];
    
    [def synchronize];
}
@end
