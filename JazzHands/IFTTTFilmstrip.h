//
//  IFTTTFilmstrip.h
//  JazzHands
//
//  Created by Laura Skelton on 6/17/15.
//  Copyright (c) 2015 IFTTT Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IFTTTEasingFunction.h"
#import "IFTTTInterpolatable.h"

@interface IFTTTFilmstrip : NSObject

@property (NS_NONATOMIC_IOSONLY, getter=isEmpty, readonly) BOOL empty;
- (void)setValue:(id<IFTTTInterpolatable>)value atTime:(CGFloat)time;
- (void)setValue:(id<IFTTTInterpolatable>)value atTime:(CGFloat)time withEasingFunction:(IFTTTEasingFunction)easingFunction;
- (id<IFTTTInterpolatable>)valueAtTime:(CGFloat)time;

@end
