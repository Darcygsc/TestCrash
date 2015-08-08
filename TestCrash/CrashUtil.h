//
//  CrashUtil.h
//  TestCrash
//
//  Created by chaos on 8/8/15.
//  Copyright (c) 2015 ace. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CrashUtil : NSObject

void uncaughtExceptionHandler(NSException *exception);

@end
