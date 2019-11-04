//
//  LinkDeepManager.h
//  LinkDeep
//
//  Created by Mike on 19/06/2019.
//  Copyright © 2019 Mike. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^ParametersHandler)(NSDictionary *parameters);

@interface LinkDeepManager : NSObject

+ (instancetype)sharedInstance;
- (void)registerService;
@property (nonatomic, copy) ParametersHandler wakeupParametersHandler;
- (void)fetchInstallationParametersWithHandler:(ParametersHandler)parametersHandler;

- (BOOL)shouldHandleWithOpenURL:(NSURL *)url;
- (void)handleWithOpenURL:(NSURL *)url;
- (BOOL)shouldContinueUserActivity:(NSUserActivity *)userActivity;
- (void)continueUserActivity:(NSUserActivity *)userActivity;

@end

NS_ASSUME_NONNULL_END
