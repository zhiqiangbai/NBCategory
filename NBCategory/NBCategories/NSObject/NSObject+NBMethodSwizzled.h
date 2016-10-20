//
//  NSObject+NBMethodSwizzled.h
//  NBRouter
//
//  Created by NapoleonBai on 16/10/18.
//  Copyright © 2016年 BaiZhiqiang. All rights reserved.
//

#import <Foundation/Foundation.h>
/**
 *  运行时插入并替换某个方法
 */
@interface NSObject (NBMethodSwizzled)
/**
 *  替换某个方法
 *
 *  @param originSelector   类原有的函数选择器
 *  @param swizzledSelector 需要替换的函数选择器
 */
+ (void)swizzleMethodOriginSelector:(SEL)originSelector withMethodSwizzledSelector:(SEL)swizzledSelector;

@end
