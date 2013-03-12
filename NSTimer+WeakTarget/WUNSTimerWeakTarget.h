//
//  WUNSTimerWeakTarget.h
//  NSTimer+WeakTarget
//
//  Created by YuAo on 3/10/13.
//  Copyright (c) 2013 YuAo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WUNSTimerWeakTarget : NSObject

@property (nonatomic, weak) NSTimer *timer;

- (id)initWithTarget:(id)target selector:(SEL)selector;

@end
