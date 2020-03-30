//
//  SNetRequestGifView.h
//  encTest
//
//  Created by CMYApple 2019/10/30.
//  Copyright © 2019 RDD. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^isConnectBlock)(BOOL isConnect);
@interface SNetGif : UIView

+(instancetype)sNetsharedInstance;

//监听网络
//-(void)sn_getNetStatusWithBundleId:(NSString *)bundleId;
-(void)sn_getNetStatusWithBundleId:(NSString *)bundleId isJumpBlock:(isConnectBlock)isConnect ;

@end

NS_ASSUME_NONNULL_END
