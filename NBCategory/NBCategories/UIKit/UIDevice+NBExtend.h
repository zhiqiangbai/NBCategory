//
//  UIDevice+NBExtend.h
//  NBBaseFrameCode
//
//  Created by NapoleonBai on 16/10/14.
//  Copyright © 2016年 BaiZhiqiang. All rights reserved.
//

#import <UIKit/UIKit.h>

//ios系统版本
#define IOS_10_X [[[UIDevice currentDevice] systemVersion] floatValue] >=10.0f
#define IOS_9_X ([[[UIDevice currentDevice] systemVersion] floatValue] >= 9.0f) && ([[[UIDevice currentDevice] systemVersion] floatValue] < 10.0f)
#define IOS_8_X ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0f) && ([[[UIDevice currentDevice] systemVersion] floatValue] < 9.0f)
#define IOS_7_X ([[[UIDevice currentDevice] systemVersion] floatValue] >= 7.0f) && ([[[UIDevice currentDevice] systemVersion] floatValue] < 8.0f)

#define IPHONE_3_5 ([UIScreen mainScreen].bounds.size.height==480.0f)

#define IPHONE_4_0 ([UIScreen mainScreen].bounds.size.height==568.0f)

#define IPHONE_4_7 ([UIScreen mainScreen].bounds.size.height==667.0f)

#define IPHONE_5_5 ([UIScreen mainScreen].bounds.size.height==736.0f || [UIScreen mainScreen].bounds.size.height==414.0f)

@interface UIDevice (NBExtend)


@end
