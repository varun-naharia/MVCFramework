//
//  NSNumber+Helper.m
//  MVCFramework
//
//  Created by TechWizard on 23/12/15.
//  Copyright (c) 2015 Varun Naharia. All rights reserved.
//

#import "NSNumber+Helper.h"

@implementation NSNumber (Helper)
-(float)getRatingNumber{
    float rat = [self floatValue]/2;
    float fff = floorf(rat);
    float f2= rat-fff;
    if (f2<0.3) {
        f2 =0;
    }else if (f2<0.8){
        f2 = 0.5;
    }else {
        f2 = 1;
    }
    rat = fff + f2;
    
    return rat;
}
@end
