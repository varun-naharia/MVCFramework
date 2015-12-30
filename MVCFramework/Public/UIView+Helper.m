//
//  UIView+Helper.m
//  MVCFramework
//
//  Created by TechWizard on 23/12/15.
//  Copyright (c) 2015 Varun Naharia. All rights reserved.
//

#import "UIView+Helper.h"
@implementation UIView (Helper)

-(CGFloat)endPointX
{
    return self.frame.origin.x+self.frame.size.width;
}
-(CGFloat)endPointY
{
    return self.frame.origin.y+self.frame.size.height;
}
-(CGFloat)startPointX
{
    return self.frame.origin.x;
}
-(CGFloat)startPointY
{
    return self.frame.origin.y;
}
@end
