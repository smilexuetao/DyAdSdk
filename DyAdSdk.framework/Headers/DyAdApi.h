//
//  DyAdApi.h
//  DyAdSdk
//
//  Created by 雷凯 on 2019/7/6.
//  Copyright © 2019年 雷凯. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

static NSString* const SDK_VERSION = @"1.4.2";

@interface DyAdApi : NSObject

////
// 先初始化多游SDK
// mediaId:多游分配的 mediaId
// appKey:多游分配的 appKey
//
+(void) registerWithMediaId:(NSString*)mediaId
                     appKey:(NSString*)appKey;

//
// 打开广告列表页面
// currentVC:当前的ViewController
// userId:为当前应用的用户Id，或者是用户的唯一标志
//
+(void) presentListViewController:(UIViewController*) currentVC
                           userId:(NSString*)userId
                       advertType:(NSInteger) advertType;

// 打开广告列表页面
// currentVC:当前的ViewController
// advertId:为某个广告的广告ID，具体请查看多游广告后台
// userId:为接入App的用户Id，或者是用户的唯一标志
//
+(void) presentDetailViewController:(UIViewController*) currentVC
                             userId:(NSString*)userId
                           advertId:(NSString*)advertId;

// 打开广告列表页面
// currentVC:当前的ViewController
// userId:为接入App的用户Id，或者是用户的唯一标志
//
+(void) presentMineViewConroller:(UIViewController*) currentVC
                          userId:(NSString*) userId;


@end

NS_ASSUME_NONNULL_END
