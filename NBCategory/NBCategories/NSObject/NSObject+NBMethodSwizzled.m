//
//  NSObject+NBMethodSwizzled.m
//  NBRouter
//
//  Created by NapoleonBai on 16/10/18.
//  Copyright © 2016年 BaiZhiqiang. All rights reserved.
//

#import "NSObject+NBMethodSwizzled.h"
#import "objc/runtime.h"

@implementation NSObject (NBMethodSwizzled)
+ (void)swizzleMethodOriginSelector:(SEL)originSelector withMethodSwizzledSelector:(SEL)swizzledSelector{
    Method originMethod=class_getInstanceMethod(self,originSelector);
    Method swizzledMethod=class_getInstanceMethod(self,swizzledSelector);
    if (class_addMethod(self, originSelector, method_getImplementation(swizzledMethod), method_getTypeEncoding(swizzledMethod))) {
        //添加成功后替换
        class_replaceMethod(self,swizzledSelector,method_getImplementation(originMethod),method_getTypeEncoding(originMethod));
    }else{
        method_exchangeImplementations(originMethod, swizzledMethod);
    }
    
}
@end
