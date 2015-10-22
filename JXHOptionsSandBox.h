//
//  JXHOptionsSandBox.h
//  06-自定义Modal动画
//
//  Created by beihaiSellshou on 10/21/15.
//  Copyright © 2015 heima. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JXHOptionsSandBox : NSObject
+(void)setNums:(int)nums;
+(int)getNumsOfCols;
+(int)getNumsOfRows;
+(void)setAnimationDuration:(float)animationDuration;
+(CGFloat)getAnimationDuration;
+(void)setDamping:(float)Damping;
+(CGFloat)getDamping;
+(void)setSpringVelocity:(float)SpringVelocity;
+(CGFloat)getSpringVelocity;

@end
