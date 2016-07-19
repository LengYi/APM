//
//  APMConfig.h
//  APMConfig
//
//  Created by liqing on 16/6/16.
//  Copyright © 2016年 cat. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/** 选项 */
@interface APMConfig : NSObject

#pragma mark meta data
/** 应用标识 */
@property (atomic, copy, readonly) NSString *bundleID;
/** 应用版本. */
@property (atomic, copy) NSString *bundleVersion;
/** 渠道标识 */
@property (atomic, copy, nullable, readonly) NSString *channel;
/** 设备标识, 默认nil. */
@property (atomic, copy, nullable) NSString *deviceID;

#pragma mark user data
/** 用户标识 */
@property (atomic, copy, nullable) NSString *userID;
/** 用户昵称 */
@property (atomic, copy, nullable) NSString *userNick;

/** 共享实例 */
+ (instancetype)configuration;
@end

NS_ASSUME_NONNULL_END
