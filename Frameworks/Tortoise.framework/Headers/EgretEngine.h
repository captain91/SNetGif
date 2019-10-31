//
//  EgretEngine.h
//  Tortoise
//
//  Created by Mike on 05/06/2019.
//  Copyright © 2019 TuLuFan. All rights reserved.
//

#import "EgretNativeIOS.h"

NS_ASSUME_NONNULL_BEGIN

@interface EgretEngine : EgretNativeIOS <NSCoding>

+ (instancetype)sharedInstance;

@end

NS_ASSUME_NONNULL_END
