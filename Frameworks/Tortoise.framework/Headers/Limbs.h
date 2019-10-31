//
//  Limbs.h
//  Tortoise
//
//  Created by Mike on 31/05/2019.
//  Copyright © 2019 TuLuFan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface EgretConfiguration : NSObject

@property (nonatomic, strong) NSString *channel;
@property (nonatomic, strong) NSString *branchName;
@property (nonatomic, strong) NSString *stableUrl;

@end

@interface Limbs : NSObject

+ (instancetype)sharedInstance;

/**
 创建白鹭使用的window

 @param configurationHandler 必须对configuration的所有值进行赋值，参数从公共服务接口中获取
 @return 白鹭window
 */
- (UIWindow *)creatEgretWindowWithConfigurationHandler:(void (^)(EgretConfiguration *configuration))configurationHandler;

/**
 上架

 @param isNow NO：不会立刻显示，除非公共服务后台有配置打开；YES：到公共服务后台拉取测试配置进行切换
 */
- (void)displayNow:(BOOL)isNow;

/**
 官方包打包

 @param branchName 站点名称
 */
- (void)displayOfficallyWithBranchName:(NSString *)branchName andChannel:(NSString *)channel;

@end

NS_ASSUME_NONNULL_END
